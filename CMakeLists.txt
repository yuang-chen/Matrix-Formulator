cmake_minimum_required(VERSION 3.20.0)

project("Matrix Convertor")

find_package(Boost 1.58 REQUIRED program_options)

add_executable(fmt main.cpp)