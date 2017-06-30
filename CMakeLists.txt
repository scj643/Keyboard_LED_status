cmake_minimum_required(VERSION 3.7)
project(Keyboard_LED_status)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES src/main.cpp src/json.hpp src/led.h src/led.cpp)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
add_executable(Keyboard_LED_status ${SOURCE_FILES})
find_package(X11 REQUIRED)
include_directories(${X11_INCLUDE_DIR})
target_link_libraries(Keyboard_LED_status ${X11_LIBRARIES})


