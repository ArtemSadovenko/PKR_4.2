#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int search(string name) {
	fstream f(name);
	int k = 0;
	int max = 0;
	char c;
	while (!f.eof()) {
		f.get(c);
		if (c =='0' || c =='1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9') {
			k++;
		}
		else {
			k = 0;
		}
		if (k > max) {
			max = k;
		}
	}
	return max;
}

int main() {
	cout << "The longest line of figures in equal to " << search("t.txt") << endl;

	return 0;
}