#include <iostream>
#include <cmath>

using namespace std;

int getSumOfDigitsSquared(int number) {
	int modulo = number, sumOfDigits = 0;
	
	while (modulo > 0) {
		sumOfDigits += modulo % 10;
		modulo /= 10;
	}
	
	return pow(sumOfDigits, 2);
}

int main(int argc, char** argv) {
	int n, m, sumOfDigitsSquared;
	
	cout << "Input n = ";
	cin >> n;
	cout << "Input m = ";
	cin >> m;
	
	for (int i = 0; i < n; i++) {
		sumOfDigitsSquared = getSumOfDigitsSquared(i);
		
		if (sumOfDigitsSquared == m) {
			cout << "Qutput " << i << endl;
		}
	}
	
	return 0;
}
