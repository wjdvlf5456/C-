#include <iostream>
#include <stdio.h>
using namespace std;

// 숫자 랜덤 생성

int util() {

	int answer;

	int hundred;
	int ten;
	int one;

	hundred = rand() % 10;

	bool flag = false;
	while (flag == false) {
		ten = rand() % 10;
		if (ten != hundred) {
			flag = true;

		}

	}

	flag = false;

	while (flag == false) {
		one = rand() % 10;
		if (one != ten && one != hundred) {
			flag = true;

		}

	}

	answer = (hundred * 100) + (ten * 10) + one;

	cout << answer << endl;

	return answer;
}
