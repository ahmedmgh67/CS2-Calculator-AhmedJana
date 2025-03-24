cmake_minimum_required(VERSION 3.10)
project(calculator)
set( SOURCE_FILES
calculator.h
calculator.cpp
)
add_library(calc STATIC ${SOURCE_FILES})