cmake_minimum_required(VERSION 3.27)
project(codewar VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(codewar main.cpp)
add_executable(square_sum square_sum.cpp)
add_executable(grade_book grade_book.cpp)
add_executable(boolean_to_string boolean_to_string.cpp)
add_executable(basic_op basic_op.cpp)
add_executable(better_than_average better_than_average.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
