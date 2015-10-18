#include<stdio.h>

//Params:
//  arrayToPrintBackwards: pointer to array of int to print last entry first
//  sizeOfArray: size of the array, sizeOfArray should be greater than 0.
//e.g. printArrayInReverse([1,2,3], 3) => stdout: 3 2 1
void printArrayInReverse(int *arrayToPrintBackwards, int sizeOfArray) {
  printf("%d", *(arrayToPrintBackwards + (sizeOfArray - 1)));
  for (int i = sizeOfArray - 2; i >= 0; i--) {
      printf(" %d", *(arrayToPrintBackwards + i));
  }
}
int main() {
    int test[6] = {1,2,3,4,5,6};
    printArrayInReverse(test, 6);
    return 0;
}
