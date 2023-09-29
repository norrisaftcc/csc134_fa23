#include <iostream>
using namespace std;
/*
CSC 134
M3T3 - Simple Menu
Norrisa
9/25/23

Setup for Homework menu
*/

// First, the list of functions.
// (Declare)
void Question1();
void Question2();
void Question3();

// Second, main
int main() {
  
  // for now, just call all 3
  //Question1();
  //Question2();
  //Question3();
  cout << "Main Menu" << endl;
  cout << "1. Question 1." << endl;
  cout << "2. Question 2." << endl;
  cout << "3. Question 3." << endl;
  cout << "Your choice? ";

  int choice;
  cin >> choice;
  cout << "You chose: " << choice << endl;
  // now branch on the choice
  if (1 == choice) {
    Question1();
  }
  else if (2 == choice) {
    Question2();
  }
  else if (3 == choice) {
    Question3();
  }
  else {
    cout << "Sorry, that is not a valid choice." << endl;
    
  }
  return 0; // end of main()
}

// Third, the full functions
// (Define)
void Question1() {
  cout << "Question 1" << endl;
}

void Question2() {
  cout << "Question 2" << endl;
}

void Question3() {
  cout << "Question 3" << endl;
}