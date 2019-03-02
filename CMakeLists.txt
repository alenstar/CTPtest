cmake_minimum_required(VERSION 2.8.7 FATAL_ERROR)
project(ctptrade)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if($ENV{BUILD_NUMBER})
  set(BUILD_NUMBER $ENV{BUILD_NUMBER})
else()
  set(BUILD_NUMBER 0)
endif()

set(APP_NAME ${PROJECT_NAME})

# TODO OP check how this works on multiple configurations generators
# available configurations in multiple configurations enabled generators
set(CMAKE_CONFIGURATION_TYPES Debug Release)

if (NOT EXISTS ${CMAKE_BINARY_DIR}/CMakeCache.txt)
  if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "" FORCE)
  endif()
endif()

#message("CMAKE_CFG_INTDIR = ${CMAKE_CFG_INTDIR}")

# 检查编译目录和源码是否为同一目录， 如果是则提示错误
if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(FATAL_ERROR "Do not build in-source.\nPlease remove CMakeCache.txt and the CMakeFiles/ directory.\nThen: mkdir build ; cd build ; cmake .. ; make")
endif()

if( CMAKE_BUILD_TYPE STREQUAL "Release" )
    add_definitions(-DNODEBUG)
else()
    add_definitions(-DDEBUG)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC -O0 -ggdb")
    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0 -ggdb")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -O0 -ggdb")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -ggdb")
endif()


include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/3rdparty)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

#add_subdirectory(spdlog)
#add_subdirectory(util)
#add_subdirectory(storage)
#add_subdirectory(proto)

add_subdirectory(ctp)
LINK_DIRECTORIES(${CMAKE_BINARY_DIR})
set(APP_LIBS thosttraderapi thostmduserapi)
set(SYS_LIBS rt sqlite3 pthread)
if(WIN32)
    set(SYS_LIBS ws2_32 wsock32 sqlite3)
endif()

#add_executable(test test.cpp)
#target_link_libraries(test ${APP_LIBS})

#add_subdirectory(unittest)
#add_subdirectory(example)

add_subdirectory(src)

set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_INSTALL_RPATH "./")
add_executable(trader main.cpp)
target_link_libraries(trader ctpwrapper ${APP_LIBS} ${SYS_LIBS})

# used by doc home and in packaging
#set(README_FILE ${PROJECT_SOURCE_DIR}/README.md)
# Licensing and stuff like that
#set(LICENSE_FILE ${PROJECT_SOURCE_DIR}/LICENSE-MIT)
#install(FILES
#	${README_FILE}
#	#${LICENSE_FILE}
#  DESTINATION .
#)

