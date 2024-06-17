cmake_minimum_required(VERSION 3.10)
project(YourProjectName)

# Set the path to GLFW
set(GLFW_ROOT "C:/Libraries/GLFW")

# Tell CMake where to find the FindGLFW module
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${GLFW_ROOT}/cmake")

# Find GLFW
find_package(glfw3 REQUIRED)

# Your executable
add_executable(YourExecutable main.c)

# Link GLFW to your executable
target_link_libraries(YourExecutable glfw)
