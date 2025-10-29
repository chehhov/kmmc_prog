#include <iostream>
#include "merge_sort.h"
#include "print_array.h"

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Исходный массив: ";
    printArray(arr, size);
    
    mergeSort(arr, size);
    
    std::cout << "Отсортированный массив: ";
    printArray(arr, size);
    
    return 0;
}
