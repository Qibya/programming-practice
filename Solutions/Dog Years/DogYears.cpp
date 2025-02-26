#include <iostream>
#include <string>

int main() 
{
  int dogAge;
  int age;
  std::string olderThanTwo;
  bool invalidInput = 1;

  while (invalidInput == 1) 
  {
    std::cout << "Is your dog older than 2? Answer with 'yes' or 'no'.\n";
    std::cin >> olderThanTwo;

    if (olderThanTwo == "yes" || olderThanTwo == "Yes" || olderThanTwo == "YES") 
    {
      invalidInput = 0;
      std::cout << "How old is your dog?\n";
      std::cin >> dogAge;
      age = ((dogAge - 2) * 4) + 21;
      std::cout << "Your dog is " << age << " in human years\n";
    }
    else if (olderThanTwo == "no" || olderThanTwo == "No" || olderThanTwo == "NO") 
    {
      invalidInput = 0;
      std::cout << "Enter the age of your dog, if you want to input in months enter 0. \n";
      std::cin >> dogAge;
      switch (dogAge) 
      {
        switch 2:
          std::cout << "Your dog is 21 in human years\n";
          break;
        switch 1:
          std::cout << "Your dog is 10.5 in human years\n";
          break;
        switch 0:
          break;
        switch default:
          invalidInput = 1;
          std::cout << "Invalid input\n";
          break;
      }
    }
    else 
    {
      invalidInput = 1;
      std::cout << "Invalid input\n";
    }
  }
}
