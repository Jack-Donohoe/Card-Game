#ifndef card_hpp
#define card_hpp

#include <iostream>

using namespace std;

class Card
{
public:
	enum Suit { Hearts, Diamonds, Clubs, Spades };
	Card(int value, Suit suit);
	string convertSuit(Suit suit);
	string convertValue(int value);
	string getValue();
	string getSuit();
private:
	int m_value = 0;
	Suit m_suit = Hearts;
};

#endif /* card_hpp */