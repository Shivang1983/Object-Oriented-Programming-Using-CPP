/* C++ Program to calculate Average of 3 subjects*/
#include<iostream>
using namespace std;
int main()
{
  // declare variables
  double subject1 , subject2 , subject3;
  double sum, average;

  // take input from end-user
  cout << "Enter marks of three subjects :: ";
  cin >> subject1 >> subject2 >> subject3;

  // calculate sum value
  sum = subject1 + subject2 + subject3;
  
  // calculate average value
  average = sum / 3;

  // display result
  cout << "Sum = " << sum << endl;
  cout << "Average = " << average << endl;

  return 0;
}