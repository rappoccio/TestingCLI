#include <iostream>

int main(int argc, char ** argv)
{
  for ( unsigned int i = 0; i < argc; ++i ) {
    std::cout << argv[i] << std::endl;
  }
  std::cout << "j : " << std::endl;
  std::string j;
  std::cin >> j; 
  std::cout << j << std::endl;
  std::cout << "Bye, Felica" << std::endl;
}
