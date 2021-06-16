#include "course.hpp"

// Constructor
Course::Course() {}

//Destructor
Course::~Course(){}

// Setters
void setIdentifier(int identifier) {
    this.identifier = identifier;
}

void setName(string name) {
    this.name = name;
}

// Getters
int getIdentifier() {
    return identifier;
}    

string setName() {
    return name;
}