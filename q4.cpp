#include<stdio.h>
#include<string.h>

//Params:
//  stringToRepeate: pointer to String
//  reps: number of time to repeat string
//Returns: 
//  String (pointer to char array)
//  where String is stringToRepeat repeated reps times.
//  calles is responsible for deallocating array.
char * repl(const char *stringToRepeat, int reps) {
    int lengthOfToRepeatString = strlen(stringToRepeat);
    char *stringToReturn;
    if (reps > 0) {
        stringToReturn = new char [lengthOfToRepeatString * reps + 1];
        for (int i = 0; i < reps; i++) {
            strcat(stringToReturn, stringToRepeat);
        }
    } else {
        stringToReturn = new char [1];
        strcpy(stringToReturn, "");
    }
    return stringToReturn;
}

int main() {
    char rep[6] = "repl\n";
    char *newString;
    newString = repl(rep, 4);
    puts(newString);
    delete[] newString;
    strcpy(rep, "hi");
    newString = repl(rep, -10);
    puts(newString);
    delete[] newString;
    return 0;
}
