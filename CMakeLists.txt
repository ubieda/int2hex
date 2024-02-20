cmake_minimum_required(VERSION 3.20.0)
add_executable(int2hex)
project(int2hex)

target_include_directories(int2hex PRIVATE
	src
)

target_sources(int2hex PRIVATE
	src/main.c
)
