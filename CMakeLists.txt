cmake_minimum_required( VERSION 2.8.0 )

project( easyline )

find_package( GMP REQUIRED )
find_package( GMPXX REQUIRED )

include_directories( 
   "include" 
   "${GMP_INCLUDES}"
   "${GMPXX_INCLUDE_DIR}"
   )

add_definitions( -std=c++11 )

set(EXEC_NAME "${CMAKE_PROJECT_NAME}")

set(SRCS
   "src/utils.cpp"
   "src/factorial.cpp"
   "src/easyline.cpp"
   "src/main.cpp"
   )

add_executable( "${EXEC_NAME}" "${SRCS}" )
target_link_libraries( "${EXEC_NAME}" "${GMPXX_LIBRARIES}" "${GMP_LIBRARIES}" m )


