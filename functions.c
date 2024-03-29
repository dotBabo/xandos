#include "functions.h"
#include <stdio.h>

int mainMenu()
{
    int menu_select;

    printf("Welcome to Tictactoe\n");
    printf("What would you like to do?\n");
    printf("1. Play 2player\n2. Play vs Easy AI\n3. Play vs Hard AI\n0. Exit Program\n\n");
    scanf("%d", &menu_select);

    return menu_select;
}

void playGame(char board[3][3],char gameboard[3][3], char player[2])
{
    int inp;
    int i,j;
    int count = 1;
    int select = (count % 2 == 0) ? 1 :0; /*So I dont forget later. This is a if else in one line and if the
    condition is true it sets select to 1 else 0 */

    while (game == ON)
        {

        printf("\nWhere are you going\n\n");
        scanf("%d",&inp);
        printf("\n");

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if(gameboard[i][j] == inp)
                {
                    if(select == 0)
                    {
                        board[i][j] = player[select];
                        ++count;
                    }
                    else if(select == 1) 
                    {
                        board[i][j] = player[select];
                        ++count;
                    }
                
                }
            }    

        }

        displayBoard(board);
        checkWinner(board,player,select);
        select = (count % 2 == 0) ? 1 : 0;
        }
}

void initBoard(char board[3][3])
{
    char temp = '.';
    int i,j;
    //Fills the array with dots so the board can be visualised
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = temp;
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void displayBoard(char board[3][3])
{
    int i,j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void checkWinner(char board[3][3], char player[], int select)
{
    char winner_message[] = "is the winner!";

    for (int i = 0; i <3; i++)
    {
        if(board[i][0] == player[select] && board[i][1]== player[select] && board[i][2]== player[select] )
        {
            printf("\n%c %s",player[select],winner_message);
            game = OFF;
        }
            if(board[0][i] == player[select] && board[1][i]== player[select] && board[2][i]== player[select])
        {   
            printf("\n%c %s",player[select],winner_message);
            game = OFF;
        }
    }

    if(board[0][0] == player[select] && board[1][1]== player[select] && board[2][2]== player[select])
    {   
        printf("\n%c %s",player[select],winner_message);
        game = OFF;
    }

    if(board[0][2] ==player[select] && board[1][1]== player[select] && board[2][0]== player[select])
    {   
        printf("\n%c %s",player[select],winner_message);
        game = OFF;
    }
}