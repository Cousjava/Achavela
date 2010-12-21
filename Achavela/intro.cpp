#include <iostream>
#include "intro.h"
using namespace std;

extern player plays;
bool fight(mons,mons);

void intro()
{
	string choice;
	//This text can be changed later, this is just the my thoughts on the start.
	//I know this is poor flaour text, but it'll do for now.
	//The engine is the most important part.
	cout << "\n\tYou wake up. It's your birthday! You go downstairs and there's your cousin, Jayden.";
	cout << "\n\"Happy birthday!\" s/he says. \"I've asked your mum, and she says we can go to the great city of Acha today!\""
	 << "\n\tHappily, you set out. You catch the bus and set off, traveling along the road."
	  << "You travel along pass farmland, passing through other villages along the way.";
	cout << "\n\tAs you pass through a wood, the entire bus is shaken violently, as if by an explosion" 
	<< "Jayden slumps unconcious, "/*Yes, I know I've spelt it wrong */<< "and many of the other "
	<< "passengers are in a similar condition. Outside the bus, some strange creatues appear, "
	<< "the likes of which you've never seen before. Two of the few remaming passengers faint at the sight"
	<< ", but one of them appears to be highly intrested in the creature. After a moment, he realises that he is danger."
	<< "He looks around the bus, and picks on you.";
	cout << "\n\t\"I can fight these off,\" he says. \"But I need help."
	<< "I have several tame mons, that will fight them off, but I can only manage one at a time."
	<< "You can use one to help me fight."
	<< "I have four here: a SERPENTSYTH, a DOMEFELIX, a CLAWTOATO and a FRIDGEFISH."
	<< "Which one would you like?\n";
	cin >> choice;
	plays.pmons[0].name = choice;
	mons enemy;
	enemy.name = "tree";
	fight(plays.pmons[0], enemy);
}
