#include <iostream>
#include <stdio.h>
using namespace std;

extern bool game(int answer, int guess,bool flag);


int main() {
	
	int answer;
	int guess;
	//int chances = 5;
	bool flag = false;
	
	cout << "Enter a answer: " <<"";
	cin >> answer;
	
	while(flag == false){
		cout << "Enter a guess: " << "";
		cin >> guess;
		flag = game(answer, guess, flag);
		//chances = game(answer, guess, chances);
		
	}
	
	
	
	return 0;
}
