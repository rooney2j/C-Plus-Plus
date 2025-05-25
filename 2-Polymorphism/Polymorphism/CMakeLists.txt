cmake_minimum_required(VERSION 3.5)

project(Polymorphism LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Polymorphism main.cpp
    Piece.h Piece.cpp
    Queen.h Queen.cpp
    Pawn.h Pawn.cpp)

include(GNUInstallDirs)
install(TARGETS Polymorphism
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
