#include <iostream>
#include <cmath> 

using namespace std;

int main(int argc, char** argv) {
	double x, Sx = 1, Yx;
	unsigned int n;
	unsigned long long factorial2i, factorialMax;
	
	cout << "Input x = ";
	cin >> x;
	cout << "Input n = ";
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		factorialMax = 2 * i;
		factorial2i = 1;
		
		for (int j = 1; j <= factorialMax; j++) {
			factorial2i *= j; 
		}
		
		Sx += pow(-1, i) * ((2 * pow(i, 2) + 1) / factorial2i) * pow(x, 2 * i);
	}
	
	Yx = (1 - pow(x, 2) / 2) * cos(x) - (x / 2) * sin(x);
	
	cout << "Output S(x) = " << Sx << endl;
	cout << "Output Y(x) = " << Yx << endl;
	
	return 0;
}
