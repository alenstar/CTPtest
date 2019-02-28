set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(APP_NAME trader)

# add_subdirectory(chrono)
file(GLOB_RECURSE APP_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.cc *.cxx *.c++ *.h *.hpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
#include_directories(/usr/include)
#add_dependencies(${APP_NAME} ${APP_LIB_NAME})
#add_dependencies(${APP_NAME} ${ly_lib_name})

#add_library(${LIB_NAME} ${APP_SRCS})
add_executable(${APP_NAME} ${APP_SRCS} ${CTP_HDRS})
message(STATUS "CTP: ${APP_LIBS}")
target_link_libraries(${APP_NAME} ${APP_LIBS} ${SYS_LIBS})

#add_dependencies(${APP_NAME} ${ly_lib_name})
#target_include_directories(${APP_NAME} PUBLIC ../src)
#install(TARGETS ${APP_NAME} RUNTIME DESTINATION bin)
