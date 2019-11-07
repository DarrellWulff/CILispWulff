// TERMINAL COMMANDS 
// For Lab Macs: clang -Xpreprocessor -fopenmp -lomp -o hello.out hello.c
// ./[outName].out;
// Linux use GCC: gcc -fopenmp -o hello.out hello.c

//Work through videos first!!!

#include <stdio.h>
#include <omp.h>


int main(void)
{
    printf("\nOpenMP\n");

    FILE *inputFile = fopen("/Users/darrell.wulff050/Desktop/Comp262/DWWeek11OpenMpLab/DWWeek11Proj/Books/0.txt", "r");

    return 0;
}