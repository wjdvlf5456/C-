#include <iostream>
#include <stdio.h>
using namespace std;

// 게임 흐름, 스트라이크, 볼 처리 등

int game(int answer, int guess, int chances) {

	int strikes;
	int balls;

	if (answer == guess) {
		cout << "You win!" << endl;
		return 0;

	} else if (chances <= 0) {
		cout << "You lose!" << endl;

	} else {
		cout << "Strikes: " << strikes;
		cout << ", Balls: " << balls << endl;

	}

	chances--;


	return chances;
}
