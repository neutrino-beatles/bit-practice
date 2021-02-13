#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏

#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("***** 1.play   0.exit	 *****\n");
	printf("******************************\n");
}
//游戏算法的实现
void game()
{
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘~初始化数组
	InitBoard(board, ROW, COL);
	//打印默认棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	char ret = 0;
	while (1)
	{
		//玩家下棋-实际操作的是数组
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = Doeswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//判断玩家是否赢
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否会赢
		ret = Doeswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret = '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}