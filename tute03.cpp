/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main()
{
    int no; //variable declaration
    long fac;

    std::cout<<"Enter a Number : "; //input the number
    std::cin>>no;

    fac = 1; //for loop to calculate the factorial
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    std::cout<<"Factorial of "<<no<<" is "<<fac<<std::endl; //print the factorial
  
    return 0;
} //end