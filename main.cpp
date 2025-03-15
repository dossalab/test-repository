#include <iostream>

class MathProcessor {
public:
   MathProcessor() {}

   int formula(int a, int b, int c)
   {
      return 3 * a * b + c;
   }

   int sub(int a, int b)
   {
      // sub a and b
      return a - b;
   }
};

int main()
{
   MathProcessor *processor = new MathProcessor();

   int a = 10, b = 12, c = 1;

   std::cout << "hello world!" << std::endl;

   std::cout << "sum of " << a << " and " << b << " and " << c
      << " is " << processor->formula(a, b, c) << std::endl;

   std::cout << "sub of " << a << " and " << b << " is " << processor->sub(a, b) << std::endl;

   delete processor;
   return 0;
}
