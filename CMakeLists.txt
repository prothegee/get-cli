cmake_minimum_required(VERSION 3.5)


# project setup
project(get-cli CXX)

if(NOT CMAKE_CROSSCOMPILING) # If cross compile is failing, you should set. CMAKE_SYSTEM_NAME in your toolchain file.
    set(BUILD_PROGRAMS ON)
else()
    set(BUILD_PROGRAMS OFF)
endif()

option(BUILD_CTL "build get-cli" ${BUILD_PROGRAMS})

set(GETCLI_MAJOR_VERSION 0)
set(GETCLI_MINOR_VERSION 0)
set(GETCLI_PATCH_VERSION 0)
set(GETCLI_VERSION
    ${GETCLI_MAJOR_VERSION}.${GETCLI_MINOR_VERSION}.${GETCLI_PATCH_VERSION})
set(GETCLI_VERSION_STRING "${GETCLI_VERSION}")

set(CMAKE_GENERATOR Ninja) # may the build behaviour not confuse you


include(CheckIncludeFileCXX)

if (${CMAKE_CXX_STANDARD} 20)
    set(CXX_STANDARD 20)
elseif(${CMAKE_CXX_STANDARD} 17)
    set(CXX_STANDARD 17)
else()
    set(CXX_STANDARD 14)
endif()


# option build
if(BUILD_CTL)
    add_subdirectory(get-cli)
    set(BUILD_GETCLI ON)
elseif()
    set(BUILD_GETCLI OFF)
endif()


# message
message(STATUS "project         : " ${PROJECT_NAME})
message(STATUS "version         : " ${GETCLI_VERSION_STRING})
message(STATUS "compiler        : " ${CMAKE_CXX_COMPILER_ID})
message(STATUS "generator       : " ${CMAKE_GENERATOR})
message(STATUS "cxx standard    : " ${CXX_STANDARD})
# 
message(STATUS "build get-cli   : " ${BUILD_GETCLI})
