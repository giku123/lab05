cmake_minimum_required(VERSION 3.10)

project(SnakeGame)

set(CMAKE_CXX_STANDARD 17)

# Găsește SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Adaugă sursele
add_executable(SnakeGame main.cpp apple.cpp board.cpp game_engine.cpp point.cpp snake.cpp)

# Leagă cu SFML
target_link_libraries(SnakeGame sfml-graphics sfml-window sfml-system)
