cmake_minimum_required(VERSION 3.0)
project(exam VERSION 0.0.1 LANGUAGES C) 
 
add_subdirectory(src)   
include(CTest)

add_library(Unity STATIC
    Unity/src/unity.c
)

target_include_directories(Unity PUBLIC
    Unity/src
)

add_subdirectory(test)  