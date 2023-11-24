cmake_minimum_required(VERSION 3.26)
project(9_LB)

set(CMAKE_CXX_STANDARD 17)

add_executable(9_LB main.cpp
        Polygon.h
        Circle.h
        Circle.cpp
        Polygon.cpp)
