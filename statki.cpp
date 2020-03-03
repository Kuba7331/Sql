

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	int x, y, xx, yy, trafione, zatopione;
	cout << "Witaj w grze: Statki!" << endl;
	char board[5][5] = {
		{' ',' ',' ', ' ', ' '},
		{' ','_','_', '_', ' '},
		{' ','_','_', '_' ,' '},
		{' ','_','_', '_' ,' '},
		{' ',' ',' ', ' ', ' '}
	};
	char compBoard[5][5] = {
	{' ',' ',' ', ' ', ' '},
	{' ','_','_', '_', ' '},
	{' ','_','_', '_' ,' '},
	{' ','_','_', '_' ,' '},
	{' ',' ',' ', ' ', ' '}
	};
	cout << "Komputer tworzy wlasna plansze..." << endl;
	trafione = 0;
	zatopione = 0;
	srand(time(NULL));
	for (int j = 1; j <= 3; j++) {
		xx = rand() % 3 + 1;
		yy = rand() % 3 + 1;
		compBoard[yy][xx] = 'X';
		cout << " " << endl;
		cout << "---" << endl;
		cout << compBoard[1][1] << compBoard[1][2] << compBoard[1][3] << endl;
		cout << compBoard[2][1] << compBoard[2][2] << compBoard[2][3] << endl;
		cout << compBoard[3][1] << compBoard[3][2] << compBoard[3][3] << endl;
		cout << "---" << endl;

	}
	cout << "Oto i twoja plansza!" << endl;
	cout << board[1][1] << board[2][1] << board[3][1] << endl;
	cout << board[1][2] << board[2][2] << board[3][2] << endl;
	cout << board[1][3] << board[2][3] << board[3][3] << endl;
	cout << "Prosze podac wspolrzedne, aby polozyc statek mozesz rozmiescic max 3 statki!. (y, x)" << endl;
	cin >> y >> x;
	board[y][x] = 'x';
	cout << "O to i twoja aktualna plansza!" << endl;
	cout << board[1][1] << board[2][1] << board[3][1] << endl;
	cout << board[1][2] << board[2][2] << board[3][2] << endl;
	cout << board[1][3] << board[2][3] << board[3][3] << endl;
	if (board[x][y] == compBoard[xx][yy]) {
		trafione++;
	}
	else {
		zatopione++;
	}
	for (int i = 1; i <= 3; i++) {
		cin >> y >> x;
		board[y][x] = 'x';
		cout << "O to i twoja aktualna plansza!" << endl;
		cout << board[1][1] << board[2][1] << board[3][1] << endl;
		cout << board[1][2] << board[2][2] << board[3][2] << endl;
		cout << board[1][3] << board[2][3] << board[3][3] << endl;
		if (board[x][y] == compBoard[xx][y) {
			trafione++;
		}
		else {
			zatopione++;
		}
		i++;
	}

	cout << "Gratulacje, skonczyles gre o to i twoj wynik!:" << endl;
	cout << "Trafione: " << trafione << endl;
	cout << "Zatopione: " << zatopione << endl;
	cout << "Twoja plansza:" << endl;
	cout << board[1][1] << board[2][1] << board[3][1] << endl;
	cout << board[1][2] << board[2][2] << board[3][2] << endl;
	cout << board[1][3] << board[2][3] << board[3][3] << endl;
	cout << "Plansza komputera:" << endl;
	cout << compBoard[1][1] << compBoard[1][2] << compBoard[1][3] << endl;
	cout << compBoard[2][1] << compBoard[2][2] << compBoard[2][3] << endl;
	cout << compBoard[3][1] << compBoard[3][2] << compBoard[3][3] << endl;
	getchar();
}
