cmake_minimum_required(VERSION 3.0.0)
project(bulletinwithselector VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()
set(CMAKE_C_STANDARD 99)

add_executable(bulletinwithselector main.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
