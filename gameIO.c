#include "gameIO.h"
#include <stdio.h>
#include <Windows.h>
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable:4996)


int PLAYERIO(bool playernow,char arr[ROW][COL], int X, int Y)
{
	int RETURN_ = 0;
	if (playernow == true)
	{
		arr[X][Y] = 'X';
		RETURN_= 1;
	}
	else if (playernow == false)
	{
		arr[X][Y] = 'O';
		RETURN_= 0;
	}
	//system("cls");
	//for (int i1 = 0; i1 < ROW; i1++)
	//{
	//	for (int i2 = 0; i2 < COL; i2++)
	//	{
	//		if (arr[i1][i2] !=0)
	//			printf("%c ", arr[i1][i2]);
	//		else 
	//			printf("F ");
	//	}
	//	printf("\n");
	//}
	return RETURN_;
}

int isWIN(bool playernow, char arr[ROW][COL])
{
	for (int i1 = 0; i1 < ROW; i1++)//判断横排
	{
		if (arr[i1][0] == arr[i1][1] && arr[i1][0] == arr[i1][2] && arr[i1][0] != 0)
		{
			return 1;
			break;
		}

	}
	for (int i2 = 0; i2 < COL; i2++)//判断竖排
	{
		if (arr[0][i2] == arr[1][i2] && arr[0][i2] == arr[2][i2] && arr[0][i2] !=0)
		{
			return 1;
			break;

		}
	}
	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] != 0)//从左上到右下
	{
		return 1;

	}
	if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[0][2] != 0)//从右上到坐下
	{
		return 1;
	}
	int v1 = 0;
	for (int i3 = 0; i3 < ROW; i3++)//计算几个空被填了
	{
		for (int i4 = 0; i4 < COL; i4++)
		{
			if (arr[i3][i4] != 0)
			{
				v1++;
			}
		}
	}
	if (v1 == ROW * COL)//判断是否平局
	{
		return 2;
	}
	else return 0;
	
}

int InitializeGame(bool* playernow)
{
	bool owo = *playernow;
	*playernow = !(owo);
	return 0;
}