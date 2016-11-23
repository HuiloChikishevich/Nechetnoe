#include <iostream>

using namespace std;

void delete_duplicates(int* Array, int sin) {
    int tmp = 0;
	for (int i = 0; i < sin; i++) {
		for (int j = i + 1; j < sin; j++) {
			 if (Array[i] == Array[j] & Array[i]%j) {
				tmp++;
            }
        }
		if (!tmp){
                cout << Array[i] << endl;
			}
			else
                tmp = 0;
	}
}

int main() {
	int sin;
	cin >> sin;
	int* Array = new int (sin);
	for (int i = 0; i < sin;i++){
		cin >> Array[i];
	}
	delete_duplicates(Array,sin);
    return 0;
}
