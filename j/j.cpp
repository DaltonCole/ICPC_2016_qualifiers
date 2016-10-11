#include <iostream>
using namespace std;

int main() {
	int inputs = 0;

	cin >> inputs;

	string number = "";

	for(int i = 0; i < inputs; i++) {
		cin >> number;

		cout << number.length() << endl;
	}

	return 0;
}