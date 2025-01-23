// Frankie Klimek
// 1-23-25
// Data Structures Assignment 1
  
#include <iostream>  
#include <string>
#include "personType.h" 
 
using namespace std;

int main()
{
    personType student("Lisa", "Marie", "Regan");
    
    student.print();

    cout << "\n\n";
    
    string firstName;
    string middleName;
    string lastName;
    
    cout << "Please enter the second student's first name: ";
    cin >> firstName;
    cout << "Please enter the second student's middle name: ";
    cin >> middleName;
    cout << "Please enter the second student's last name: ";
    cin >> lastName;
    
    personType student2;
  
    student2.setFirstName(firstName);
    student2.setMiddleName(middleName);
    student2.setLastName(lastName);
    
    // Checking first name
    if (student.isFirstName(student2.getFirstName())) // Compares user input to the first name of the given student
        cout << "The student's first name is " << firstName << endl;
    else
        cout << "The student's first name is not " << firstName << endl;

    // Checking last name
    if (student.isLastName(student2.getLastName())) // Compares user input to the last name of the given student 
        cout << "The student's last name is " << lastName << endl;
    else
        cout << "The student's last name is not " << lastName << endl;
   
    cout << "Second student's first name: " << student2.getFirstName() << endl;
    cout << "Second Student's last name: " << student2.getLastName() << endl;

    return 0;
}
