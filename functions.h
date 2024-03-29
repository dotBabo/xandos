#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define ON  1
#define OFF 0

extern int game;

int mainMenu();
void playGame(char arr[3][3],char garr[3][3],char m[2]);
void initBoard(char arr[3][3]);
void displayBoard(char arr[3][3]);
void checkWinner(char arr[3][3],char m[2], int n);

#endif