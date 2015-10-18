#include<stdio.h>

//Params:
//  arrayToTakeProductOf: Pointer to array of int;
//  sizeOfArr: size of array, should be greater than or equal to 1
//Returns:
//  product of all elements of array
int takeProductOfArray(int *arrayToTakeProductsOf, int sizeOfArr) {
    int runningProduct = 1;
    for (int i = 0; i < sizeOfArr; i++) {
        runningProduct *= *(arrayToTakeProductsOf + i);
    }
    return runningProduct;
}

int main() {
    int arr1[] = {1,2,3};
    int arr2[] = {0, 12, 5};
    int arr3[] = {5};
    if (takeProductOfArray(arr1, 3) == 6 && takeProductOfArray(arr2, 3) == 0
                                         && takeProductOfArray(arr3, 1) == 5) {
        puts("all tests passed");
    } else {
        puts("tests failed");
    }
    return 0;
}
