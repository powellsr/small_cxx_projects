#include <iostream>
#include <vector>

int main() {
  
  int even_sum = 0;
  int odd_product = 1;
  
  std::vector<int> vector = {2, 4, 3, 6, 1, 9};
  
  for (int i = 0; i < vector.size(); i++) {
    
    if (vector[i] % 2 == 0) {
      
      even_sum = even_sum + vector[i];
      
    } else { 
    
    	odd_product = odd_product * vector[i]; 
  }
  }
  
  std::cout << "Sum of even: " << even_sum << "\n";
  std::cout << "Product of odd: " << odd_product << "\n";
  
}
  
