cmake_minimum_required(VERSION 3.13)
project(game)

set(CMAKE_CXX_STANDARD 14)

add_executable(game main.cpp player.cpp player.h board.cpp board.h game.cpp game.h)