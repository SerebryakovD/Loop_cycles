#include<iostream>
#include "issue1.h"
#include "issue2.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	//issue1();
	// ���������������� ������ ����, ����� ���������� ����.
	//issue2();

	int side_a, side_b;
	char symbol;
	cout << "������� ������� �: ";
	cin >> side_a;
	cout << "������� ������� b: ";
	cin >> side_b;
	cout << "������� ������: ";
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