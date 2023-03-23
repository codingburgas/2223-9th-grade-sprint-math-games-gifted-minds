
#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
#include <Windows.h>
using namespace std;
int main()
{
	srand(time(NULL));
	bool won = false, lost = false, started = false;
	string name;
	char oper[3] = { '&', '|', '^' };
	int answer = 0, prize = 100, menu, readTheRules, correct = 0, num1, num2, operrand, answerr;
	cout << "Welcome to the BINARY GAMING TEST! WE CAN CALL YOU ";
	getline(cin, name);
	system("cls");
	cout << "PERFECT, " << name << "! LET THE GAME BEGIN!\n";
	Sleep(2500);
	do
	{
		cout << "ENTER A NUMBER TO CONTINUE!" << "\n\n1. START THE GAME!\n\n2. READ THE RULES!\n\n3. ESCAPE THIS 'GAME' AND NEVER COME BACK BECAUSE YOU DON'T WANT TO!\n";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "OKAY, LETS PLAY!";
			started = true;
			break;
		}
		case 2:
		{
			cout << "Oh, want to know your enemy? I respect that. Well, you will have random numbers 10 times and a random operation. \n You will need to answer, what is the result of the binary operation (in decimal numbers, we are 100% monsters, after all!)\n Every time you answer correctly your prize will multiply by two. Yes, we have a prize. Well, good luck then!\n\n\n 1. - I've read\n 2. - I've read\n 3. I've read. \n duck. - I've read.";
			cin >> readTheRules;
			break;
		}
		case 3:
		{
			cout << "Sorry, but you can escape only by beating the game! (Or pressing the 'X' up there)";
			break;
		}
		default:
		{
			cout << "Sorry, didn't hear you well.";
		}
		}
		Sleep(3000);
		system("cls");
	} while (started != true);
	for (int i = 0; i < 15; i++)
	{
		num1 = rand() % 16;
		num2 = rand() % 16;
		operrand = rand() % 3;
		cout << num1 << " " << oper[operrand] << " " << num2 << "\n";
		switch (operrand)
		{
		case 0:
		{
			answer = (num1 & num2);
			break;
		}
		case 1:
		{
			answer = (num1 | num2);
			break;
		}
		case 2:
		{
			answer = (num1 ^ num2);
			break;
		}
		}
		cin >> answerr;
		if (answer == answerr)
		{
			cout << "CORRECT!\n";
			correct++;
		}
		else
		{
			cout << "YOU LOST, " << name << " :(\nThe correct answer was " << answer << "\n";
			break;
		}
	}
	cout << "Your prize is " << (prize << correct);
}

