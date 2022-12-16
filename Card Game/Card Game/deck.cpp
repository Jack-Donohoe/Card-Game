#include "deck.h"
#include <iostream>
#include <random>


using namespace std;

Deck::Deck() {
	for (int i = 0; i < 4; i++) {
		const auto suit = static_cast<Card::Suit>(i);
		for (int j = 1; j <= 13; j++) {
			auto card = new Card(j, suit);
			cards.push_back(card);
		}
	}
}

Deck::~Deck() {
	for (int i = 0; i < cards.size(); i++) {
		delete cards[i];
	}
}

ostream& operator<<(ostream& os, Card& card) {
	os << card.getValue() << " of " << card.getSuit();
	return os;
}

void Deck::shuffleDeck()
{
	srand(static_cast<unsigned int>(time(0)));
	int randomNum = rand();
	shuffle(cards.begin(), cards.end(), randomNum);
}

void Deck::showCard(vector <Card*> cards) {
	for (int i = 0; i < cards.size(); i++) {
		cout << *cards[i] << endl;
	}
}

void Deck::displayDeck() const{
	showCard(cards);
}

vector<Card*> Deck::drawHand(int number)
{
	vector<Card*> hand;
	for (int i = 0; i < number; i++) {
		hand.push_back(cards.front());
		cards.pop_back();
	}
	return hand;
}