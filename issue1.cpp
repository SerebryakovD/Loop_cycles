#include<iostream>

using namespace std;

//������� 1. �������� ���������, ������� ��������� ������������ �� ������ ������� ���������.
//��������� ������� �� ����� ��� �����, ������������ ������ ������ �� ������������.
//����������� ��������� ������� ��������� (���������� ���������� � ����������� ��������).
//������� ������������ ������ ��� ������.
// 1 ������� - 3 �������
// 2 ������� - 4 �������
// 3 ������� - 5 ��������

void issue1() {
	int lvl;
	bool flag1 = true;

	while (flag1) {
		cout << "�������� ������� ��������� (1, 2, 3): ";
		cin >> lvl;

		if (lvl >= 1 && lvl <= 3) {
			cout << "������ ������� - " << lvl << endl;
			flag1 = false;
		}
	}

	cout << "������� ������ �� �������" << endl;

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
		cout << "�����������, �� ������� ������������ ��� - " << scores;
	}
	else {
		cout << "�����������, ��� ��� - " << scores;
	}

}