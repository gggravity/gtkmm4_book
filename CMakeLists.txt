cmake_minimum_required(VERSION 3.22)
project(gtkmm4_book)

set(CMAKE_CXX_STANDARD 20)


find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-4.0)

link_directories(${GTKMM_LIBRARY_DIRS})

include_directories(${GTKMM_INCLUDE_DIRS})

add_executable(gtkmm4_book main4.cpp radiobuttons.cpp radiobuttons.h)


target_link_libraries(gtkmm4_book ${GTKMM_LIBRARIES})
