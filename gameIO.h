#pragma once
#define ROW 3
#define COL 3
#ifdef __cplusplus
extern "C" {
#endif
#include <stdbool.h>

int PLAYERIO(bool playernow,char arr[ROW][COL], int X, int Y);

int isWIN(bool playernow, char arr[ROW][COL]);

int InitializeGame(bool* playernow);

#ifdef __cplusplus
}
#endif