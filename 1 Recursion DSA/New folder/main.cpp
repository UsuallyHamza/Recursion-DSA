#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int fun(int val){
  // static int x;
  if (val>0)
  {
    
   return fun(val-1)+val;
  }
  return 0;
}


int main() {
  int value;
  value=fun(5);
  cout<<value;
  return 0;
}
