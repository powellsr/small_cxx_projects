#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  //While loop, parenthetical condition. 
  
  while (i <= 9) {
    
    square = (i * i);
    
    std::cout << i << "	" << square << "\n";
   
//Below is notation for incremental steps, adds one to variable i for each execution.
 	i++;
  }
  
}
