#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------��Ϸ-----------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------\n");
}

void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = Count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//�Ų���
int getmine(char mine[ROWS][COLS], int x, int y)
{
	int t = 0;
	int i = 0;
	int j = 0;
	for (i = -1; i < 2; i++)
		{
			for (j = -1; j < 2; j++)
			{
				if (mine[x + i][y + j] == '1')
				{
					t++;
				}
			}
	}
	return t;
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int flag =0;
	do
	{
		int x = 0;
		int y = 0;
		int i = 0;
		int j = 0;	
		printf("���������꣺\n");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				show[x][y] = getmine(mine, x, y)+'0';
			}
				if (mine[x][y] == '1')
				{
					printf("��Ϸ������\n");
					break;
				}
				displayboard(show, ROW, COL);
		} 
		else
		{
			printf("����������������룺\n");
		}
		flag++;
	} while (flag<ROW*COL-Count);
	if (flag == ROW * COL - Count)
	{
		printf("��Ϸʤ����\n");
		displayboard(mine, ROW, COL);
	}
		
}