#include <iostream>
using namespace std;

/*void intro()
{
	cout << "start";
}*/


class mons {
	short level;
	int hitpoints;
	int maxhitpoints;
	string name;
	int defence;
	int attack;
};

struct location{
	int x;
	int y;
};

class player{
	int cash;
	mons pmons[5];
	location ploc;
};

player plays;