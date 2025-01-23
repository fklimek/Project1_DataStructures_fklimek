//personType.h

#ifndef PERSON_TYPE_H
#define PERSON_TYPE_H
    
#include <string> 

using namespace std;

class personType
{
public:
    void print() const;
       //Function to output the first name and last name
       //in the form firstName lastName.
  
    void setName(string first, string middle, string last);
      //Function to set firstName and lastName according 
      //to the parameters.
      //Postcondition: firstName = first; lastName = last

    // Functions to individually set the names
    // via user input.
    void setFirstName(string first);
    void setMiddleName(string middle);
    void setLastName(string last);

    // Functions to check the values of 
    bool isLastName(string last) const;
    bool isFirstName(string first) const;

    string getFirstName() const;
      //Function to return the first name.
      //Postcondition: The value of firstName is returned.

    string getMiddleName() const;

    string getLastName() const;
      //Function to return the last name.
      //Postcondition: The value of lastName is returned.

    personType(string first = "", string middle = "", string last = "");
      //Constructor
      //Sets firstName and lastName according to the parameters.
      //The default values of the parameters are null strings.
      //Postcondition: firstName = first; lastName = last  

 private:
    string firstName; //variable to store the first name
    string middleName; //variable to store the middle name
    string lastName;  //variable to store the last name
};

#endif