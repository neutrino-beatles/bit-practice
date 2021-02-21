#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*****************************\n");
	printf("****  1.play	0.exit   ****\n");
	printf("*****************************\n");
}
//RAND_MAX-32767
void game()
{
	int ret = 0;
	int guess = 0;	//接收猜数字
	//1.生成随机数
	//那时间戳设置随机数生成起点
	//time_t time(time_t *timer)
	//time_t
	ret = rand()%100+1;//生成1-100之间的数字
	//printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("Too high\n");
		}
		else if (guess < ret)
		{
			printf("Too low\n");
		}
		else
		{
			printf("Correct!Congratulations!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));	//时间戳
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();		//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}