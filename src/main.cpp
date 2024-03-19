#include <iostream>
#include <stdio.h>
using namespace std;

extern int game(int answer, int guess, int chances);
extern int util();


int main() {
	
	int answer = util();
	
	
	int guess;
	int chances = 5;
	//bool flag = false;
	
	//cout << "Enter a answer: " <<"";
	//cin >> answer;
	
	
	
	
	
	while(chances > 0){
		cout << chances << " chances left" << endl;
		cout << "Enter a guess: " << "";
		cin >> guess;
		//flag = game(answer, guess, flag);
		chances = game(answer, guess, chances);
		//cout << chances << endl;
		
		
	}
	
	
	
	return 0;
}
