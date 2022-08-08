cmake_minimum_required(VERSION 3.5)


add_executable(get-cli
    "main.cc"

    "getcli_pch.h"

    "cmd.h"
    "version.h"
)


if(${CMAKE_CXX_STANDARD} 20)
    set_property(TARGET get-cli PROPERTY CXX_STANDARD 20)
elseif(${CMAKE_CXX_STANDARD} 17)
    set_property(TARGET get-cli PROPERTY CXX_STANDARD 17)
else()
    set_property(TARGET get-cli PROPERTY CXX_STANDARD 14)
endif()
