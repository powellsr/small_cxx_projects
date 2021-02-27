#include <iostream>

int main() {
  
  double weight;
  
  std::cout << "Enter your weight on Earth (lbs): \n";
  
  std::cin >> weight;
    
  std::cout << "Which planet do you want your weight on?\n 1. Venus \n 2. Mars \n 3. Jupiter \n 4. Saturn \n 5. Uranus \n 6. Neptune \n"; 
  
  std::string planet;
  
  std::cin >> planet;
  
  switch(planet) {
      
    case 1 :
      double venus_weight;
	venus_weight = 0.78 * weight;
      std::cout << "Your weight on Venus is " << venus_weight << " pounds.\n";
      break;
      
    case 2 :
      double mars_weight;
	mars_weight = 0.39 * weight;
      std::cout << "Your weight on Mars is " << mars_weight << " pounds.\n";
      break;
      
    case 3 :
      double jupiter_weight;
	jupiter_weight = 2.65 * weight;
      std::cout << "Your weight on Jupiter is " << jupiter_weight << " pounds.\n";
      break;
      
    case 4 :
      double saturn_weight;
	saturn_weight = 1.17 * weight;
      std::cout << "Your weight on Saturn is " << saturn_weight << " pounds.\n";
      break;
      
    case 5 :
      double uranus_weight;
	uranus_weight = 1.05 * weight;
      std::cout << "Your weight on Uranus is " << uranus_weight << " pounds.\n";
      break;

	case 6 :
    	double neptune_weight;
	neptune_weight = 1.23 * weight;
      std::cout << "Your weight on neptune is " << neptune_weight << " pounds.\n";
      break;
      
    default :
      std::cout << "Invalid entry. Please enter a different planet name, no capitalization.";
        break;
      }
  
  
  
  

  
  
  
  

}
