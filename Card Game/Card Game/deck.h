#ifndef deck_hpp
#define deck_hpp

#include "card.h"
#include <vector>
#include <iostream>

using namespace std;

class Deck
{
private:
	vector<Card*> cards;
public:
	Deck();
	~Deck();
	void shuffleDeck();
	void displayDeck() const;
	vector<Card*> drawHand(int number);
	static void showCard(vector<Card*> cards);
	friend ostream& operator<<(ostream& os, const Card& card);
};

#endif /* card_hpp */