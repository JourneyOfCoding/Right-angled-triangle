// Printing Right-angled triangle using For Loop

// *
// * *
// * * *
// * * * *
// * * * * *

#include <stdio.h>

int main(void)
{
    int rows;

    // Getting number of rows as input from user
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    // Loop for printing rows
    for (int i = 1; i <= rows; i++)
    {
        // Loop for printing columns
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
