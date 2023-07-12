cmake_minimum_required(VERSION 3.21.1)

set(CMAKE_CXX_STANDARD 11)

project(hoangprodn)
add_definitions(-DKEY)

file(GLOB_RECURSE SOURCE_FILE LambdaObj/*.cpp)


add_executable(${PROJECT_NAME} main.cpp ${SOURCE_FILE})

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/LambdaObj)