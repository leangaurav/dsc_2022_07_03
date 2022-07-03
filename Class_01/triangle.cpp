#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 5; i++) { // how many rows/lines
	    for (int j = 0; j < 5-i; j++) { // symbols in a line/row
	        cout << "*";
	    }
	    cout << endl;
	}

	cout << endl;

	int count = 1;
	for (int i = 0; i < 5; i++) { // how many rows/lines
	    for (int j = 0; j <= i; j++) { // symbols in a line/row
	        cout << count << " ";
	        count += 1;
	    }
	    cout << endl;
	}
}