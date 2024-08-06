#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
//finding nCr by Pascal's triangle
int comb(int n, int r){
  if (r==n || r==0)
  {
    return 1;
  }
  
  return comb(n-1,r-1)+comb(n-1,r);
} 

int main() {
  int nVal, rVal;
  cout<<"Enter the n value\n";
  cin>>nVal;
  cout<<"Enter the r value\n";
  cin>>rVal;
  int result=comb(nVal,rVal);
  return 0;
}
