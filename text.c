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
	//��ʼ������
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	//��ӡ����
	displayboard(mine, ROW, COL);
	displayboard(show, ROW, COL);
	//������
	setmine(mine, ROW, COL);
	displayboard(mine, ROW, COL);
	//�Ų���
	findmine(mine,show, ROW, COL);
	
	

}

int main()
{
	int intput = 0;
	srand((signed int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>\n");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
			//����Ϸ
		case 0:
			printf("��Ϸ����\n");
			break;
			//����
		default:
			printf("ѡ��������������룺\n");
			break;
		}
	} while (intput);

}
