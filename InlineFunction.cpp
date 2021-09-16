#include <iostream>
 
using namespace std;
 //Inline Function//
inline long cube(int cube)
{
    return cube*cube*cube;
    
}
int main()
{
   int n;
   cout<<" enter any integer value: ";
   cin>>n;
   cout<<" Cube of "<<n<<" is: "<<cube(n);
}