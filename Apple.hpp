#pragma once
#include "point.hpp"

class Apple {
private:
    Point position;

public:
    Apple();
    Apple(const Point& pos);
    Point GetPosition() const;
    void SetPosition(const Point& pos);
};
