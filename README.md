# Лабораторная работа 1

## Описание
C++ проект с вводом чисел пользователем, функциями сложения, вычитания и умножения, собранный через CMake.

## Сборка
1. `git clone https://github.com/ogAndreyka21/lab1`
2. `cd lab1`
3. `mkdir build && cd build`
4. `cmake -G "MinGW Makefiles" -DCMAKE_C_COMPILER="C:/Program Files/CodeBlocks/MinGW/bin/gcc.exe" -DCMAKE_CXX_COMPILER="C:/Program Files/CodeBlocks/MinGW/bin/g++.exe" ..`
5. `mingw32-make`
6. Запуск: `./main.exe`