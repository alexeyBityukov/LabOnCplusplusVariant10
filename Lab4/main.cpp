#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void showArrayElement(int element, string arrayName, bool isFirst, bool isLast) {
	if (isFirst) {
		cout << arrayName << " = [" << endl << "  " << element << "," << endl;		
	} else if(isLast) {
		cout << "  " << element << endl << "];" << endl; 
	} else {
		cout << "  " << element << ", " << endl;
	}
}

int main(int argc, char** argv) {
	const int dataLength = 20;
	int dataSum = 0, numberOfEvenNumbers = 0; 
	double dataAverage, halfDataAverage;
	int data[dataLength];
	
	for (int i = 0; i < dataLength; i++) {
		data[i] = rand() % 1001;
		
		if (data[i] % 2 == 0) {
			dataSum += data[i];
			numberOfEvenNumbers++;
		}
		
		showArrayElement(
			data[i],
			"Input Array",
			i == 0,
			i == dataLength - 1
		);
		
		if(i == dataLength - 1 && dataSum == 0) {
			i--;
		}
	}
	
	dataAverage = dataSum / numberOfEvenNumbers;
	halfDataAverage = dataAverage / 2;
	
	for (int i = 0; i < dataLength; i++) {
		if(abs(dataAverage - data[i]) > halfDataAverage) {
			data[i] = 0;
		}
		
		showArrayElement(
			data[i],
			"Output Array",
			i == 0,
			i == dataLength - 1
		);
	}
	
	return 0;
}
