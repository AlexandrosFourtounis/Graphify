/*
* Driver program for the library.
* @authors Alexandros Fourtounis, Stylianos Ainalis
*
*/

#include <stdio.h>
#include "graphify.h"

void handleInput(input);

int main(int argc, char *argv[]) {

    char input;

    printf("Enter an equation: \n");
    scanf(" %c", &input);
    handleInput(input);

    
}
 