#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

#define V 100

void print(int map[][100], int size) {
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}

struct path {
	int length;
	int stuff;

	path() {length = 0; stuff = 0;}
};

bool contains(vector<int> path, int point) {
	return find(path.begin(), path.end(), point) != path.end();
}


int main() {
	int size;

	int map[100][100];

	int junk[100];

	int paths;
	int a,b,d;

	path last_path;
	path current_path;

	vector<int> path;

	int path_length = 0;

	cin >> size;

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			map[i][j] = 0;
		}
		cin >> junk[i];
	}

	cin >> paths;

	for(int i = 0; i < paths; i++) {
		cin >> a >> b >> d;
		a--;
		b--;
		map[a][b] = d;
		map[b][a] = d;
	}

	

	return 0;
}

int bfs(map & [][100], int size, int & junk[], int max) {
	queue<int> 
}

int next(map & [][100], int point, int size, int junk) {

}