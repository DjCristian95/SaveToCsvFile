#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

class Student{
private:
    int identifier;
    string name;
    string surname

public:
    Student();
    ~Student();

    // Setters
    void setIdentifier(int identifier);
    void setName(string name);
    void setSurname(string apellido);
    
    // Getters
    int getIdentifier();
    string setName();
    string setSurname();
};
#endif
