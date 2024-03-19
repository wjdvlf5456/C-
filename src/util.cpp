#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

// 숫자 랜덤 생성

int util() {

	int answer;

	int hundred;
	int ten;
	int one;

	srand((unsigned int) time(NULL));

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

//	if(hundred == 0){
//		cout << 0;
//
//	}

	//	cout << answer << endl;

	return answer;
}
