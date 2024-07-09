cmake_minimum_required(VERSION 3.28)
project(graphwork)

set(CMAKE_CXX_STANDARD 23)

add_executable(graphwork main.cpp
        edge.cpp
        edge.h
        graph.cpp
        graph.h
        RandomGraphGenerator.cpp
        RandomGraphGenerator.h
)
