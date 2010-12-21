#include <iostream>
//#include "intro.h"

using namespace std;

struct location{
	int x;
	int y;
};

struct map {
	location loc;
	string locname;
	short monlev;
	short monchance;	
};

