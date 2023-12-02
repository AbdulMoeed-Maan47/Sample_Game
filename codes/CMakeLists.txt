cmake_minimum_required(VERSION 3.5)
project(Sample_Game)

set(SFML_DIR "C:/SFML 32/SFML/lib/cmake/SFML")

find_package(SFML COMPONENTS graphics window system REQUIRED)

add_executable(Sample_Game main.cpp)

target_link_libraries(Sample_Game PRIVATE sfml-graphics sfml-window sfml-system)
