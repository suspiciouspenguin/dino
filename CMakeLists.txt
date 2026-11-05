cmake_minimum_required(VERSION 3.14)

project(dino)

find_package(raylib REQUIRED)

add_executable(dino
    src/game.cpp
    src/world.cpp
    src/player.cpp
    src/enemy.cpp
)

target_link_libraries(dino PRIVATE raylib)
