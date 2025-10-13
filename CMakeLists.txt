cmake_minimum_required(VERSION 4.0)
project(lab0)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab0
        main.cpp
        matrix_actions.cpp
        matrix_actions.h
        matrixio.cpp
        matrixio.h
        additional_invert.cpp
        additional_invert.h)
