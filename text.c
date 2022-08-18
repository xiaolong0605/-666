#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("******************\n");
	printf("****  1.play  ****\n");
	printf("****  0.exit  ****\n");
	printf("******************\n");
}
void game()
{
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	//初始化棋盘
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	//打印棋盘
	displayboard(mine, ROW, COL);
	displayboard(show, ROW, COL);
	//布置雷
	setmine(mine, ROW, COL);
	displayboard(mine, ROW, COL);
	//排查雷
	findmine(mine,show, ROW, COL);
	
	

}

int main()
{
	int intput = 0;
	srand((signed int)time(NULL));
	do
	{
		menu();
		printf("请选择：>\n");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
			//玩游戏
		case 0:
			printf("游戏结束\n");
			break;
			//结束
		default:
			printf("选择错误，请重新输入：\n");
			break;
		}
	} while (intput);

}
