cmake_minimum_required(VERSION 3.9)
project(cuda_emulator VERSION 1.0.0 DESCRIPTION "runtime_emulator") # TODO: Runtime emulator description

add_library(cuda_emulator SHARED
    stub_cuda_runtime.cpp
)

set_target_properties(cuda_emulator PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(cuda_emulator PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})

target_include_directories(cuda_emulator PRIVATE .)

include(GNUInstallDirs)

install(TARGETS cuda_emulator
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})