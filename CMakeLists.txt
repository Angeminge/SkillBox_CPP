cmake_minimum_required(VERSION 3.16)
project(
    lesson4
    VERSION 1.0
    DESCRIPTION "First project"
    LANGUAGES CXX 
)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lesson4)
# add_library(lesson4 SHARED)

set(sources 
    main.cpp
)

target_sources(lesson4 PRIVATE ${sources})