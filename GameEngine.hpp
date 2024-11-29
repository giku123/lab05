#pragma once
#include "board.hpp"
#include "snake.hpp"
#include "apple.hpp"
#include <SFML/Graphics.hpp>

class GameEngine {
private:
    Board board;
    Snake snake;
    Apple apple;
    bool isRunning;

public:
    GameEngine();
    void Init();
    void Run();
    void ProcessInput(sf::Event& event);
    void Update();
    void Render(sf::RenderWindow& window);
};
