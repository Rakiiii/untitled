cmake_minimum_required(VERSION 3.9)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_library(untitled SHARED SmurfIOLib.c SmurfIOLib.h)