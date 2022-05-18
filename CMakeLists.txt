cmake_minimum_required(VERSION 3.0.0)
project(mavlink VERSION 0.1.0)

include(CTest)
enable_testing()
include_directories("/home/ww/smart/mavlink/stand_udp_mavlink/my_mavlink/all")
add_executable(mavlink main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
