#pragma once
#include <SFML/Graphics.hpp>
#include "point.hpp"
#include <vector>

class Board {
private:
    int width;
    int height;
    std::vector<std::vector<char>> grid;

public:
    Board(int width = 20, int height = 20);
    void Draw(sf::RenderWindow& window) const;
    void UpdateBoard(const std::vector<Point>& snakeBody, const Point& applePos);
};
