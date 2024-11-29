#include "board.hpp"

Board::Board(int width, int height) : width(width), height(height) {
    grid.resize(height, std::vector<char>(width, '.'));
}

void Board::Draw(sf::RenderWindow& window) const {
    const float cellSize = 20.f;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            sf::RectangleShape cell(sf::Vector2f(cellSize, cellSize));
            cell.setPosition(j * cellSize, i * cellSize);

            if (grid[i][j] == '.') {
                cell.setFillColor(sf::Color::White);  // Empty cell
            } else if (grid[i][j] == 'S') {
                cell.setFillColor(sf::Color::Green);  // Snake body
            } else if (grid[i][j] == 'A') {
                cell.setFillColor(sf::Color::Red);    // Apple
            }

            window.draw(cell);
        }
    }
}

void Board::UpdateBoard(const std::vector<Point>& snakeBody, const Point& applePos) {
    // Reset grid to empty cells
    for (auto& row : grid) {
        std::fill(row.begin(), row.end(), '.');
    }

    // Mark snake body
    for (const auto& segment : snakeBody) {
        grid[segment.y][segment.x] = 'S';
    }

    // Mark apple
    grid[applePos.y][applePos.x] = 'A';
}
