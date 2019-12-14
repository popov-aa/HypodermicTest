cmake_minimum_required(VERSION 3.5)

project(HypodermicTest LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(HypodermicTest main.cpp A.h A.cpp B.h B.cpp C.h C.cpp)
