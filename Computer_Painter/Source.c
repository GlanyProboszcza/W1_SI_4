#define _CRT_SECURE_NO_WARNINGS // with this i can use scanf, instead scanf_s

#include <stdio.h>
#include <conio.h>  

// global variables which program will use 
int no_rows, row, column, user_choice, j, space;


// all functios with specific shapes which main() will use


void drawRectangle()
// Function to print solid rectangle
{
    for (column = 0; column <= no_rows - 1; column++) 
    {
        for (row = 0; row <= no_rows - 1; row++)
        {
            printf("X ");
        }
        printf("\n");
    }
}


void drawTriangle()
// Function to print solid triangle
{
    for (row = 0; row <= no_rows - 1; row++)
    {
        for (column = 0; column <= row; column++)
        {
            printf("X ");
        }
        printf("\n");
    }
}


void drawChangingPairs()
// Function to print rectangle with changing pairs of: Xo and oX
{
    for (row = 0; row <= no_rows - 1; row++)
    {
        for (j = 0; j <= no_rows - 1; j++) 
        {
            row % 2 == 0 ? printf("Xo") : printf("oX");

        }
        printf("\n");
    }
}

void drawFrame()
/* Function to print hollow rectangle
* https://www.geeksforgeeks.org/program-to-print-hollow-rectangle-or-square-star-patterns/
*/
{
    for (row = 0; row <= no_rows -1 ; row++)
    {
        for (column = 0; column <= no_rows - 1; column++)
        {
            if (row == 0 || row == no_rows - 1 || column == 0 || column == no_rows - 1)
                printf("X");
            else
                printf(".");
        }
        printf("\n");
    }
}

void drawX()
/* Function to print hollow rectangle with diagonal
* used source: https://codeforwin.org/2017/09/c-program-print-hollow-square-diagonal-star-pattern.html
*/ 
{
    for (row = 1; row <= no_rows; row++)
    {
        for (column = 1; column <= no_rows; column++)
        {
           /* Print X for, first row (row == 1) or last row (row == no_rows) or first column (column == 1) or last column (column == no_rows)
            * or row equal to column (row == column) or column equal to no_row (column == no_rows - row + 1)*/
            if(row == 1 || row == no_rows || column == 1 || column == no_rows || row == column || column == (no_rows - row + 1))
                printf("X");
            else
                printf(".");
        }
        printf("\n");
    }
}

void drawDiamond()
/* Fuction to print diamond pattern. Used sources:
* https://youtu.be/PYBzYPdtLM8
* https://youtu.be/F9VTF73SObM
* https://youtu.be/vE08hH_c4oY
*
* https://www.javatpoint.com/pyramid-patterns-in-c
*/
{
    // top of the diamond
    for (row = 1; row <= no_rows; row++)
    {
        for (space = 1; space <= no_rows - row; space++)
        {
            printf(" ");
        }
        for (column = 1; column <= 2 * row - 1; column++)
        {
            printf("X");
        }
        printf("\n");
    }
    // bottom of the diamond
    for (row = no_rows - 1 ; row >= 1; row--)
    {
        for (space = 1; space <= (no_rows - row); space++) 
        {
            printf(" ");
        }
        for (column = 1; column <= 2 * row - 1; column++)
        {
            printf("X");
        }
        printf("\n");
    }
}

// Fuction to print chess pattern
void drawChess() {


}
// Function to print "Frame inside frame"
void drawFrameInsideFrame() 
{

}




int main()
{
    printf("HI! I'M COMPUTER PAINTER! I DRAW REALLY NICE PATTERNS!!\nLet's try!\n");

    do 
    {
        printf("What shape would you like to paint?\n\n1. Rectangle\n2. Triangle\n3. Alternatery changing pairs\n4. Rectangle with frame\n5. Rectangle with diagonals\n"
            "6. Diamnod\n>>>   ");
        scanf("%d", &user_choice);



        /* program will use the switch statment which allows us to execute one code block among many alternatives.
        * used source:
        * https://www.programiz.com/c-programming/c-switch-case-statement
        * http://mikrokontrolery.blogspot.com/2011/02/instrukcja-warunkowa-switch-case.html
        */
        switch (user_choice) 
        {
            printf("\nHow many characters you would like to use? >>>  ");
            scanf("%d", &no_rows);
            printf("\n");

        case 1:
            printf("YOUR RECTANGLE\n\n");
            drawRectangle();
            printf("\n");

            break;

        case 2:
            printf("YOUR TRIANGLE\n\n");
            drawTriangle();
            printf("\n");

            break;

        case 3:
            printf("YOUR CHANGING PAIRS PATTERNT\n\n");
            drawChangingPairs();
            printf("\n");

            break;

        case 4:
            printf("YOUR RECTANGLE FRAME PATTERN\n\n");
            drawFrame();
            printf("\n");

            break;

        case 5:
            printf("YOUR RECTANGLE WITH DIAGONALS\n\n");
            drawX();
            printf("\n");

            break;

        case 6:
            printf("YOUR DIAMOND\n\n");
            drawDiamond();
            printf("\n");

            break;

    /*
     *    case 7:
     *       printf("YOUR CHESS RECTANGLE\n\n");
     *       drawChess();
     *       printf("\n");
     *
     *       break;
     *
     *   case 8:
     *       printf("YOUR RECTANGLE WITH FRAME INSIDE FRAME\n\n");
     *       drawFrameInsideFrame();
     *       printf("\n");
     *
     *       break;
    */

        default:
            printf("\n-----Invalid choice, try again!-----\n");
            printf("\n");
            break;
        }

    } while (1);

    return 0;

}

