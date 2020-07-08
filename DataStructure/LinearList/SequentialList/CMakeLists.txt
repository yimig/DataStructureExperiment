cmake_minimum_required(VERSION 3.16)
project(SequentialList)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SequentialList
        SequentialList.cpp
        SequentialList.h
        SequentialListTest.cpp)
