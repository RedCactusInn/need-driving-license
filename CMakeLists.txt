cmake_minimum_required(VERSION 3.13)

project(need-driving-license)

set(CMAKE_CXX_STANDARD 17)

add_library(driver lib/driver/driver.cpp lib/driver/driverManager.cpp)
add_library(encoder lib/encoder/encoder.cpp)

target_include_directories(driver PUBLIC lib/driver)
target_include_directories(encoder PUBLIC lib/encoder)

target_link_libraries(driver PUBLIC wiringPi pthread)
target_link_libraries(encoder PUBLIC wiringPi pthread)

add_executable(need-driving-license main.cpp)

target_link_libraries(need-driving-license driver encoder)