cmake_minimum_required(VERSION 3.10)
project(YourProjectName)

# Set the path to GLFW
set(GLFW_ROOT "C:/Libraries/GLFW")

# Tell CMake where to find the glfw3Config.cmake file
set(glfw3_DIR "${GLFW_ROOT}/lib/cmake/glfw3")

# Find GLFW
find_package(glfw3 REQUIRED)

# Your executable
add_executable(YourExecutable main.c)

# Link GLFW to your executable
target_link_libraries(YourExecutable glfw opengl32)
