#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main_loop.h"


int main()
{
    init_main_loop(); //The files that ill be used are initialized here
    return 0;
}

//To compile use: gcc library.c sequential_search.c main_loop.c main.c -o main