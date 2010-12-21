#include <iostream>
//#include "intro.h"
#include <fstream>
using namespace std;

void intro();

void start(){
	
bool save1 = false;
  bool save2 = false;
  bool save3 = false;
  bool save4 = false;
  bool nosaves = true;
  string choice;
  
  ifstream file1 ("~/.achavela/save1.vlm", ios::in|ios::binary|ios::ate);
  if (file1.is_open())
  {
	save1 = true;
	file1.close();
  }
  
  ifstream file2 ("~/.achavela/save1.vlm", ios::in|ios::binary|ios::ate);
  if (file2.is_open())
  {
	save2 = true;
	file2.close();
  }

  ifstream file3 ("~/.achavela/save1.vlm", ios::in|ios::binary|ios::ate);
  if (file3.is_open())
  {
	save3 = true;
	file3.close();
  }
  
  ifstream file4 ("~/.achavela/save1.vlm", ios::in|ios::binary|ios::ate);
  if (file4.is_open())
  {
	save4 = true;
	file4.close();
  }
  
  
  
  if (save1 == true ||save2==true||save3==true||save4==true)
  {
	  short option = 1;
	  nosaves = false;
	  cout << "You have saved files. Would you like to continue, or start a new game?\n\n";
	  if (save1==true) 
	  {cout << option << ".Continue from Save 1\n";
	  short saves1 = option;
	  option++;}
	  if (save2==true) 
	  {cout << option << ".Continue from Save 2\n";short saves2 = option;option++;}
	  if (save3==true) {cout << option << ".Continue from Save 3\n";short saves3 = option;option++;}
	  if (save4==true) {cout << option << ".Continue from Save 4\n";short saves4 = option;option++;}
	  cout << option << ".Start a new game\n";
	  cin >> choice;
  }
  else
  {
	cout << "It looks as though you have no saved games. A new one will be started for you automatically.\n";
	  }
  
  if (nosaves = false || choice =="new"||"new game"||"n"||"N")
  {
	  intro();
  }
  
}
