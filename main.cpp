#include<iostream>
#include "issue1.h"
#include "issue2.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	//issue1();
	// ���������������� ������ ����, ����� ���������� ����.
	//issue2();

	int n, m;
	char s;
	cout << "������� ������� �: ";
	cin >> n;
	cout << "������� ������� b: ";
	cin >> m;
	cout << "������� ������: ";
	cin >> s;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 || j == 0 || i == (n-1) || j == (m - 1)) {
				cout << " " << s << " ";
			}
			else {
				cout << "   ";
			}
		}

		cout << endl;
	}

	return 0;
}