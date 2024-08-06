#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//using the mathematical formula

int sum2(int n){
  int sum;
  sum=(n*(n+1))/2;
  return sum;
}

//but through recursion the time complexity is more so using 
//the formula is better 
int sum(int n){
  if (n<=0)
  {
    return n;
  }else return sum(n-1)+n;
  
}

int main() {
    cout<<"Enter the num till where you want to calculate the sum\n";
    int x;
    cin>>x;
    cout<<"Sum of "<<x<<" first natural numbers ="<<sum(x);
    cout<<"Sum of "<<x<<" first natural numbers ="<<sum2(x);

    return 0;
}
