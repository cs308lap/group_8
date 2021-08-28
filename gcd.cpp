#include <iostream>
using namespace std;
 
// Function to return the HCF of x and y
int getHCF(int x, int y)
{
 
    // Minimum of the two numbers
    int minimum = min(x, y);
 
    // If both the numbers are divisible
    // by the minimum of these two then
    // the HCF is equal to the minimum
    if (x % minimum == 0 && y % minimum == 0)
        return minimum;
 
    // Highest number between 2 and minimum/2
    // which can divide both the numbers
    // is the required HCF
    for (int i = minimum / 2; i >= 2; i--) {
 
        // If both the numbers
        // are divisible by i
        if (x % i == 0 && y % i == 0)
            return i;
    }
 
    // 1 divides every number
    return 1;
}

// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
 
// Driver code
int main()
{
    int x , y ;
    cin>>x>>y;
    cout << getHCF(x, y);
 
    return 0;
}