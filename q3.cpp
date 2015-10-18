#include<stdio.h>

//Prints a dash char multiple times.
//Params:
//  numTimes: number of times to print a dash
void printDashMultipleTimes(int numTimes) {
    for (int i = 0; i < numTimes; i++) {
        putchar('-');
    }
}

//Prints the appropriate pattern for the given line.
//Params:
//  lineNumber: line we are on, where line 1 is the first line
void printLineNumber(int lineNumber) {
    int dashesToPrint = 6 - lineNumber;
    //e.g. print the number 1
    int numberToPrint = 2*lineNumber - 1;
    //e.g. number of times to print numberToPrint
    int numberOfTimesPrintNumber = numberToPrint;
    printDashMultipleTimes(dashesToPrint);
    for (int i = 0; i < numberOfTimesPrintNumber; i++) {
        printf("%d", numberToPrint);
    }
    printDashMultipleTimes(dashesToPrint);
}

int main() {
    int numberOfLines = 5;
    for (int row = 1; row <= numberOfLines; row++) {
        printLineNumber(row);
        putchar('\n'); 
    }
    return 0;
}

