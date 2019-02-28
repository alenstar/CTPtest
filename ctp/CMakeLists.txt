# add_subdirectory(chrono)
file(GLOB_RECURSE CTP_HDRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h *.hpp)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/thostmduserapi.so ${CMAKE_CURRENT_BINARY_DIR}/libthostmduserapi.so COPYONLY)
add_library(thostmduserapi SHARED IMPORTED) # or STATIC instead of SHARED
set_target_properties(thostmduserapi PROPERTIES
	IMPORTED_LOCATION "${CMAKE_CURRENT_BINARY_DIR}/thostmduserapi.so"
		# INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}"
)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/thosttraderapi.so ${CMAKE_CURRENT_BINARY_DIR}/libthosttraderapi.so COPYONLY)
add_library(thosttraderapi SHARED IMPORTED) # or STATIC instead of SHARED
set_target_properties(thosttraderapi PROPERTIES
	IMPORTED_LOCATION "${CMAKE_CURRENT_BINARY_DIR}/thosttraderapi.so"
		# INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}"
)

set(CTP_LIBS thosttraderapi thostmduserapi)
