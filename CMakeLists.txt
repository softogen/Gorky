# CMakeList.txt : CMake project for Gorky, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Gorky")

find_package(fmt CONFIG REQUIRED)
find_package(gtest CONFIG REQUIRED)

# Add source to this project's executable.
add_executable (Gorky "Gorky.cpp" "Gorky.h")

target_link_libraries(Gorky PRIVATE fmt::fmt GTest::gmock)

set_property(TARGET Gorky PROPERTY CXX_STANDARD 17)

