#include <iostream>

class MathProcessor {
public:
   MathProcessor() {}

   // this function finds a sum of 3 numbers
   // 
   // - a - argument 1
   // - b - argument 2
   // - c - argument 3
   //
   // returns: sum of argument 1 and argument 2 and argument 3
   int sum(int a, int b, int c)
   {
      return a + b + c;
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
      << " is " << processor->sum(a, b, c) << std::endl;

   std::cout << "sub of " << a << " and " << b << " is " << processor->sub(a, b) << std::endl;

   delete processor;
   return 0;
}
