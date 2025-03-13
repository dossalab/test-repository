#include <iostream>

int sum(int a, int b)
{
   return a + b;
}

int sub(int a, int b)
{
   return a - b;
}

int main()
{
   int a = 10, b = 12;

   std::cout << "hello world!" << std::endl;
   std::cout << "sum of " << a << " and " << b << " is " << sum(a, b) << std::endl;
   std::cout << "sub of " << a << " and " << b << " is " << sub(a, b) << std::endl;

   return 0;
}
