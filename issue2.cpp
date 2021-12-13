#include<iostream>
using namespace std;

// Задание 2. Вывести на экран ромб из звездочек.
void issue2() {
	for (int i = 0; i < 10; i++) {
		for (int j = 10; j > 0; j--) {
			if (i > j) {
				cout << " $ ";
			}
			else {
				cout << "   ";
			}

		}

		for (int j = 0; j < 10; j++) {
			if (i > j) {
				cout << " * ";
			}
			else {
				cout << "   ";
			}

		}

		cout << endl;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i < j) {
				cout << " @ ";
			}
			else {
				cout << "   ";
			}

		}

		for (int j = 10; j > 0; j--) {
			if (i < j) {
				cout << " # ";
			}
			else {
				cout << "   ";
			}

		}

		cout << endl;
	}
}