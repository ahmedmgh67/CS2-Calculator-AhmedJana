cmake_minimum_required(VERSION 3.10)
project(calculator)
set( SOURCE_FILES
calculator.h
calculator.cpp
)
add_library(calc STATIC ${SOURCE_FILES})
target_include_directories(calc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
add_executable(testApp test.cpp)
target_link_libraries(testApp PRIVATE calc)
