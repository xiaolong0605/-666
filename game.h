#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define ROW 4
#define COL 4

#define ROWS ROW+2
#define COLS COL+2

#define Count 15

void initboard(char board[ROWS][COLS], int rows, int cols, char ret);

void displayboard(char board[ROWS][COLS], int row, int col);

void setmine(char board[ROWS][COLS], int row, int col);

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);