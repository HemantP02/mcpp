cmake_minimum_required(VERSION 3.0)
project(d2 VERSION 1.0)

# specify the c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -save-temps")

# set the output directory for the build files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# add include directories
include_directories(include)

# add the executable
add_executable(d2 src/variables.cpp)

