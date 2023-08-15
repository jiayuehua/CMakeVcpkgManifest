# CMakeList.txt : CMake project for CMakeVcpkgManifest, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.26)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeVcpkgManifest")

# Add source to this project's executable.
add_executable (CMakeVcpkgManifest "CMakeVcpkgManifest.cpp" "CMakeVcpkgManifest.h")

set_property(TARGET CMakeVcpkgManifest PROPERTY CXX_STANDARD 20)

# tests target
add_executable(tests)
find_package(GTest CONFIG REQUIRED)
target_sources(tests PRIVATE tests.cpp)
target_link_libraries(tests PRIVATE GTest::gtest GTest::gtest_main)
set_property(TARGET tests PROPERTY CXX_STANDARD 20)
enable_testing()
add_test(tests tests)

# TODO: Add tests and install targets if needed.
