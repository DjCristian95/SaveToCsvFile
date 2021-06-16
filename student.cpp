#include "student.hpp"

// Constructor
Student::Student() {}

//Destructor
Student::~Student(){}

// Setters
void setIdentifier(int identifier) {
    this.identifier = identifier;
}

void setName(string name) {
    this.name = name;
}

void setSurname(string apellido) {
    this.apellido = apellido;
}

// Getters
int getIdentifier() {
    return identifier;
}    

string setName() {
    return name;
}

string setSurname() {
   return apellido;
}