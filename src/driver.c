/*
 * Driver program for the library.
 * @authors Alexandros Fourtounis, Stylianos Ainalis
 *
 */

#include <stdio.h>
#include "libs/graphify.h"

int main(int argc, char *argv[])
{
    //2 arguments are needed
    if (argc != 2)
    {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    //Read the input file
    if(parse_file(argv[1]) == -1)
        fprintf(stderr,"Error reading file\n");
    

}