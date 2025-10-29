#include "print_array.h"
#include <iostream>
namespace lae {

void printArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}


}
