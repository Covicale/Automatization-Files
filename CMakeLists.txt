cmake_minimum_required (VERSION 3.1)
project (AutomatizedFiles 
            VERSION 1.0
            DESCRIPTION "Sort automatically all your files."
            LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set( CMAKE_CXX_FLAGS "-std=c++17" )

add_executable(AutomatizedFiles
    src/main.cc
    src/functions.h
    src/functions.cc)