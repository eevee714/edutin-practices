// Calculates how many pennies a user would get if their change doubles each day using command line information

#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Defined constants
#define MAX_DAYS 31
#define MIN_DAYS 28

int main(int argc, string argv[])
{
    if (argc == 3)
    {
        int days = atoi(argv[1]);
        int pennies = atoi(argv[2]);

        // Relatively few pennies required to get out of bounds of int
        long long total = pennies;

        // Add double the amount of pennies of the previous day each day
        for(int i = 1; i < days; i++)
        {
            total += pennies * pow(2,i);
        }

        // Output the total as dollars and cents only
        printf("$%.2f\n", ((double) total) / 100);
    }
    else
    {
        printf("Usage: ./pennies <days of the month> <pennies>\n");
    }
}
