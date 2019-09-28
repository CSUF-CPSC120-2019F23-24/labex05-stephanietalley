// examples of overflow/underflow

#include <iostream>
#include <iomanip>

int main()
{
  std::cout << "Overflow/Underflow" << std::endl;
  std::cout << std::fixed << std::setprecision(80);

  float f2 = 3.1111111E-38;
  double d2 = f2;

  std::cout << "\nInitially the double and the float are the same value." << std::endl;
  std::cout << "Notice how neither one is exactly the value we set it to." << std::endl;
  std::cout << "This is because floating-point values are not exact." << std::endl;
  std::cout << sizeof(d2) << " bytes, value: " << d2 << std::endl;
  std::cout << sizeof(f2) << " bytes, value: " << f2 << std::endl;

  d2 *= 0.00001;
  f2 *= 0.00001;

  std::cout << "\nThey start to drift apart the closer they get to 0." << std::endl;
  std::cout << sizeof(d2) << " bytes, value: " << d2 << std::endl;
  std::cout << sizeof(f2) << " bytes, value: " << f2 << std::endl;

  d2 *= 0.01;
  f2 *= 0.01;

  // TODO#1 add comment describing what's happening
  /* By continuously checking the sizes of the two values as the value of the
  8-byte is retained due to the double having a more precise value than that
  of the floating-point.*/
  std::cout << "\nThe 8 byte manage to keep its value, however the 4 byte" << std::endl;
  std::cout << "became slightly off and thus lost its precision." << std::endl;
  std::cout << sizeof(d2) << " bytes, value: " << d2 << std::endl;
  std::cout << sizeof(f2) << " bytes, value: " << f2 << std::endl;

  d2 *= 0.1;
  f2 *= 0.1;

  // TODO#2 add comment describing what's happening
  /* Despite being set to the same exact value, the value set as a floating-point
  could no longer retain it's original value, thus leaving the double to have
  more precision*/
  std::cout << "\nThe 8 byte was still able to maintain its value, however the" << std::endl;
  std::cout << "4 byte could no longer maintain the precision of the value." << std::endl;
  std::cout << sizeof(d2) << " bytes, value: " << d2 << std::endl;
  std::cout << sizeof(f2) << " bytes, value: " << f2 << std::endl;

  double d3 = 3.5E38;
  float f3 = 3.5E38;

  // TODO#3 add comment describing what happened
  /* The floating-point, being much too large at this point, goes on to infinity with
  no end value, resulting in an error message, whereas the 8-byte value set to double
  retained it's original value*/
  std::cout << "\nThe value for the 4 byte was much too large that it resulted" << std::endl;
  std::cout << "in an error of infinite." << std::endl;
  std::cout << std::setprecision(1);
  std::cout << sizeof(d3) << " bytes, value: " << d3 << std::endl;
  std::cout << sizeof(f2) << " bytes, value: " << f3 << std::endl;

  return 0;
}
