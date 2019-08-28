cmake_minimum_required(VERSION 3.14)
project(BinarySearch)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        BinarySearch.hpp
        )


add_executable(binarySearchTest binarySearchTest.cpp ${SOURCE_FILES})

