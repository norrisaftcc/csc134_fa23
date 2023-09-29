#include <iostream>
using namespace std;
/*
CSC 134
M1T2 - Hello Student
norrisa
8/23/23
*/
int main() {
  cout << "Hello What's your name?" << endl;
  // ask the user's name
  string name;
  // this works even if your answer has spaces
  cin.ignore(); 
  getline(cin, name);
  // ez version is:
  // cin >> name;

  cout << "Nice to meet you, " << name << endl;
  // Now add a few lines of info about yourself
  // and have the person next to you test the program
  
  
}