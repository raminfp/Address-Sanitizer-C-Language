#include <iostream>


using namespace std;

class Base {}; // Parent Class


class Execute: public Base {   // Child of Base Class


public:

  virtual void exec(const char *program)
  {
    system(program);
  }

};

class Greeter: public Base {   // Child of Base Class

public:

  virtual void sayHi(const char *str)
  {
    cout << str << endl;
  }

};

int main() {
  Base *b1 = new Greeter();
  Base *b2 = new Execute();
  Greeter *g;

  g = static_cast<Greeter*>(b1); // Safe Casting to the same type "Greeter"
  g->sayHi("Greeter says hi!"); // String passed to sayHi() function
  g = static_cast<Greeter*>(b2); // Unsafe Casting to sibling class "Execute"
  g->sayHi("/usr/bin/xcalc"); // String passed to exec() function 
                                    // which will turn into a command to execute calculator
  delete b1;
  delete b2;
  return 0;
}
