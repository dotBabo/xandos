#include <stdio.h>

#define ON  1
#define OFF 0

int main()
{
    int c, i, j,d;
    char board[3][3];
    char gameboard[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int count;
    i= d = j = c = 0;
    count = 0;
    int inp;
    int game;
    printf("Welcome to Tictactoe\n\n");
    char temp = '.';
  
    game = ON;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = temp;
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

    while (game == ON){
        printf("Where are you going\n\n");
        scanf("%d",&inp);

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if(gameboard[i][j] == inp)
                {
                    if(count % 2 == 0)
                    {
                    board[i][j] = 'X';
                    ++count;
                    }
                    else if(count % 2 == 1)
                    {
                    board[i][j] = 'O';
                    ++count;
                    }
                
                }
                printf("%c ", board[i][j]);

                for (int i = 0; i <3; i++)
                {
                    if(board[i][0] == 'X' && board[i][1]== 'X' && board[i][2]== 'X' || board[i][0] == 'O' && board[i][1]== 'O' && board[i][2]== 'O')
                    {
                    game = OFF;
                    }
                    if(board[0][i] == 'X' && board[1][i]== 'X' && board[2][i]== 'X'|| board[0][i] == 'O' && board[1][i]== 'O' && board[2][i]== 'O')
                    {
                    game = OFF;
                    }
                }

                if(board[0][0] == 'X' && board[1][1]== 'X' && board[2][2]== 'X'|| board[0][0] == 'O' && board[1][1]== 'O' && board[2][2]== 'O')
                {
                game = OFF;
                }
                if(board[0][2] == 'X' && board[1][1]== 'X' && board[2][0]== 'X'|| board[0][2] == 'O' && board[1][1]== 'O' && board[2][0]== 'O')
                {
                game = OFF;
                }
            }
        printf("\n");
        }
       
    }


    return 0;
}