cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_C_STANDARD 99)

project(server)

add_executable(server server.cpp main.cpp)