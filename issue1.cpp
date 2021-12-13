#include<iostream>

using namespace std;

//Задание 1. Написать программу, которая проверяет пользователя на знание таблицы умножения.
//Программа выводит на экран два числа, пользователь должен ввести их произведение.
//Разработать несколько уровней сложности (отличаются сложностью и количеством вопросов).
//Вывести пользователю оценку его знаний.
// 1 уровень - 3 вопроса
// 2 уровень - 4 вопроса
// 3 уровень - 5 вопросов

void issue1() {
	int lvl;
	bool flag1 = true;

	while (flag1) {
		cout << "Выберите уровень сложности (1, 2, 3): ";
		cin >> lvl;

		if (lvl >= 1 && lvl <= 3) {
			cout << "Выбран уровень - " << lvl << endl;
			flag1 = false;
		}
	}

	cout << "Введите ответы на примеры" << endl;

	int scores = 0;
	int answer = 0;

	cout << "5x5=";
	cin >> answer;

	if (answer == (5 * 5)) { scores++; }

	cout << "2x7=";
	cin >> answer;

	if (answer == (2 * 7)) { scores++; }

	cout << "9x5=";
	cin >> answer;

	if (answer == (9 * 5)) { scores++; }

	if (lvl > 1) {
		cout << "9x9=";
		cin >> answer;
		if (answer == (9 * 9)) { scores++; }
	}

	if (lvl > 2) {
		cout << "9x8=";
		cin >> answer;
		if (answer == (9 * 8)) { scores++; }
	}

	if (
		(lvl == 1 && scores == 3) || 
		(lvl == 2 && scores == 4) || 
		(lvl = 3 && scores == 5)
	) {
		cout << "Поздравляем, вы набрали максимальный бал - " << scores;
	}
	else {
		cout << "Поздравляем, ваш бал - " << scores;
	}

}