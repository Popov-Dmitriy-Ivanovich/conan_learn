# cmake_minimum_required(3.31)

PROJECT(MyAwesomeLibrary CXX)
set (CMAKE_CXX_STANDARD 20)

add_library(${PROJECT_NAME}, "IsEven.h" "empty.cpp")