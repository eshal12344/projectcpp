#include<iostream>
using namespace std;
int reverseDigits(int number) {
	int reversednumber = 0;
	while (number != 0) {
		int digit = number % 10;
		reversednumber = reversednumber * 10 + digit;
		number /= 10;

	}
	return reversednumber;
}
int main() {
	int originalnumber = 7631;
	int reversednumber = reverseDigits(originalnumber);
	cout << "the orifinal number" << originalnumber << endl;
	cout << "the reversed number" << reversednumber;
	return 0;
}