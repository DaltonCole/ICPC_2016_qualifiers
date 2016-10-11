#include <iostream>
#include <stack>
using namespace std;

int main() {

	string input;

	stack<char> brackets;

	bool bad_bracket = false;

	cin >> input;

	char par;
	char last_par;

	// Is possible
	bool possible = true;
	// Tells if there has been a bad segment or not, 0 for no bad segments, 1 for currently a bad segment, 2 for has been bad segment
	short bad_segment = 0;

	for(int i = 0; i < input.length(); i++) {
		par = input[i];

		// If size is 0
		if(brackets.size() == 0) {
			if(par == '(' && bad_segment == 0) {
				brackets.push(par);
			} else if(par == ')' && bad_segment == 1){
				brackets.push(par);
			} else if(par == )



			// If good bracket
			if(par == '(') {
				// Add bracket to stack
				brackets.push(par);
				// If previously, there was a bad segment, signal that there cannot be any more bad segments
				if(bad_segment == 1) {
					bad_segment = 2;
				}
			} else if(bad_segment != 2) { // If this is a bad segment, put a good segment on and signal bad sequence
				brackets.push('(')
				bad_segment == 1;
			} else {
				// If it has already been bad, break and say impossible
				possible = false;
				break;
			}
		} else {
			last_par = brackets.top()

			if(bad_segment == 0) {

			}
		}

	}

	// If stack is not empty, then impossible sequence
	if(stack.size != 0) {
		possible = false;
	}

	if(possible == true) {
		cout << "possible" << endl;
	} else {
		cout << "impossible" << endl;
	}

	return 0;
}
