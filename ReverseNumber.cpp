#include <iostream>
using namespace std;
int main()
{
int number, reverse_number = 0;
cout << "Enter a number to reverse value:"; 
cin >> number;
while (number != 0)
{
reverse_number = reverse_number * 10;
reverse_number = reverse_number + number % 10;
number = number / 10;
}
cout << "Reverse of entered number is:";
cout << reverse_number;
return 0;
}