cmake_minimum_required(VERSION 3.28)
project(untitled2)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled2 main.cpp
        strahPolicy.cpp
        strahPolicy.h
        OMS.cpp
        OMS.h
        House.cpp
        House.h
        center.cpp
        center.h
)
