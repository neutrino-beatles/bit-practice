#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>	//srand()
#include<time.h>

//����
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//������������״̬
//���Ӯ-'*'
//����Ӯ-'#'
//ƽ��-'Q'
//����-'C'
char Doeswin(char board[ROW][COL], int row, int col);
int DoesFull(char board[ROW][COL], int row, int col);