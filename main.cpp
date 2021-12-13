#include<iostream>
#include "issue1.h"
#include "issue2.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	//issue1();
	// раскоментировать строку ниже, чтобы нарисовать ромб.
	//issue2();

	int side_a, side_b;
	char symbol;
	cout << "¬ведите сторону а: ";
	cin >> side_a;
	cout << "¬ведите сторону b: ";
	cin >> side_b;
	cout << "¬ведите символ: ";
	cin >> symbol;

	for (int i = 0; i < side_a; i++) {
		for (int j = 0; j < side_b; j++) {
			if (i == 0 || j == 0 || i == (side_a -1) || j == (side_b - 1)) {
				cout << " " << symbol << " ";
			}
			else {
				cout << "   ";
			}
		}

		cout << endl;
	}

	return 0;
}