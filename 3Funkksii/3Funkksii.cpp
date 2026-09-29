#include <iostream>
#include <Windows.h> 
#include <cstdlib>
#include <ctime>

#pragma execution_character_set("utf-8")

using namespace std;

void ugadaiChiclo();
void tablitsaymnoj();
void deliteli();

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int choice;

	srand(time(0));

	do
	{
		cout << "МЕНЮ\n";
		cout << "1. Угадай число\n";
		cout << "2. Таблица умножения\n";
		cout << "3. Вывод делителей числа\n";
		cout << "4. Выход\n";

		cout << "\nВведите номер: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			ugadaiChiclo();
			break;

		case 2:
			tablitsaymnoj();
			break;

		case 3:
			deliteli();
			break;
		case 4:
			cout << "Выход из программы\n";
			break;

		default:
			cout << "Такого пункта нет\n";
		}
	} while (choice != 4);

	return 0;
}

void ugadaiChiclo()
{
	int random = rand() % 101;
	int userchiclo;

	do
	{
		cout << "Угадайте число от 0 до 100: ";
		cin >> userchiclo;

	} while (userchiclo != random);

	cout << "Вы угадали число!\n";
}

void tablitsaymnoj()
{
	int table[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			table[i][j] = (i + 1) * (j + 1);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << table[i][j] << "\t";
		}

		cout << "\n";
	}
}

void deliteli()
{
	int number;

	cout << "Введите число: ";
	cin >> number;

	cout << "Делители числа: ";

	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			cout << i << " ";
		}
	}

	cout << "\n";
}





































