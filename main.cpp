#include <cstdlib>
#include <iostream>

#include "StackCpp.h"
#include "StackCpp.cpp"

using namespace std;

int main() {
  Stack tank;
  tank.Push("tank", 2);
  tank.Push("boba", 2);
  tank.Push("chikfila", 1);
  tank.Push("firehouse", 1);

  tank.Print();
  cout << "Popping" << endl;
  tank.Pop();
  cout << "Popping" << endl;
  tank.Pop();
  cout << "Popping" << endl;
  tank.Pop();
  cout << "Popping" << endl;
  tank.Pop();
  cout << "Popping" << endl;
  tank.Pop();
  cout << "\n\nNew Stack!\n";
  tank.Push("Narnia", 0);
  tank.Push("21", 10);
  tank.Push("Rush Hour", 10);
  tank.Print(); 
}
