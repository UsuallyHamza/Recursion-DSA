#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
//using memoization technique and recursion
int gArr[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int mfib(int n){
  if (n<=0)
  {
    return 0;
  }else if (n==1)
  {
    return 1;
  }
  if (gArr[n]==-1)
  {
    gArr[n]=mfib(n-2)+mfib(n-1);
  }
  return gArr[n];
}

//using loop
int lfib(int n){
  int v0=0, v1=1, sum=0;
  for (int i = 2; i <= n; i++)
  {
    sum=v0+v1;
    v0=v1;
    v1=sum;

  }
  return sum;
}

//using recursion
int rfib(int n){
  if (n<=0)
  {
    return 0;
  }else if (n==1)
  {
    return 1;
  } else return rfib(n-2)+rfib(n-1);

}

int main() {
  cout<<"Enter the position of the number you want to find in the Fibonacci series:";
  int num;
  cin>>num;
  int result;
  if (num<0)
  {
    cout<<"\nPlease enter a positive num;";
    cin>>num;
  }else {
    result=rfib(num);
    cout<<"Fibonacci number at position " << num << " is " << result << endl;
  }

}
