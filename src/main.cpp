#include <iostream>
#include <stdio.h>
using namespace std;

extern int game(int answer, int guess, int chances);


int main() {
	
	int answer;
	int guess;
	int chances = 5;
	
	cout << "Enter a answer: " <<"";
	cin >> answer;
	
	while(chances > 0){
		cout << "Enter a guess: " << "";
		cin >> guess;
		chances = game(answer, guess, chances);
		
		
	}
	
	
	
	return 0;
}
