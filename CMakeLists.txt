cmake_minimum_required(VERSION 3.22)
project(consoleRPG)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ścieżka do nagłówków (heder)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/heder)

# Lista źródeł projektu
set(SOURCES
    main.cpp
    scr/warrior.cpp
)

# Tworzenie pliku wykonywalnego
add_executable(consoleRPG ${SOURCES})
