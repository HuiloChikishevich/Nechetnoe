#include <iostream>

using namespace std;

int strange_multiply(int &x, int &y) {
	int z = y;
	for (int i = 1; i < x; i++) {
		y = y + z;
	}
	return x, y;
}

int main() {
	int x, y;
	cin >> x >> y;
	strange_multiply(x, y);
	cout << y << endl;
	return 0;
}
