#include <iostream>

#if 0
int main(int argc, char* argv[])
{
  std::cout << "Hello, World!" << std::endl;
}
#endif

void printHello(const int num)
{
  for(int i = 0; i < num; ++i) {
    std::cout << "Hello," << std::endl;
    }
}
