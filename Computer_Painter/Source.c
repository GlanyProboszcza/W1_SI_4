#define _CRT_SECURE_NO_WARNINGS // with this i can use scanf, instead scanf_s

#include <stdio.h>
#include <conio.h>  


// all shapes whill programm will use put into fuction void

/*

void drawRectangle() {
    for (column = 1; column <= no_rows; column++)
    {
        for (row = 1; row <= no_rows; row++)
        {
            printf("X ");
        }
        printf("\n");
    }
}

void drawTriangle(x) {
    for (row = 1; row <= no_rows; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("X ");
        }
        printf("\n");

    }

}

void drawChangingPairs() {
    for (row = 1; row <= no_rows; row++)
    {
        for (j = 0; j <= no_rows; j++) 
        {
            row % 2 == 0 ? printf("Xo") : printf("oX");

        }
        printf("\n");
    }
}
*/

int main()
{
    int no_rows, row, column, x, user_choice, j;

    /*
    printf("What shape would you like to paint?\n\n1. Rectangle\n2. Triangle\n3. Alternatery changing pairs\n  >>  ");
    scanf("%d",&user_choice);
    */
           
    printf("\nHow many characters you would like to use? >>  ");
    scanf("%d", no_rows);

    for (row = 1; row <= no_rows; row++)
    {
        for (j = 0; j <= no_rows; j++)
        {
            row % 2 == 0 ? printf("Xo") : printf("oX");

        }
        printf("\n");
    }

    return 0;

}
