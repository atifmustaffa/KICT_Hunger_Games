#include<iostream>

using namespace std;

int main() {
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (i != input-1)
				if (j == 0 || j == input-1)
					cout << "*";
				else
					cout << " ";
			else
				cout << "*";
		}
		cout << " ";
		for (int j = 0; j < input; j++) {
			if (i != 0)
				if (j == 0 || j == input-1)
					cout << "*";
				else
					cout << " ";
			else
				cout << "*";
		}
		if (i < input-1)
			cout << endl;
	}
	return 0;
}