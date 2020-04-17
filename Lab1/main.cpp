#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	double x, q, Fx, condition, result;
	
	cout << "Input x = ";
	cin >> x;
	cout << "Input q = ";
	cin >> q;
	
	Fx = pow(M_E, x);
	condition = abs(x*q);
	
	if (condition > 10) {
		result = log(abs(Fx) + abs(q));
	} else if (condition < 10) {
		result = pow(M_E, Fx + q);
	} else {
		result = Fx + q;
	}
	
	cout << "Output result = " << result;
	
	return 0;
}
