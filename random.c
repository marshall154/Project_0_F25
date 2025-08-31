#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_string(char *s, int size) {
    for (int i = 0; i < size; i++) {
        s[i] = 'A' + (rand() % 26); //Assigns chars to random letters
    }
    s[size] = '\0'; //Assign null char
}