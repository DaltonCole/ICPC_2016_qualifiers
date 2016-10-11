#include <iostream>
#include <vector>

using namespace std;

int main() {
	int H;
	int B;
	vector<int> hotdogs;
	vector<int> buns;
	int temp;

	cin >> H;

	for(int i = 0; i < H; i++) {
		cin >> temp;
		hotdogs.push_back(temp);
	}

	for(int i = 0; i < B; i++) {
		cin >> temp;
		buns.push_back(temp);
	}

	


	return 0;
}