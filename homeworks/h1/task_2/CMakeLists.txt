#specify the minimum cmake version required
cmake_minimum_required(VERSION 3.10)

#project name and language
project(ipb_arithmetic_project LANGUAGES CXX)

#set the c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add the include directory for headers
include_directories(include)

#add the static library
add_library(ipb_arithmetic STATIC IMPORTED)
set_target_properties(ipb_arithmetic PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/build/libipb_arithmetic.a)


#add the executable target
add_executable(test_ipb_arithmetic src/main.cpp)

#link the static library to the executable
target_link_libraries(test_ipb_arithmetic ipb_arithmetic)

#specify the output directory for the compiled binary
set_target_properties(test_ipb_arithmetic PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

# installation rules
install(FILES ${CMAKE_BINARY_DIR}/libipb_arithmetic.a DESTINATION lib)

install(DIRECTORY include/ DESTINATION include)
