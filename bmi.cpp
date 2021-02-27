#include <iostream>
#include <cmath>
int main() {


	double height;

	double weight;

	double bmi;
	// Prompt for height

	std::cout << "Enter your height (m): ";


	std::cin >> height;

	// Prompt for weight

	std::cout << "Enter your weight (kg): ";

	std::cin >> weight;

	//BMI Calculatios and output

	bmi = (weight / pow(height, 2));




	std::cout << "Your BMI is " << bmi << " (kg / m^2).\n"; 

return 0;

}
