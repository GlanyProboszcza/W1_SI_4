#define _CRT_SECURE_NO_WARNINGS // with this i can use scanf, instead scanf_s

#include <stdio.h>
#include <conio.h>  

// all variables which program will use 
int no_rows, row, column, user_choice, j;


// all functios with specific shapes which main() will use

// Function to print solid rectangle
void drawRectangle() {
    for (column = 0; column <= no_rows - 1; column++) 
    {
        for (row = 0; row <= no_rows - 1; row++)
        {
            printf("X ");
        }
        printf("\n");
    }
}

// Function to print solid triangle
void drawTriangle() {
    for (row = 0; row <= no_rows - 1; row++)
    {
        for (column = 0; column <= row; column++)
        {
            printf("X ");
        }
        printf("\n");
    }
}

// Function to print rectangle with changing pairs of: Xo and oX
void drawChangingPairs() {
    for (row = 0; row <= no_rows - 1; row++)
    {
        for (j = 0; j <= no_rows - 1; j++) 
        {
            row % 2 == 0 ? printf("Xo") : printf("oX");

        }
        printf("\n");
    }
}
// Function to print hollow rectangle
void drawFrame() {
    for (row = 0; row <= no_rows -1 ; row++)
    {
        for (column = 0; column <= no_rows - 1; column++)
        {
            if (row == 0 || row == no_rows - 1 || column == 0 || column == no_rows - 1)
                printf("X");
            else
                printf("o");
        }
        printf("\n");
    }
}
// Function to print hollow rectangle with diagonal
void drawX() {
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
// Fuction to print diamond pattern
void drawDiamond() {
    int front_space = 0;
    int back_space = no_rows % 2 == 0 ? 1 : 2;
    for (row = 0; row < no_rows; row++)
    {
        for (column = 0; column < no_rows - back_space; column++)
        {
            if (column <= no_rows / 2 - 1 - front_space || column >= no_rows / 2 - 1 + front_space)
                printf(".");
            else
                printf("X");
        }
        printf("\n");
        if (row < no_rows / 2)
            front_space++;
        else
            front_space--;
    }
}
// Fuction to print chess pattern
void drawChess() {


}
// Function to print "Frame inside frame"
void drawFrameInsideFrame() {


}




int main()
{
    printf("HI! I'M COMPUTER PAINTER! I DRAW REALLY NICE PATTERNS!!\nLet's try!\n");

    do 
    {
        printf("\nHow many characters you would like to use? >>  ");
        scanf("%d", &no_rows);


        printf("What shape would you like to paint?\n\n1. Rectangle\n2. Triangle\n3. Alternatery changing pairs\n4. Rectangle with frame\n5. Rectangle with diagonals\n"
            "6. Diamnod\n7. Chess\n8. Frame inside frame\n  >>  ");
        scanf("%d", &user_choice);

        // program will use the switch statment which allows us to execute one code block among many alternatives.
        switch (user_choice) {

        case 1:
            drawRectangle();
            printf("\n");

            break;

        case 2:
            drawTriangle();
            printf("\n");

            break;

        case 3:
            drawChangingPairs();
            printf("\n");

            break;

        case 4:
            drawFrame();
            printf("\n");

            break;

        case 5:
            drawX();
            printf("\n");

            break;

        case 6:
            drawDiamond();
            printf("\n");

            break;

        case 7:
            drawChess();
            printf("\n");

            break;

        case 8:
            drawFrameInsideFrame();
            printf("\n");

            break;

        default:
            break;
        }

    } while (1);

    return 0;

}

