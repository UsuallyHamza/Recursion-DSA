#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

static vector<int> val;

int expo(int m, int n){
  
  if (n<=0)
  {
    return 1;
   
  }else if (n%2==0)
  {
    expo(m*m,n/2);
  }
  else{
    return m*expo((m*m),(n-1)/2);
  }
    
}


int main() {
  int value,x;
  // cout<<"Enter the value\n";
  // cin>>x;
  value=expo(2,4);
  cout<<value;
  return 0;
}
