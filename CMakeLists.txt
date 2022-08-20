cmake_minimum_required(VERSION 3.22)
project(RockPaperScissorsGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(RockPaperScissorsGame main.cpp Choices/Rock.cpp Choices/Rock.h Choices/Paper.cpp Choices/Paper.h Choices/Scissors.cpp Choices/Scissors.h)
