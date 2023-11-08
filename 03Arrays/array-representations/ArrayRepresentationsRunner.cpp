//
// Created by Shashank on 08-11-2023.
//

#include <iostream>

void printArray(int * arrayPointer, int size);

int main() {
    std::cout << "Hello from Array Representations Runner!" << std::endl;

    int arr01[5];
    std::cout << arr01[2] << std::endl;

    int arr02[5] = {1, 2, 3, 4, 5};
    printArray(arr02, 5);
}

void printArray(int * arrayPointer, int size){
    for(int i = 0; i < size; i++){
        std::cout << arrayPointer[i] << ", ";
    }
    std::cout << std::endl;
}
