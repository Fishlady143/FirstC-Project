//EH - Coding 1 Spring 2025 Week 3
//Variables, Logic, Randomness
#include <iostream> //In-Out Stream sends and receives data from the console.
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main() {
	int age;
	age = 19;

	cout << "Name, fuckass \n";
	string input;
	cin >> input;
	cout << input + "? \n";
	int score = 0;
	char pInput = 'y';

	cout << "press y to increase score \n";
	do {
		score++;
		cin >> pInput;
	} while (pInput == 'y');



	if (input == "no") {
		cout << "cool";
		return 0;
	}
	else {
		cout << "guess your score \n";
		cin >> input;
		if (input != to_string(score - 1)) {
			cout << "*kills you* \n";
		}
		else {
			cout << "correct!";
			return 0;
		}
	}
	double counter = 1;
	while (counter <= 10) {
		cout << rand() % 51 + 50 << "\n";
		counter++;
	}
} //End of main, do I have to do this?