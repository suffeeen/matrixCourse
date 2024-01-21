cmake_minimum_required(VERSION 2.8.3)
project(a)
add_definitions(-std=c++11)
find_package(Eigen3 REQUIRED)
include_directories("/usr/include/eigen3")
add_executable(a main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC ${EIGEN3_LIBRARIES})

