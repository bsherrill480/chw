#include<stdio.h>
//takes in 3 ints. returns number of unique numbers in set.
//e.g. numUnique(1, 2, 3) => 3
//e.g. numUnique(1, 1, 3) => 2
//e.g. numUnique(1, 2, 2) => 2
//e.g. numUnique(3, 3, 3) => 1
int numUnique (int a, int b, int c) {
    if (a != b && a != c && b != c) {
        return 3;
    } else if (a == b && a == c && b == c) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    if (numUnique(1, 2, 3) == 3 && numUnique(1, 1, 3) == 2 &&
                                   numUnique(1, 2, 2) == 2 &&
                                   numUnique(3, 3, 3) == 1) {
        puts("all tests passed");
    } else {
        puts("tests failed");
    }
    return 0;
}
