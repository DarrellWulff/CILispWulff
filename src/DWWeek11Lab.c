// TERMINAL COMMANDS 
// For Lab Macs: clang -Xpreprocessor -fopenmp -lomp -o hello.out hello.c
// ./DW.out;
// Linux use GCC: gcc -fopenmp -o DW.out DWWeek11Lab.c

//Work through videos first!!!

#include <stdio.h>
#include <omp.h>
#include <time.h>
#include <ctype.h>


int main(void)
{
    printf("\nOpenMP\n");

    FILE *inputFile = fopen("/home/wulff/Desktop/CSUCI/FALL2019/Comp262/OMPLab/Books/0.txt", "r");

    //Store each char from file as an int, don't bother with chars
    int asciiVal;
    //Store count values
    int alphabet[26];

    //TIMER 
    double timeTotal;
    clock_t start;
    clock_t end;

    //Initailaize Array Values to zero
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 0;
    }
    
    start = clock();
    while ((asciiVal = fgetc(inputFile)) != EOF)
    {
        //Check if ascii value is a letter
        if ((asciiVal >= 65 && asciiVal <= 90) || (asciiVal >= 97 && asciiVal <= 122))
        {
            //make lower case if it is not already
            asciiVal = tolower(asciiVal);

            //Add to the count at the right spot in the alphabet
            alphabet[asciiVal - 97]++;
        }
        
    }
    end = clock();
    timeTotal = ((double) end - start) / CLOCKS_PER_SEC;
    fclose(inputFile);

    printf("\nCompleted in %lf seconds\n", timeTotal);

    //print values
    for (int i = 0; i < 26; i++)
    {
        char currentLetter = i + 65;
        printf("\n%c's: %i", currentLetter, alphabet[i]);
    }
    
    return 0;
}