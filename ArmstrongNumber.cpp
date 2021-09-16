#include <iostream>
using namespace std;

int main()
{
    cout << "Program to check if the number is Armstrong or not \n\n";
int n, n1, remainder, num = 0;
cout << " Enter a positive integer :  ";
    cin >> n;
  n1=n;
    while( n1!=0 )
    {
    remainder = n1 % 10; 
    num += remainder*remainder*remainder;
    n1/=10; 
    }
    cout << "\n\n\n";
    if(num == n)
    {
    cout << n << " is an Armstrong number.";
    }
    else
    {
cout << n << " is not an Armstrong number.";
    }   
    cout << "\n\n\n";
    return 0;
}