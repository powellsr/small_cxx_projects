#include <iostream>

int main() {
  
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize the_amazing_random_number
	// " % 43" indicates all random numbers will be between 0 and 42.  
  int the_amazing_random_number = rand() % 43;
  
  std::cout << "The Amazing Random Number is ... " << the_amazing_random_number << "\n";
}
