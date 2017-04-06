cmake_minimum_required(VERSION 2.8.9)
project(Cola)

include_directories(include)

set(SOURCES src/Cola.cpp  src/Nodo.cpp src/main.cpp)

add_executable(Cola ${SOURCES})
