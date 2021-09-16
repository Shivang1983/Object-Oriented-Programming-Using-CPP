#include <iostream>
using namespace std;
int FindPower(int base, int power) {
   if (power == 0)
   return 1;
   else
   return (base * FindPower(base, power-1));
}
int main() { int base,power;
 cout<<"enter base and power:";
 cin>>base>>power;
 cout<<base<<" raised to the power "<<power<<" is "<<FindPower(base, power);
   return 0;
}