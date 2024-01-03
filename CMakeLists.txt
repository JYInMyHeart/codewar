cmake_minimum_required(VERSION 3.27)
project(codewar VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(codewar src/main.cpp)
add_executable(square_sum src/square_sum.cpp)
add_executable(grade_book src/grade_book.cpp)
add_executable(boolean_to_string src/boolean_to_string.cpp)
add_executable(basic_op src/basic_op.cpp)
add_executable(better_than_average src/better_than_average.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
