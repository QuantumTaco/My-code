#include <iostream>

int main() 
{
  
  int year;
  int x;
  int y;
  int z;

  std::cout << "Enter a 4 digit year: \n";
  std::cin >> year;

  x = year / 10;
  y = x / 10;
  z =y / 10; 
  
if( z!=0 )
{
  std::cout << "The year is 4 digits! \n";
}
else
{
  std::cout << "The year is not 4 digits. \n";
}

  
if(year % 4 == 0)
{
  std::cout << "The year is a leap year. \n";
}
else if (year % 100 == 0 && year % 400 != 0)
{
  std::cout << "The year is not a leap year. \n";
}
else if (year % 400 == 0)
{
  std::cout << "The year is a leap year! \n";
}
else
{
  std::cout << "The year is not a leap year. \n";
}




  
}