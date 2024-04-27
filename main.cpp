#include <iostream>

using namespace std;

int main() {
	int num;
	
	cin >> num;

	if (num < 0) {
		cout << "Number is smaler then zero" << endl;
	}
	else if (num > 0) {
		cout << "Number is bigger then zero" << endl;
	}
	else {
		cout << "Number is             zero" << endl;
	}
}