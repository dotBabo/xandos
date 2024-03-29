#include <stdio.h>
#include <stdbool.h> 
#include "functions.h"


int main()
{   
    bool quit = false;
    int c = 0, d = 0;
    char player[2] = {'X','O'};
    char board[3][3];
    char gameboard[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    while(quit == false)
    {
        switch (mainMenu())
        {
        case 1:
            game = ON;
            initBoard(board);
            playGame(board,gameboard,player);
            break;
        case 0:
            quit= true;
            break;
        default:
            printf("\nThat feature is currently in development!\n\n");
            break;
        }
    }

    return 0;
}
