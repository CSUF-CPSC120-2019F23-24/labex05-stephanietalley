// Random Rectangle
#include <iostream>
#include <ctime>

int main()
{

//Defined the max possible length of the rectangle as being 40
  const int MAX_LENGTH = 40;
  std::string eq;
  
//Assigns the random numbers
  unsigned seed = time (0);
  srand (seed);

//Set equation to finding a random number for the rectangle's length
  int num = rand() % MAX_LENGTH + 1;
  eq.assign (num, '#');

  std::cout << eq << std::endl;
  std::cout << eq << std::endl;
  std::cout << eq << std::endl;

  return 0;
}
