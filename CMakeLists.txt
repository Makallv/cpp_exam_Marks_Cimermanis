cmake_minimum_required(VERSION 3.23)
project(Exam)

set(CMAKE_CXX_STANDARD 14)

add_executable(Exam main.cpp include/Triangle.h src/Triangle.cpp test/Triangle_test.cpp)

add_subdirectory(test)
