// EH - Feb 20th, 2025

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	string colors[4] = { "red", "yellow", "glurple", "NULL" }; // I LOVE glurple

	string input; 

	for (int i = 0; i < 4; i++) { //bro is using a while loop, this is literally better
		cout << colors[i] << "\n";
	}
	string reasons[10];
	int iter = 0;
	do {
		cout << "why do you like girls?\n"; //Cuz lesbian?
		
		getline(cin, input); //Get reason
		
		reasons[iter++] = input; //Add it to the list
		
	} while (input != "quit" && iter <= 10);

	for (int i = 0; i < 10; i++) {
		if (reasons[i] != "") {
			cout << "Reason: " << reasons[i] << "\n";	 //Print all the reasons
		}
	}

	srand(NULL); //Seed the RNG

	int random[33]; // 33 random numbers

	for (int i = 0; i < 33; i++) { //Generate 33 random numbers between 1777 and 2025
		random[i] = (rand() % 249) + 1777;
		cout << random[i] << "\n";
	}

	int highScore = 0; //Highest number
	for (int i = 0; i < 33; i++) { //Find the highest number
		if (random[i] > highScore) {
			highScore = random[i];
		}
	}
	cout << "The highest number is " << highScore; //Output the highest number
}