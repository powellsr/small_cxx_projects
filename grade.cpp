#include <iostream>

int main() {

	int grade;
		//Prompt for grade (year in school) and variable definition
	std::cout << "Enter grade (year of high school): \n";

	std::cin >> grade;
		//Switch syntax, parenthetical variable
	switch(grade) {
		//List cases by variable value, "break" line prevents all from printing
		case 1 :
			std::cout << "Freshman\n";
			break;

		case 2 :
			std::cout << "Sophomore\n";
			break;

		case 3 :
			std::cout << "Junior\n";
			break;

		case 4 :
			std::cout << "Senior\n";
			break;
			//Default is the "else", catch-all category
		default :
			std::cout << "Victory Lap\n";
			break;

}




}
