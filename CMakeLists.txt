cmake_minimum_required(VERSION 3.5)
project(polymorphism)

include_directories(include)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp dog.cpp )
add_executable(polymorphism ${SOURCE_FILES})
