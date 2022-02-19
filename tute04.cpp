/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long nCr(int n, int r); //Define the funcrion nCr

int main() //main function
{
  int n, r; //varable declaration
  
  std::cout << "Enter a value for n "; //input value n
  std::cin >> n;
  
  std::cout << "Enter a value for r "; //input value r
  std::cin >> r;
  
  std::cout << "nCr = "; //invoke the function nCr
  std::cout << nCr(n,r);
  
  std::cout << std::endl;
  
  return 0;
} //end of the main function

long nCr(int n, int r) //implementation of the nCr function
{
  int result_1; // variable declaration
  
  int fac_n = 1; //for loop to calculate the factorial of n
    for (int i=n; i >= 1; i--)
    {
        fac_n = fac_n * i;
    }
  
  int fac_r = 1; //for loop to calculate the factorial of r
    for (int i=r; i >= 1; i--)
    {
        fac_r = fac_r * i;
    }

  int fac_nr = 1; //for loop to calculate the factorial of (n-r)
    for (int i=(n-r); i >= 1; i--)
    {
        fac_nr = fac_nr * i;
    }

  result_1 = fac_n / (fac_r * fac_nr); //calculate the final answer

  return result_1; //retuning the fucntion value
} //end