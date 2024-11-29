#include "game_engine.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

GameEngine::GameEngine() : isRunning(false) {}

void GameEngine::Init() {
    board = Board(20, 20);
    snake = Snake();
    apple = Apple(Point(5, 5));
    isRunning = true;
}

void GameEngine::Run() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "Snake Game");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            ProcessInput(event);
        }

        Update();
        window.clear();
        Render(window);
        window.display();
    }
}

void GameEngine::ProcessInput(sf::Event& event) {
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::W) snake.SetDirection(Direction::Top);
        else if (event.key.code == sf::Keyboard::S) snake.SetDirection(Direction::Bottom);
        else if (event.key.code == sf::Keyboard::A) snake.SetDirection(Direction::Left);
        else if (event.key.code == sf::Keyboard::D) snake.SetDirection(Direction::Right);
    }
}

void GameEngine::Update() {
    snake.Move();
    if (snake.HasEaten(apple)) {
        apple.SetPosition(Point(8, 8));  // New apple position
    }
    if (snake.IsColliding()) {
        isRunning = false;
    }
}

void GameEngine::Render(sf::RenderWindow& window) {
    board.UpdateBoard(snake.GetBody(), apple.GetPosition());
    board.Draw(window);
}
