//personTypeImp.cpp
    
#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string middle, string last)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}

void personType::setFirstName(string first)
{
    firstName = first;
}

void personType::setMiddleName(string middle)
{
    middleName = middle;
}

void personType::setLastName(string last)
{
    lastName = last;
}

bool personType::isFirstName(string first) const
{
    return first == firstName;
}

bool personType::isLastName(string last) const
{
    return last == lastName;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getMiddleName() const
{
    return middleName;
}

string personType::getLastName() const
{
    return lastName;
}

    //constructor
personType::personType(string first, string middle, string last) 

{ 
    firstName = first;
    middleName = middle;
    lastName = last;
}

