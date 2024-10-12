cmake_minimum_required(VERSION 3.9)
project(cuda VERSION 1.0.0 DESCRIPTION "runtime_emulator") # TODO: Runtime emulator description

add_library(cuda SHARED
    stub_cuda_runtime.cpp
)

set_target_properties(cuda PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(cuda PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})

target_include_directories(cuda PRIVATE .)

include(GNUInstallDirs)

install(TARGETS cuda
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})