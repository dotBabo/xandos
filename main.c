#include <stdio.h>

#define ON  1
#define OFF 0

int checkWinner(char arr[3][3],char m[2], int n);

int game;

int main()
{
    int c = 0, i = 0, j = 0, d = 0;
    int count = 1;
    int inp;
    int select = (count % 2 == 0) ? 1 :0; /*So I dont forget later. This is a if else in one line and if the
    condition is true it sets select to 1 else 0 */
    char temp = '.';
    char player[2] ={'X','O'};
    char board[3][3];
    char gameboard[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("Welcome to Tictactoe\n\n");
  
    game = ON;

    //Fills the array with dots so the board can be visualised
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
        //This needs to be changed but for we got input, and the printing of the board all done in here 
        printf("Where are you going\n\n");
        scanf("%d",&inp);

        // CREATE A SEPERATE FUNCTION TO PRINT THE BOARD THIS IS UGLYa
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
                    printf("%c ", board[i][j]);
                    checkWinner(board,player,select);
                    select = (count % 2 == 0) ? 1 : 0;
            }    
            printf("\n");
        }
    }
    return 0;
}

//Print a message to show the user that someone won. for next time thanks.
int checkWinner(char board[3][3], char player[], int select)
{
    for (int i = 0; i <3; i++)
    {
        if(board[i][0] == player[select] && board[i][1]== player[select] && board[i][2]== player[select] )
        {
            game = OFF;
        }
            if(board[0][i] == player[select] && board[1][i]== player[select] && board[2][i]== player[select])
        {
            game = OFF;
        }
    }

    if(board[0][0] == player[select] && board[1][1]== player[select] && board[2][2]== player[select])
    {
        game = OFF;
    }

    if(board[0][2] ==player[select] && board[1][1]== player[select] && board[2][0]== player[select])
    {
        game = OFF;
    }

}