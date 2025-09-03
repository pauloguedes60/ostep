cmake_minimum_required(VERSION 3.25)
project(ostep C)

set(CMAKE_C_STANDARD 11)

add_executable(ostep main.c)
add_executable(fork fork.c)
add_executable(exec exec.c)
add_executable(exec2 exec2.c)
add_executable(wait wait.c)
