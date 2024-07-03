// hello_world.cpp
#include <iostream>

using namespace std;

namespace helloReallyBigNameSpace
{

  void greet()
  {
    cout << "Hello World" << std::endl;
  }

}

namespace hello = helloReallyBigNameSpace;

int main()

{
  // cout << "Hello World" << std::endl;
  // hello::greet();

  int uninitializedInt;
  int initializedInt{7};
  cout << uninitializedInt << " is a random value" << endl;
  cout << initializedInt << " was assigned an initial value" << endl;

  return 0;
}
