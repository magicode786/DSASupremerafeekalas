#include <iostream>
using namespace std;
int main() {
  int patternsize = 9;
  int row = 1;
  for (row = 1; row <= patternsize; row++) {
    int space = patternsize - row;
    while (space > 0) {
      cout << " ";
      space = space - 1;
    }
    for (int col = 1; col <= row; col++) {
      cout << "*";
    }
    for (int col = 2; col <= row; col++) {
      cout << "*";
    }
    int space2 = patternsize;
    while (space2 > 0) {
      cout << " ";
      space2 = space2 - 1;
    }

    cout << endl;
  }
  for (row = patternsize-1; row >=0; row--) {
    int space = patternsize - row;
    while (space > 0) {
      cout << " ";
      space = space - 1;
    }
    for (int col = 1; col <= row; col++) {
      cout << "*";
    }
    for (int col = 2; col <= row; col++) {
      cout << "*";
    }
    int space2 = patternsize;
    while (space2 > 0) {
      cout << " ";
      space2 = space2 - 1;
    }

    cout << endl;
  }
}
