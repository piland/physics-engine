cmake_minimum_required(VERSION 3.29.6)
project(Physics_Engine)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        glm
        GIT_REPOSITORY  https://github.com/g-truc/glm.git
        GIT_TAG bf71a834948186f4097caa076cd2663c69a10e1e
)

FetchContent_MakeAvailable(glm)

# Find SFML 3.0.0
set(SFML_DIR "C:/SFML/lib/cmake/SFML")
set(SFML_STATIC_LIBRARIES ON)
find_package(SFML 3.0.0 COMPONENTS Graphics Window REQUIRED)

if (SFML_FOUND)
    message(STATUS "SFML found: ${SFML_DIR}")
else()
    message(FATAL_ERROR "SFML not found! Check SFML_DIR path.")
endif()

add_executable(Physics_Engine main.cpp)

target_link_libraries(Physics_Engine PRIVATE glm SFML::Graphics SFML::Window)
target_include_directories(Physics_Engine PRIVATE "C:/SFML/include/SFML")