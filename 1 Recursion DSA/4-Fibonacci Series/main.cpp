#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int F[6];
int rFib(int m){
  
  if (m<=1){
    return m;
  }
  return rFib(m-2) + rFib(m-1);
    
}
int lFib(int y){
  int v0=0,v1=1,s;
  if (y<=1)
  {
    return y;
  }
  for (int i = 2; i <= y; i++)
  {
    s=v0+v1;
    v0=v1;
    v1=s;
  }
  return s;
  
}

int memoizeFib(int z){
  if (z<=1)
  {
    F[z]=z;
  }else if (F[z-2]==-1)
  {
    F[z-2]=memoizeFib(z-2);
  }
  if (F[z-1]==-1)
  {
    F[z-1]=memoizeFib(z-1);
  }
  return F[z-2]+F[z-1];
} 

int main() {
  for (int i = 0; i < 6; i++)
  { F[i]=-1; }
  int x;
  x=rFib(4);
  cout<<x<<endl;
  int y;
  y=lFib(4);
  cout<<y<<endl;
  int z;
  z=lFib(4);
  cout<<z<<endl;
  return 0;
}
