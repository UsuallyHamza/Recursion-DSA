#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int sum(int n){
  // static int x;
  if (n<=0)
  {
    return 0;
   
  }
  return sum(n-1)+n;
}


int main() {
  int value;
  value=sum(3);
  cout<<value;
  return 0;
}
