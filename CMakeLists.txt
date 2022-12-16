cmake_minimum_required(VERSION 3.23)
project(blackjack C)

set(CMAKE_C_STANDARD 99)

add_executable(blackjack main.c blackjack_lib.c blackjack_lib.h)
