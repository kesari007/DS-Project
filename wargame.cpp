#include <iostream>
using namespace std;

#include <string>
#include <algorithm>

#include <io.h>
#include <fcntl.h>

#include <ctime>;
#include <stdlib.h>


#define CARD_H

class Card {
public:
	// create a “blank” card
	Card();

	// constructor to create a card, setting the suit and rank
	Card(int suit, int rank);

	// set an existing card to a particular value
	void setCard(int suit, int rank);

	// return the point value of the card. Ace = 1, 2 thru 10, face cards can be 11, 12,
	int getValue();

	// display the card
	void display();

private:
	int rank;
	int suit;

};
Card::Card()
{
	rank;
	suit;
}

// constructor to create a card, setting the suit and rank
Card::Card(int s, int r)
{
	rank = r;
	suit = s;
}

// set an existing card to a particular value
void Card::setCard(int s, int r)
{
	rank = r;
	suit = s;
}

// return the point value of the card. Ace = 1, 2 thru 10, face cards can be 11, 12,
int Card::getValue()
{
	return rank;
}

// display the card
void Card::display()
{
	string displayString;
	displayString.append("   ");

	string displayDesign;

	switch (rank) {
	case 11: displayString.append("Jack");
		break;
	case 12: displayString.append("Queen");
		break;
	case 13: displayString.append("King");
		break;
	case 1: displayString.append("Ace");
		break;
	default: {cout<<rank;
	displayString.append("");}
		break;
	}

	displayString.append(" of ");

	switch (suit) {
	case 0: displayString.append("Spades");
		switch (rank) {
		case 10:
			displayDesign.append("\n -------\n[10     ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[    10]\n -------\n");
			break;
		case 11:
			displayDesign.append("\n -------\n[J      ]\n[   *   ]\n[  * *  ]\n[ ***** ]\n[*  *  *]\n[   *   ]\n[      J]\n -------\n");
			break;
		case 12:
			displayDesign.append("\n -------\n[Q      ]\n[   *   ]\n[  * *  ]\n[ ***** ]\n[*  *  *]\n[   *   ]\n[      Q]\n -------\n");
			break;
		case 13:
			displayDesign.append("\n -------\n[K      ]\n[   *   ]\n[  * *  ]\n[ ***** ]\n[*  *  *]\n[   *   ]\n[      K]\n -------\n");
			break;
		case 1:
			displayDesign.append("\n -------\n[A      ]\n[   *   ]\n[  * *  ]\n[ ***** ]\n[*  *  *]\n[   *   ]\n[      A]\n -------\n");
			break;
		default:
			displayDesign.append("\n -------\n["  "      ]\n[   *   ]\n[  * *  ]\n[ ***** ]\n[*  *  *]\n[   *   ]\n[      "  "]\n -------\n");
			break;
		}
		break;

	case 1: displayString.append("Hearts");
		switch (rank) {
		case 10: displayDesign.append("\n -------\n["  "     ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[     "  "]\n -------\n");
			break;
		case 11: displayDesign.append("\n -------\n[J      ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      J]\n -------\n");
			break;
		case 12: displayDesign.append("\n -------\n[Q      ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      Q]\n -------\n");
			break;
		case 13: displayDesign.append("\n -------\n[K      ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      K]\n -------\n");
			break;
		case 1: displayDesign.append("\n -------\n[A      ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      A]\n -------\n");
			break;
		default: displayDesign.append("\n -------\n[" "      ]\n[ ** ** ]\n[*  *  *]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      "  "]\n -------\n");
			break;
		}
		break;
	case 2: displayString.append("Diamonds");
		switch (rank) {
		case 10:
			displayDesign.append("\n -------\n[10     ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[     10]\n -------\n");
			break;
		case 11:
			displayDesign.append("\n -------\n[J      ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      J]\n -------\n");
			break;
		case 12:
			displayDesign.append("\n -------\n[Q      ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      Q]\n -------\n");
			break;
		case 13:
			displayDesign.append("\n -------\n[K      ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      K]\n -------\n");
			break;
		case 1:
			displayDesign.append("\n -------\n[A      ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      A]\n -------\n");
			break;
		default:
			displayDesign.append("\n -------\n["  "      ]\n[   *   ]\n[  * *  ]\n[ *   * ]\n[  * *  ]\n[   *   ]\n[      " "]\n -------\n");
			break;
		}
		break;
	case 3: displayString.append("Clubs");
		switch (rank) {
		case 10:
			displayDesign.append("\n -------\n[10     ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   * 10]\n -------\n");
			break;
		case 11:
			displayDesign.append("\n -------\n[J      ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   *  J]\n -------\n");
			break;
		case 12:
			displayDesign.append("\n -------\n[Q      ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   *  Q]\n -------\n");
			break;
		case 13:
			displayDesign.append("\n -------\n[K      ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   *  K]\n -------\n");
			break;
		case 1:
			displayDesign.append("\n -------\n[A      ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   *  A]\n -------\n");
			break;
		default:
			displayDesign.append("\n -------\n["  "      ]\n[   *   ]\n[*  *  *]\n[  ***  ]\n[   *   ]\n[   *   ]\n[   *  "  "]\n -------\n");
			break;
		}
		break;
	}

	cout << displayString
		<< displayDesign << endl;



}


