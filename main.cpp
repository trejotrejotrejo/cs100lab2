#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::cout << "What is your name?" << std::endl;
  std::cout >> name;
  std::cout << "Hello " << name << "!" << std::endl;

  return 1;
}
