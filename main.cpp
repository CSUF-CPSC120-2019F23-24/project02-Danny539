// This program calculates and displays business expenses.
// Name:business expenses calculator
#include <iostream>
#include <string>
#include <iomanip>

int main()

{
  //This is defining the different variables
  double days, hotel, meal, total;
  std::cout << "Welcome to the business trip tracker!" << std::endl;
  std::cout << "" << std::endl;
// This defining the location and allowing for it to get more than one word
  std::string location;
  std::cout << "What is the business trip loctaion?" << std::endl;
  getline(std::cin, location);

  std::cout << "How many days will the trip take?" << std::endl;
  std::cin >> days;

  std::cout << "what is the total hotel expense?" << std::endl;
  std::cin >> hotel;

  std::cout << "What is the total meal expense?" << std::endl;
  std::cin >> meal;

  //calculates total by adding the hotel and meal prices
  total = hotel + meal;

  //display
  std::cout << std::setprecision(2) << "Location  " << " Days   " << "Hotel  "<< "Meal " << "Total" << std::endl;
  std::cout << std::setprecision(2) <<  location <<  '\t'<< days << '\t' << "$" << hotel << '\t' <<  "$" << meal << '\t' << "$" << total  << std::endl;

  return 0;
}
