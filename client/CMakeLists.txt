cmake_minimum_required (VERSION 2.8.0)
project(client)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(EXECUTABLE_OUTPUT_PATH ../bin)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(
    client
    main.c 
    proxy_engine.c
)

include_directories(
)

