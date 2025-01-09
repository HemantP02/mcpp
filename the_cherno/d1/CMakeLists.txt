cmake_minimum_required(VERSION 3.0)

# project name and version
project(d1 VERSION 1.0)


# specify the c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# set the output directory for build files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# add the executable
add_executable(d1 src/d1.cpp src/Log.cpp)
