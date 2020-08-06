#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <time.h>

int a[3][9];
COORD coord = { 0,0 };

void gotoxy(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void border()
{
	int i;
	for (i = 0; i < 9; i++)
	{
		gotoxy(30, 15 - i);
		printf("%c", 219);

	}
	for (i = 0; i < 9; i++)
	{
		gotoxy(90, 15 - i);
		printf("%c", 219);

	}
	for (i = 0; i < 9; i++)
	{
		gotoxy(150, 15 - i);
		printf("%c", 219);

	}
	for (i = 0; i < 180; i++)
	{
		gotoxy(i, 0);
		printf("%c", 219);

	}
	for (i = 0; i < 180; i++)
	{
		gotoxy(i, 16);
		printf("%c", 219);

	}
	for (i = 0; i < 15; i++)
	{
		gotoxy(0, 15 - i);
		printf("%c", 219);

	}
	for (i = 0; i < 15; i++)
	{
		gotoxy(179, 15 - i);
		printf("%c", 219);

	}
}
void bar(int size, int x, int y)
{
	int i;
	if (x == 0)
	{
		gotoxy(30 - size, 15 - y);
		for (i = 0; i <= size;i++)
			printf("%c", 177);
		for (i = 0; i < size; i++)
			printf("%c", 177);
	}
	if (x == 1)
	{
		gotoxy(90 - size, 15 - y);
		for (i = 0; i <= size; i++)
			printf("%c", 177);
		for (i = 0; i < size; i++)
			printf("%c", 177);
	}
	if (x == 2)
	{
		gotoxy(150 - size, 15 - y);
		for (i = 0; i <= size; i++)
			printf("%c", 177);
		for (i = 0; i < size; i++)
			printf("%c", 177);
	}
}
void clearbar(int size, int x, int y)
{
	int i;
	if (x == 0)
	{
		gotoxy(30 - size, 15 - y);
		for (i = 0; i < size; i++)
			printf(" ");
		printf("%c", 219);
		for (i = 0; i < size; i++)
			printf(" ");
	}
	if (x == 1)
	{
		gotoxy(90 - size, 15 - y);
		for (i = 0; i < size; i++)
			printf(" ");
		printf("%c", 219);
		for (i = 0; i < size; i++)
			printf(" ");
	}
	if (x == 2)
	{
		gotoxy(150 - size, 15 - y);
		for (i = 0; i < size; i++)
			printf(" ");
		printf("%c", 219);
		for (i = 0; i < size; i++)
			printf(" ");
	}
}
void cbar(int size, int x, int y)
{
	int i;
	gotoxy(x - size, y);
	for (i = 0; i <= size; i++)
		printf("%c",177);
	for (i = 0; i < size; i++)
		printf("%c",177);
}
void cclearbar(int size,int x,int y)
{
	int i;
		gotoxy(x - size, y);
		for (i = 0; i <= size; i++)
			printf(" ");
		for (i = 0; i < size; i++)
			printf(" ");	
}
/*
void drawDisc(int size,int x,int y)
{
//	int color = size;
////	if (size == 1)
//		color = 10;
//	else if (size == 7)
//		color = 11;
//	else if (size == 8)
//		color = 12;
//	setcolor(color);
//	setfillstyle(SOLID_FILL, color);
	if (x == 0)
	{
		//bar(200 - 15 * size, 500 - 30 * (y + 1), 200 + 15 * size, 500 - 30 * y);
		//sector(200, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		//setfillstyle(INTERLEAVE_FILL, color);
		//sector(200, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size)/2);
		//setfillstyle(SOLID_FILL, BLUE);
		//bar(190, 500 - (30 * (y + 1) + (15 * size) / 2), 210, 500 - 30 * (y + 1));
		//sector(200, 500 - 30 * (y + 1), 0, 360, 10, 5);
		//setfillstyle(SOLID_FILL, color);
		

	}
	if (x == 1)
	{
		bar(500 - 15 * size, 500 - 30 * (y + 1), 500 + 15 * size, 500 - 30 * y);
		sector(500, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(500, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(SOLID_FILL, BLUE);
		bar(490, 500 - (30 * (y + 1) + (15 * size) / 2), 510, 500 - 30 * (y + 1));
		sector(500, 500 - 30 * (y + 1), 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, color);
	}
	if (x == 2)
	{
		bar(800 - 15 * size, 500 - 30 * (y + 1), 800 + 15 * size, 500 - 30 * y);
		sector(800, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(800, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(SOLID_FILL, BLUE);
		bar(790, 500 - (30 * (y + 1) + (15 * size) / 2), 810, 500 - 30 * (y + 1));
		sector(800, 500 - 30 * (y + 1), 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, color);
	}
}*/
/*void clearDisc(int size, int x, int y,int usize)
{
	int color = usize;
	if (usize == 1)
		color = 10;
	if (usize == 7)
		color = 11;
	if (usize == 8)
		color = 12;
	setcolor(15);
	setfillstyle(SOLID_FILL, 15);
	if (x == 0)
	{
		bar(200 - 15 * size, 500 - 30 * (y + 1), 200 + 15 * size, 500 - 30 * y);
		sector(200, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, 15);
		sector(200, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(200, 500 - 30 * y, 0, 360, 15 * usize, (15 * usize) / 2);
		setcolor(BLUE);
		setfillstyle(SOLID_FILL, BLUE);
		bar(190, 60, 210, 500 - 30 * y);
		sector(200, 500 - 30 * y , 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, 15);
	}
	if (x == 1)
	{
		bar(500 - 15 * size, 500 - 30 * (y + 1), 500 + 15 * size, 500 - 30 * y);
		sector(500, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, 15);
		sector(500, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(500, 500 - 30 * y, 0, 360, 15 * usize, (15 * usize) / 2);
		setcolor(BLUE);
		setfillstyle(SOLID_FILL, BLUE);
		bar(490, 60, 510, 500 - 30 * y);
		sector(500, 500 - 30 * y, 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, 15);
	}
	if (x == 2)
	{
		bar(800 - 15 * size, 500 - 30 * (y + 1), 800 + 15 * size, 500 - 30 * y);
		sector(800, 500 - 30 * y, 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, 15);
		sector(800, 500 - 30 * (y + 1), 0, 360, 15 * size, (15 * size) / 2);
		setfillstyle(INTERLEAVE_FILL, color);
		sector(800, 500 - 30 * y, 0, 360, 15 * usize, (15 * usize) / 2);
		setcolor(BLUE);
		setfillstyle(SOLID_FILL, BLUE);
		bar(790, 60, 810, 500 - 30 * y);
		sector(800, 500 - 30 * y, 0, 360, 10, 5);
		setfillstyle(SOLID_FILL, 15);
	}
}*/
void Hanoi(int n, int fromcol, int tocol, int usecol)
{
	int i, j, k, xfromcol=30 + 60 * fromcol, xtocol= 30 + 60 * tocol, xusecol= 30 + 60 * usecol;
	if (n == 1)
	{
		//printf("\n Move disk 1 from column %d to column %d", fromcol, tocol);
		for (i = 0; i<9; i++)
			if (a[tocol][i] == 0)
				break;
		a[tocol][i] = n;
		for (j = 0; j<9; j++)
			if (a[fromcol][j] == 0)
				break;
//		clearDisc(n, fromcol, j - 1, a[fromcol][j - 2]);
		clearbar(n, fromcol, j - 1);
//		drawDisc(n, fromcol, j + 2);
		bar(n, fromcol, j);
		//for (k = j + 3; k < 15; k++)
		//{
		//	clearDisc(n, fromcol, k - 1, 15);
		//	drawDisc(n, fromcol, k);
		//	delay(70);
		//}
		for (k = j + 1; k < 10; k++)
		{
			clearbar(n, fromcol, k - 1);
			bar(n, fromcol, k);
			Sleep(30);
		}
//		clearDisc(n, fromcol, 14, 15);
		clearbar(n, fromcol, 9);
		if (fromcol<tocol)
			for (k = xfromcol; k < xtocol; k++)
			{
				cclearbar(n, k, 5);
				cbar(n, k + 1, 5);
				Sleep(15);
			}
		else
			for (k = xfromcol; k > xtocol; k--)
			{
				cclearbar(n, k, 5);
				cbar(n, k - 1, 5);
				Sleep(15);
			}
		cclearbar(n, k, 5);
//		drawDisc(n, tocol, 14);
		bar(n, tocol, 9);
		//for (k = 14; k > i; k--)
		//{
		//	clearDisc(n, tocol, k, 15);
		//	drawDisc(n, tocol, k - 1);
		//	delay(70);
		//}
		for (k = 9; k > i; k--)
		{
			clearbar(n, tocol, k);
			bar(n, tocol, k - 1);
			Sleep(30);
		}
		a[fromcol][j - 1] = 0;
		//printf("\n");
		//for (i = 0; i<3; i++)
		//{
		//	for (j = 0; j<9; j++)
		//		printf("%d ", a[i][j]);
		//	printf("\n");
		//}
		return;
	}
	Hanoi(n - 1, fromcol, usecol, tocol);
//	printf("\n Move disk %d from column %d to column %d", n, fromcol, tocol);
	for (i = 0; i<9; i++)
		if (a[tocol][i] == 0)
			break;
	a[tocol][i] = n;
	for (j = 0; j<9; j++)
		if (a[fromcol][j] == 0)
			break;

	//clearDisc(n, fromcol, j - 1, a[fromcol][j - 2]);
	clearbar(n, fromcol, j - 1);
	//drawDisc(n, fromcol, j + 2);
	bar(n, fromcol, j);
	//for (k = j + 3; k < 15; k++)
	//{
	//	clearDisc(n, fromcol, k - 1, 15);
	//	drawDisc(n, fromcol, k);
	//	delay(70);
	//}
	for (k = j + 1; k < 10; k++)
	{
		clearbar(n, fromcol, k - 1);
		bar(n, fromcol, k);
		Sleep(30);
	}
	//clearDisc(n, fromcol, 14, 15);
	clearbar(n, fromcol, 9);
	if (fromcol<tocol)
		for (k = xfromcol; k < xtocol; k++)
		{
			cclearbar(n, k, 5);
			cbar(n, k + 1, 5);
			Sleep(15);
		}
	else
		for (k = xfromcol; k > xtocol; k--)
		{
			cclearbar(n, k, 5);
			cbar(n, k - 1, 5);
			Sleep(15);
		}
	cclearbar(n, k, 5);
	//drawDisc(n, tocol, 14);

	bar(n, tocol, 9);
	
	//for (k = 14; k > i; k--)
	//{
	//	clearDisc(n, tocol, k, 15);
	//	drawDisc(n, tocol, k - 1);
	//	delay(70);
	//}
	for (k = 9; k > i; k--)
	{
		clearbar(n, tocol, k);
		bar(n, tocol, k - 1);
		Sleep(30);
	}
	a[fromcol][j - 1] = 0;
	//printf("\n");
	//for (i = 0; i<3; i++)
	//{
	//	for (j = 0; j < 9; j++)
	//		printf("%d ", a[i][j]);
	//	printf("\n");
	//}
	Hanoi(n - 1, usecol, tocol, fromcol);
}
int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	int n,i,j,c,x=190;
/*	initwindow(1000,600);
	setbkcolor(WHITE);
	clearviewport();
	setcolor(BLUE);
	setfillstyle(SOLID_FILL, BLUE);
	bar(190, 500, 210, 50);
	sector(200, 500, 0, 360, 10, 5);
	setfillstyle(INTERLEAVE_FILL, BLUE);
	sector(200, 50, 0, 360, 10, 5);
	setfillstyle(SOLID_FILL, BLUE);
	bar(490, 500, 510, 50);
	sector(500, 500, 0, 360, 10, 5);
	setfillstyle(INTERLEAVE_FILL, BLUE);
	sector(500, 50, 0, 360, 10, 5);
	setfillstyle(SOLID_FILL, BLUE);
	bar(790, 500, 810, 50);
	sector(800, 500, 0, 360, 10, 5);
	setfillstyle(INTERLEAVE_FILL, BLUE);
	sector(800, 50, 0, 360, 10, 5);
	setfillstyle(SOLID_FILL, BLACK);
	setcolor(BLACK);
	outtextxy(198, 550, "A");
	outtextxy(498, 550, "B");
	outtextxy(798, 550, "C");
	setcolor(RED);
	outtextxy(800, 0, "Parham Rahimi");
	outtextxy(800, 20, "9531031");*/
	border();
	gotoxy(0, 20);
    printf("Please insert n:\n");
    scanf_s("%d",&n);
    for (i=0;i<9;i++)
        for (j=0;j<3;j++)
            a[j][i]=0;
    for (i=0;i<n;i++)
        a[0][i]=n-i;
	for (i = 0; i<3; i++)
		for (j = 0; j<9; j++)
			bar (a[i][j], i, j);
	system("cls");
	for (i = 0; i<3; i++)
		for (j = 0; j<9; j++)
			bar(a[i][j], i, j);
	border();
	for (j = 0; j < n; j++)
	{
		gotoxy(30, 15 - j);
		printf("%c", 177);
	}
	Hanoi(n, 0, 2, 1);
	scanf_s("%d", &c);
    return 0;
}
