#include "card.h"
#include <iostream>

using namespace std;

Card::Card(int value, Suit suit) {
	value = m_value;
	suit = m_suit;
}

string Card::convertSuit(Suit suit) {
	switch (suit) {
	case Suit::Hearts:
		return "Hearts";
	case Suit::Diamonds:
		return "Diamonds";
	case Suit::Clubs:
		return "Clubs";
	case Suit::Spades:
		return "Spades";
	}
}

string Card::convertValue(int value) {
	switch (value)
	{
	case 1:
		return "Ace";
	case 2:
		return "Two";
	case 3:
		return "Three";
	case 4:
		return "Four";
	case 5:
		return "Five";
	case 6:
		return "Six";
	case 7:
		return "Seven";
	case 8:
		return "Eight";
	case 9:
		return "Nine";
	case 10:
		return "Ten";
	case 11:
		return "Jack";
	case 12:
		return "Queen";
	case 13:
		return "King";
	}
}

string Card::getValue() {
	return convertValue(this->m_value);
}

string Card::getSuit() {
	return convertSuit(this->m_suit);
}
