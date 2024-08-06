#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int fact(int n){
  if (n == 0 || n==1 )
  {
    return 1;
  }else if (n < 0)
  {
    cout<<"The num you entered is -ve and factorial of -ve nums are complex nums\nPlease enter a positive num\n";
    main();
  } return fact(n-1)*n;
  ;
  
}

int main() {
    cout<<"Enter the num of which you want to calculate the factorial\n";
    int x;
    cin>>x;
    cout<<"Factorial of "<<x<<" is "<<fact(x);

    return 0;
}
