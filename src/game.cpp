#include <iostream>
#include <stdio.h>
using namespace std;

// 게임 흐름, 스트라이크, 볼 처리 등

int game(int answer, int guess, int chances) {

	int aArray[4];
	int gArray[4];

	aArray[0] = answer;
	aArray[1] = answer / 100;
	answer = answer % 100;
	aArray[2] = answer / 10;
	answer = answer % 10;
	aArray[3] = answer;

	gArray[0] = guess;
	gArray[1] = guess / 100;
	guess = guess % 100;
	gArray[2] = guess / 10;
	guess = guess % 10;
	gArray[3] = guess;

	answer = aArray[0];
	guess = gArray[0];

	int strikes = 0;
	int balls = 0;

	if (answer == guess) {
		cout << "You win!" << endl;

		chances = 0;

		return chances;

	} else {

		for (int i = 1; i < 4; i++) {
			for (int j = 1; j < 4; j++) {
				if (aArray[i] == gArray[j] && i == j) {
					strikes++;

				} else if (aArray[i] == gArray[j] && i != j) {
					balls++;
				}

			}
		}

		cout << "Strikes: " << strikes;
		cout << ", Balls: " << balls << endl;

	}

	chances--;

	if (chances <= 0) {
		cout << "You lose!" << endl;

	}

	return chances;
}
