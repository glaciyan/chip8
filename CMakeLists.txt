cmake_minimum_required(VERSION 3.30)
project(chip8)

set(CMAKE_CXX_STANDARD 17)

add_executable(chip8 main.cpp
        chip8.cpp
        chip8.h)
