#include <iostream>
using namespace std;

/*
CSC 134
M3LAB3
norrisa
9/27

Given a number grade 0-100, give the letter grade

*/

int main() {
  // use constants for the 10 point scale
  const int A_GRADE = 90; // or higher
  const int B_GRADE = 80;
  const int C_GRADE = 70;
  const int D_GRADE = 60;
  
  cout << "Number Grade to Letter Grade" << endl;
  // get the number grade
  int num_grade = 0;
  string letter_grade = "NO GRADE";

  cout << "What is the number grade: ";
  cin >> num_grade;

  // convert it to a letter
  if (num_grade >= A_GRADE) {
    letter_grade = "A";
  }
  else if (num_grade >= B_GRADE) {
    letter_grade = "B";
  }
  else if (num_grade >= C_GRADE) {
    letter_grade = "C";
  }
  else if (num_grade >= D_GRADE) {
    letter_grade = "D";
  }
  // if not set, it's "F"
  else {
    letter_grade = "F";
  }
  // print the result
  cout << "A grade of " << num_grade;
  cout << " is " << letter_grade << endl;
}