#include <iostream>

int main () {

	double tempf;

	double tempc;

	// User prompt

	std::cout << "Enter the temperature in Farenheit: \n";

	std::cin >> tempf;

	tempc = (tempf - 32) / 1.8;

	std::cout << "The temp is " << tempc << " degrees Celsius.\n";

}
