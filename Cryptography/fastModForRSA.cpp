// Computing modulation in logn time.
// Written by: Yinglue Chen

#include <iostream>

using namespace std;

int fastMod(int x, int y, int p) {
	int res = 1;
	
	// Shorten the computing time if x >= p.
	x = x % p;
	
	while (y > 0) {
		// If y is an odd number.
		// Multiply with x to make it as an even number.
		if (y & 1) {
			res = (res * x) % p;
		}
		
		// Now y is an even number.
		y = y >> 1;
		x = (x * x) % p;
	}
	
	return res;
}

int main() {
	int x, y, p;
	
	cout << "This is a function for computing (x ^ y) % p." << endl;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	cout << "Input p: ";
	cin >> p;
	
	cout << endl;
	
	cout << "The result of (" << x << " ^ " << y << ") % " << p << " is: " << fastMod(x, y, p) << endl;
}
