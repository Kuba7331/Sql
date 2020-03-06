#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <stdio.h>
#include<windows.h>
using namespace std;

int xx[7], yy[7];               //deklaracja zmiennych
int x, y, trafione, zatopione;

int main()
{

	cout << "Witaj w grze: Statki!" << endl << "Twoje zadanie to zastrzelic statki komputera" << endl;
	char board[7][7] = {
		{' ',' ',' ',' ', ' ', ' ',' '},
		{' ','-','-','-', '-', '-',' '},
		{' ','-','-','-', '-', '-',' '},                         
		{' ','-','-','-', '-' ,'-',' '},
		{' ','-','-','-', '-' ,'-',' '},
		{' ','-','-','-', '-', '-',' '},
		{' ',' ',' ',' ', ' ', ' ',' '}
	};
	char compBoard[7][7] = {
		{' ',' ',' ',' ', ' ', ' ',' '},
		{' ','-','-','-', '-', '-',' '},
		{' ','-','-','-', '-', '-',' '},
		{' ','-','-','-', '-' ,'-',' '},
		{' ','-','-','-', '-' ,'-',' '},
		{' ','-','-','-', '-', '-',' '},
		{' ',' ',' ',' ', ' ', ' ',' '}
	};
	cout << "Komputer tworzy wlasna plansze..." << endl;
	Sleep(500);
	trafione = 0;
	zatopione = 0;
	srand(time(NULL));
	for (int j = 0; j < 5; j++) {                                            //system tworzenia planszy przez komputer
		xx[j] = rand() % 5 + 1;
		yy[j] = rand() % 5 + 1;
		for (int m = 1; m < 5; m++)
		{
			if ((xx[j] == xx[j - m]) && (yy[j] == yy[j - m]))
			{
				j--;
				xx[j] = rand() % 5 + 1;
				yy[j] = rand() % 5 + 1;
			}
		}
		compBoard[xx[j]][yy[j]] = 'X';
	}
	for (int i = -1; i <= 7; i++) {
		Sleep(500);
		cout << "O to twoja mapa gdzie wystrzeliles pociski!" << endl;
		cout << board[1][1] << board[2][1] << board[3][1] << board[4][1] << board[5][1] << endl;                        //plansza uzytkownika
		cout << board[1][2] << board[2][2] << board[3][2] << board[4][2] << board[5][2] << endl;
		cout << board[1][3] << board[2][3] << board[3][3] << board[4][3] << board[5][3] << endl;
		cout << board[1][4] << board[2][4] << board[3][4] << board[4][4] << board[5][4] << endl;
		cout << board[1][5] << board[2][5] << board[3][5] << board[4][5] << board[5][5] << endl;
		Sleep(500);
		cout << endl << "Podaj X" << endl;
		cin >> x;
		cout << "Podaj Y" << endl;
		cin >> y;                                                                                  //ustawienie planszy dla gracza
		Sleep(500);
		if (x > 5)
		{
			x = 1;
		}
		if (y > 5)
		{
			y = 1;
		}
		for (int q = 0; q < 5; q++)
		{
			if ((x == xx[q]) && (y == yy[q]))
			{
				trafione++;

			}

		}


		board[x][y] = 'x';
		system("cls");

		i++;
	}
	zatopione = 5;
	zatopione = zatopione - trafione;
	system("cls");
	cout << "Gratulacje, skonczyles gre o to twoj wynik!:" << endl;
	cout << "Trafione: " << trafione << endl;
	cout << "Nietrafione: " << zatopione << endl;
	cout << "Twoja plansza:" << endl;
	cout << board[1][1] << board[2][1] << board[3][1] << board[4][1] << board[5][1] << endl;
	cout << board[1][2] << board[2][2] << board[3][2] << board[4][2] << board[5][2] << endl;
	cout << board[1][3] << board[2][3] << board[3][3] << board[4][3] << board[5][3] << endl;
	cout << board[1][4] << board[2][4] << board[3][4] << board[4][4] << board[5][4] << endl;                                  //pokazywanie planszy
	cout << board[1][5] << board[2][5] << board[3][5] << board[4][5] << board[5][5] << endl;
	cout << "Plansza komputera:" << endl;
	cout << compBoard[1][1] << compBoard[2][1] << compBoard[3][1] << compBoard[4][1] << compBoard[5][1] << endl;
	cout << compBoard[1][2] << compBoard[2][2] << compBoard[3][2] << compBoard[4][2] << compBoard[5][2] << endl;
	cout << compBoard[1][3] << compBoard[2][3] << compBoard[3][3] << compBoard[4][3] << compBoard[5][3] << endl;
	cout << compBoard[1][4] << compBoard[2][4] << compBoard[3][4] << compBoard[4][4] << compBoard[5][4] << endl;
	cout << compBoard[1][5] << compBoard[2][5] << compBoard[3][5] << compBoard[4][5] << compBoard[5][5] << endl;
	getchar(); getchar();
}