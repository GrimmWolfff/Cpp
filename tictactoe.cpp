#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
using namespace std;
char arr[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
bool end;
void Draw()
{
	system("cls");
	cout << "Tic Tac Toe" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void Input()
{
	int a;
	cout << "It's " << player << " player's turn.\nSwap any number by " << player << " : ";
	cin >> a;

	if (a == 1){
		if (arr[0][0] == '1')
		{
		arr[0][0] = player;
		}else{
			cout << "You can't overwrite! Try again!\n";
		}
	}
	else if (a == 2){
		if (arr[0][1] == '2')
		{
		arr[0][1] = player;
		}else{
			cout << "You can't overwrite! Try again!\n";
		}
	}
	else if (a == 3){
		if(arr[0][2] == '3'){
		arr[0][2] = player;
	}else{
		cout << "You can't overwrite! Try again!\n";
	}
	}
	else if (a == 4){
		if(arr[1][0] == '4'){
		arr[1][0] = player;
	}else{
		cout << "You can't overwrite! Try again!\n";
	}
	}
	else if (a == 5){
		if(arr[1][1] == '5'){
		arr[1][1] = player;
	}else{
		cout << "You can't overwrite! Try again!\n";
	}
	}
	else if (a == 6){
		if(arr[1][2] == '6'){
		arr[1][2] = player;
	}
    }
	else if (a == 7){
		if(arr[2][0] == '7'){
		arr[2][0] = player;
	}else{
		cout << "You can't overwrite! Try again!\n";
	}
	}
	else if (a == 8){
		if(arr[2][1] == '8'){
		arr[2][1] = player;
	}else{
		cout << "You can't overwrite! Try again!\n";
	}
	}
	else if (a == 9){
		if(arr[2][2] == '9'){
		arr[2][2] = player;
	}else{
		cout << "You can't overwrite! Try again!\n";
	}
	}
	else{
		cout << "Invalid key! Try again!\n";
	}
}

void SwitchPlayer(){
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char Logic()
{
	if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
		return 'X';
	if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
		return 'X';
	if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')
		return 'X';

	if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X')
		return 'X';
	if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')
		return 'X';
	if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
		return 'X';

	if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
		return 'X';
	if (arr[2][0] == 'X' && arr[1][1] == 'X' && arr[0][2] == 'X')
		return 'X';

	if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
		return 'O';
	if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
		return 'O';
	if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
		return 'O';

	if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
		return 'O';
	if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')
		return 'O';
	if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
		return 'O';

	if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
		return 'O';
	if (arr[2][0] == 'O' && arr[1][1] == 'O' && arr[0][2] == 'O')
		return 'O';
}

void Game(){
	int round = 0;
	Draw();
	while (true)
	{
		Input();
		round++;
		Draw();
		if (Logic() == 'X')
		{
			end = true;
			cout << "X is winner!\nClick R to restart\n";
			break;
		}
		else if (Logic() == 'O')
		{
			end = true;
			cout << "O is winner!" << endl;
			break;
		}else if(Logic() == '/' && round == 9){
			end = true;
			cout << "-Draw-\n";
		}
		SwitchPlayer();
	}
}
int main()
{
	SetConsoleTitle("Tic Tac Toe I.S");
	Game();
	getch();
	system("pause");
	return 0;
}
