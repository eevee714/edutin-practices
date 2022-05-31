// Converts degrees C to degrees F by collecting info at command line

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        float celsius = atof(argv[1]);

    
        float fahrenheit = (celsius * 9) / 5 + 32;
        printf("F: %.1f\n", fahrenheit);
        return 0;
    }
    else
    {
        printf("Usage: ./fahrenheit <number>\n");
    }
}
