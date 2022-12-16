#include "deck.h"
#include <iostream>

using namespace std;

int runGame();

int main() {
	Deck* deck = new Deck();
	int input = runGame();

	while (input != 5) {
		switch (input) {
		case 1:
			delete deck;
			deck = new Deck();
			cout << "New Deck created\n" << endl;
			break;
		case 2:
			deck->shuffleDeck();
			cout << "Deck shuffled" << endl;
			cout << "This is your new deck:" << endl;
			//deck->displayDeck();
			break;
		case 3:
			cout << "This is your deck:" << endl;
			//deck->displayDeck();
			break;
		case 4:
			int number;
			cout << "Please enter the number of cards you would like to have in the hand: ";
			cin >> number;
			cout << "Hand:";
			deck->showCard(deck->drawHand(number));
			break;
		}
		input = runGame();
	}

	delete deck;
	deck = nullptr;
	cout << "Thanks for playing this card game!" << endl;
}

int runGame() {
	int input;
	cout << " Welcome to the Card Game" << endl;
	cout << " The game options include: " << endl <<
		" 1) Create a new deck of cards" << endl <<
		" 2) Shuffle the cards" << endl <<
		" 3) Display the entire deck" << endl <<
		" 4) Deal a hand of N number cards" << endl <<
		" 5) Exit the Game" << endl;
	cout << "Please enter a number: ";
	cin >> input;
	while (input < 0 || input > 5){
		cout << "Invalid Option. Please enter an option shown above: ";
		cin >> input;
	}
	return input;
}