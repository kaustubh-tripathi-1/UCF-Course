#include<stdio.h>
#include<conio.h>

void validInputCheck(int *);

int main()
{
    int i, j, rows, columns, lines;
    printf("Enter how many lines you want to print -\n");

    validInputCheck(&lines);

    rows = lines;
    columns = lines;

    printf("\n\n");

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= columns; j++)
        {
            if ( j <= ((lines+1) - i) )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    getch();
    return 0;
}

//@ Valid Input Checking 
void validInputCheck(int *n)
{
    int validInput;
    while(1)
    {
        validInput = scanf("%d", n);

        if (validInput == 1 && *n>=0)
            break;
        else
        {
            printf("Invalid input! Please enter a valid positive integer.\n");
            while( getchar() != '\n');
        }
    }

}