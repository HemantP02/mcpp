# minimum version of cmake
cmake_minimum_required(VERSION 3.10)

# project name
project(cpp_learn)

# set the c++ standard to c++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add source files
file(GLOB SOURCES "src/*.cpp")


# output built executables to the "bin" directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


# add an executable for each source file 
foreach(SOURCE_FILE ${SOURCES})
        # get the filename without the directory and extension
        get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)
        # add an executable target for this source file
        add_executable(${FILE_NAME} ${SOURCE_FILE})

endforeach()


