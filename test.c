#define _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ

#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("***** 1.play   0.exit	 *****\n");
	printf("******************************\n");
}
//��Ϸ�㷨��ʵ��
void game()
{
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������~��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡĬ������
	DisplayBoard(board, ROW, COL);
	//����
	char ret = 0;
	while (1)
	{
		//�������-ʵ�ʲ�����������
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = Doeswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//�ж�����Ƿ�Ӯ
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ��Ӯ
		ret = Doeswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret = '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}