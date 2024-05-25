/*
 * graphify.h
 * Implementation of functions
 * @author Alexandros Fourtounis
 */
#include <stdio.h>
#include "graphify.h"


int parse_file(const char *filename)
{
    FILE *f = fopen(filename, "r");
    if (!f)
    {
        fprintf(stderr, "Error opening file\n");
        return -1;
    }
    char line[256];
    while (fgets(line, sizeof(line), f))
    {
        printf("%s", line);
    }
    fclose(f);
    return 0;
}