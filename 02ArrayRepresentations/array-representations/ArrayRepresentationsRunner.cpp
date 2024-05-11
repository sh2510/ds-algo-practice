//
// Created by Shashank on 08-11-2023.
//

#include <iostream>

void printArray(int * arrayPointer, int size);
void declareAndPrintArray();
int*& increaseArraySize (int * &arrayPointer, int currentSize, int newSize);
void print2DArrayInStack(int arrayPointer[][4], int rowSize, int colSize);
void print2DArrayInStackAndHeap(int *arrayPointer[], int rowSize, int colSize);
void print2DArrayInHeap(int **arrayPointer, int rowSize, int colSize);

int main() {
    std::cout << "Hello from Array Representations Runner!" << std::endl;

    std::cout << "------------------------ Array declarations ------------------------" <<std::endl;
    declareAndPrintArray();

    std::cout << "------------------------ Static vs dynamic array ------------------------" <<std::endl;
    int arr01[5] = {2, 4, 6, 8, 10};
    printArray(arr01, 5);

    int * arr02 = new int [5];
    arr02[0] = 2;
    arr02[1] = 4;
    arr02[2] = 6;
    arr02[3] = 8;
    arr02[4] = 10;

    printArray(arr02, 5);

    std::cout << "------------------------ Increasing size of an array ------------------------" <<std::endl;
    int * p = new int[5];
    p[0] = 12;
    p[1] = 14;
    p[2] = 16;
    p[3] = 18;
    p[4] = 20;

    std::cout << "--> before resizing" << std::endl;
    printArray(p, 5);

    p = increaseArraySize(p, 5, 10);

    std::cout << "--> after resizing" << std::endl;
    printArray(p, 10);

    std::cout << "------------------------ 2D array ------------------------" <<std::endl;
    std::cout << "array in stack only" << std::endl;
    int arr001[3] [4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};
    print2DArrayInStack(arr001, 3, 4);
    std::cout << std::endl;

    std::cout << "array in stack and heap only (Array of pointer)" << std::endl;
    int * arr002[3];
    arr002[0] = new int[4];
    arr002[1] = new int[4];
    arr002[2] = new int[4];
    print2DArrayInStackAndHeap(arr002, 3, 4);


    for(int i = 0; i < 3; i++){
        delete [] arr002[i];
    }
    std::cout << std::endl;

    std::cout << "array in heap only (Pointer to a pointer)" << std::endl;
    int ** arr003;
    arr003 = new int * [3];
    arr003[0] = new int [4];
    arr003[1] = new int [4];
    arr003[2] = new int [4];
    print2DArrayInHeap(arr003, 3, 4);
    std::cout << std::endl;
    delete [] arr003;

}

void print2DArrayInStack(int arrayPointer[][4], int rowSize, int colSize){
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            std::cout << arrayPointer[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void print2DArrayInStackAndHeap(int *arrayPointer[], int rowSize, int colSize){
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            std::cout << arrayPointer[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void print2DArrayInHeap(int **arrayPointer, int rowSize, int colSize){
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            std::cout << arrayPointer[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int*& increaseArraySize (int * &arrayPointer, int currentSize, int newSize){
    int * tempPtr = new int [newSize];

    for(int i = 0; i < currentSize; i++){
        tempPtr[i] = arrayPointer[i];
    }

    delete [] arrayPointer;
    arrayPointer = tempPtr;
    tempPtr = nullptr;
    return arrayPointer;
}

void declareAndPrintArray(){
    int arr01[5];
    std::cout << arr01[2] << std::endl;
    printArray(arr01, 5);

    int arr02[5] = {1, 2, 3, 4, 5};
    printArray(arr02, 5);

    int arr03[5] = {1, 2, };
    printArray(arr03, 5);

    int arr04[5] = {0};
    printArray(arr04, 5);

    int arr05[] = {1, 2, 3, 4, 5};
    printArray(arr05, 5);
}

void printArray(int * arrayPointer, int size){
    for(int i = 0; i < size; i++){
        std::cout << &arrayPointer[i] << " address has a value of " << arrayPointer[i] << std::endl;
    }
    std::cout << std::endl;
}