class Deck {

public:
	// constructor which creates a deck of 52 cards
	Deck();

	// deal a card to player
	Card deal();

	// shuffle the cards in the deck
	void shuffle();

	//Count the cards left in the deck
	int cardsLeft();

	//show the deck;
	void displayDeck();

	//	 //
	///*	 void reinitialize();*/

private:
	Card storage[52];
	int size;

};
Deck::Deck()
{
	size = 52;
	int counter = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j < 14; j++) {
			storage[counter].setCard(i, j);
			counter++;
		}
	}
}

//deal a card
Card Deck::deal()
{
	size--;
	//storage[size].getValue();
	Card card1 = storage[size];
	return card1;
}


// shuffle the cards in the deck
void Deck::shuffle()
{
	srand(time(0));
	int a, b;

	for (int i = 0; i < size; i++) {
		a = rand() % size;
		b = rand() % size;

		Card c1 = storage[a];
		storage[a] = storage[b];
		storage[b] = c1;
	}

}

//Count the cards left in the deck
int Deck::cardsLeft()
{
	return size;
}

//show the deck;
void Deck::displayDeck()
{
	for (int i = 0; i < size; i++) {
		storage[i].display();
	}
}
void game(Deck deck1) {

	cout << "Get ready to play WAR!!!" << endl;
	bool wannaPlay = true;
	while (wannaPlay) {

		cout << "There are " << deck1.cardsLeft() << " card in the deck." << endl;
		cout << "...dealing..." << endl;
		cout << "One for you..." << endl;
		Card player1 = deck1.deal();
		player1.display();
		cout << "One for me..." << endl;
		Card player2 = deck1.deal();
		player2.display();

		if (player1.getValue() > player2.getValue()) {
			cout << "You Win!!!" << endl;
		}
		else if (player1.getValue() < player2.getValue()) {
			cout << "I Win!!!" << endl;
		}
		else {
			cout << "It's a Tie!!!" << endl;
		}

		cout << endl << "Wanna play again? (yes/no)" << endl;
		string choice;
		cin >> choice;
		transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

		string aa = "yes";
		string bb = "no";

		if (choice == aa) {
			wannaPlay = true;
			if (deck1.cardsLeft() == 0) {
				cout << "Game Over!!!" << endl
					<< "Goodbye" << endl;
				wannaPlay = false;
			}
		}
		else if (choice == bb) {
			wannaPlay = false;
			cout << endl << "Goodbye" << endl;
		}
		else if (choice != aa || choice != bb) {
			cout << "Invalid input" << endl;
			bool invalid = true;
			while (invalid) {
				cin >> choice;
				if (choice == aa) {
					invalid = false;
				}
				else if (choice == bb) {
					invalid = false;
					wannaPlay = false;
					cout << "Goodbye" << endl;
				}
			}
		}

	}
};//end game emthod

//menu method for display
void menu() {
	cout << "1)	Get a new card deck" << endl;
	cout << "2)	Show all remaining cards in the deck" << endl;
	cout << "3)	Shuffle" << endl;
	cout << "4)	Play WAR!" << endl;
	cout << "5)	Exit\n" << endl;
};//end menu method

//main class
int main() {

	int userChoice;
	bool wChoice = true;
	Deck deck1;

	while (wChoice) {
		menu();
		cin >> userChoice;

		switch (userChoice) {
		case 1:
			cout << "New card deck created" << endl;
			break;
		case 2:
			deck1.displayDeck();
			break;
		case 3:
			deck1.shuffle();
			deck1.displayDeck();
			break;
		case 4:
			game(deck1);
			break;
		case 5:
			cout << "Goodbye" << endl;
			wChoice = false;
			break;
		}
	}

	system("PAUSE");
	return 0;
}//end main
