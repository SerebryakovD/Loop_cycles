#include<iostream>
#include "issue1.h"
#include "issue2.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	//issue1();
	// раскоментировать строку ниже, чтобы нарисовать ромб.
	//issue2();

	int n, m;
	char s;
	cout << "¬ведите сторону а: ";
	cin >> n;
	cout << "¬ведите сторону b: ";
	cin >> m;
	cout << "¬ведите символ: ";
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