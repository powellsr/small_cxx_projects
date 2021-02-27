#include <iostream>

int main() {

  // For loop, "i--" is a downward count, start at 99, as long as i conditon met, counting downward 
  
  for (int i = 99; i >= 0; i--) {
    
    std::cout << i << " bottles of pop on the wall.\nTake one down and pass it around.\n" << i - 1 << " bottles of pop on the wall.\n\n";
  
	}

}
