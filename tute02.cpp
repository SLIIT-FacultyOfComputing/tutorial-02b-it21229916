/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main()
{
   double salary, netSalary; //variable declaration
   int etype, otHrs, otRate;
  
   std::cout<<"Enter Employee Type : "; //input employee type
   std::cin>>etype;
  
   std::cout<<"Enter Salary  : "; //input salary
   std::cin>>salary;
  
   std::cout<<"Enter OtHrs : "; //input OT hours
   std::cin>>otHrs;
   
   switch (etype) //selection
   {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate; //full salary calculation
  
   std::cout<<"Net Salary is "<<netSalary; //print the salary
  
   return 0;
} //end