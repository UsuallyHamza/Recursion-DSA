#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int sum(int n){
  
  if (n<=0)
  {
    return 1;
   
  }
  return sum(n-1)*n;
}


int main() {
  int value,x;
  cout<<"Enter the value\n";
  cin>>x;
  value=sum(x);
  cout<<value;
  return 0;
}
