﻿#include <string>
#include <iostream>
using namespace std;

int bj_10430() {
	int A, B, C;
	cin >> A >> B >> C;
	cout << (A + B) % C << endl;
	cout << (A%C + B % C) % C << endl;
	cout << (A*B) % C << endl;
	cout << ((A%C)*(B%C)) % C << endl;
	return 0;
}