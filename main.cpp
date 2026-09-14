#include <iostream>
#include <string>

// Homework 3 — Freesia Garcia
// CIS 5 Week 03 · Types & variables

int main() {
  const int CURRENT_YEAR = 2026;

  // TODO: Lab 3 boxes — initialize on the same line
  std::string name = "Fresia Garcia";
  int age = 19;
  double height_m = 1.67;
  char initial = 'F';
  bool student = true;


  // TODO: two more from this week's menu
  int credits = 15;
  double gpa = 3.5;

  // Credits is an int because college credits are counted by whole numbers
  // GPA is a double because there can be decimals in GPA values

  std::cout << "=== About me ===\n";

  std::cout << "Name: " << name << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Height (m): " << height_m << "\n";\
  std::cout << "Initial: " << initial << "\n";
  std::cout << "Student: " << student << "\n";
  std::cout << "Credits: " << credits << "\n";
  std::cout << "GPA: " << gpa << "\n";
  std::cout << "Year: " << CURRENT_YEAR << "\n";
  
  std::cout << name << " is " << age
            << " years old, taking "
            << credits << " credits in "
            << CURRENT_YEAR
            << " with a GPA of "
            << gpa << ".\n";

  // int age = "nineteen" will not compile because 
  // the string cannot be an int

  // char initial = "F"
  // char stores only one character so it needs single quotes, strings use double quotes
 
 
  return 0;
}
