cmake_minimum_required(VERSION 3.10.0)

project(HOMEWORK3.11.3_Project)

add_library(Homework3.11.2 SHARED Initial.cpp Initial.h)

add_executable(Homework3.11.3_Programm Homework3.11.2_Project.cpp)

target_link_libraries(Homework3.11.3_Programm Homework3.11.2)