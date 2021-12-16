/**
 * @file hello_world.c
 * @author Rohan Bari (rohanbari4@gmail.com)
 * @brief The hello world program in C.
 * @version 0.1
 * @date 2021-12-16
 * 
 * @copyright Copyright (c) 2021 Rohan Bari
 * 
 */

#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char** argv)
{
    fprintf(stdout, "Goodbye, world!\n");
    return EXIT_SUCCESS;
}