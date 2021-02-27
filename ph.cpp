#include <iostream>

int main() {
		// Define variable
	double ph;
		// Prompt for pH
	std::cout << "Enter pH: \n";
		// Input ph variable
	std::cin >> ph;
		// If statement
	if (ph < 7.00) {

	std::cout << "Acidic\n";

	}
		// Else if is optional, only if desire multiple conditions
	else if (ph > 7.00) {

	std::cout << "Basic\n";

	}


	//	Can have any number of "else if" statements.

		//Treated neutral as else, could also do an equivalency (==)
	else {

	std::cout << "Neutral\n";

	}










}



