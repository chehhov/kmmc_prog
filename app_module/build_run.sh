
#!/bin/bash

g++ -Wall -Wextra -std=c++11 -c main.cpp input.cpp sort.cpp output.cpp

g++ main.o input.o sort.o output.o -o bubble_sort


if [ $? -eq 0 ]; then
    ./bubble_sort
else
    echo "Ошибка компиляции"
fi
