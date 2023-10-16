#include <iostream>
using namespace std;

/*
CSC 134
M4LAB1 - ASCII boxes
norrisa
10/16/23
*/

// The program will do the following:
// Ask the user for the dimensions of a box (width and height)
// but first...
// Draw a line width long in * characters
// draw a line height high in * characters
// This is two separate for loops
#include <iostream>
using namespace std;

// prompt: draw a line of "*" width variable wide
void drawHLine(int width) {
	for (int i = 0; i < width; i++) {
		cout << "*";
	}
  cout << endl; // finish the line
}

// prompt: draw a line of "*" height variable high
void drawVLine(int height) {
  for (int i = 0; i < height; i++) {
    cout << "*" << endl;
  }
}

int main() {
	int width;
  int height;
	cout << "Enter the width: ";
	cin >> width;
	
	drawHLine(width);

  cout << "Enter the height: ";
  cin >> height;

  drawVLine(height);

  // now draw a box width wide and height long
  // hint: nested loops
  for (int i = 0; i < height; i++) {
    // for every line in height, draw a line
    for (int j = 0; j < width; j++) {
      cout << "*";
    }
    cout << endl; // finish the line
  }
  
	
	return 0;
}


  