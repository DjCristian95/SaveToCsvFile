#ifndef COURSE_HPP_INCLUDED
#define COURSE_HPP_INCLUDED

class Course{
private:
    int identifier;
    string name;

public:
    Course();
    ~Course();

     // Setters
    void setIdentifier(int identifier);
    void setName(string name);
    
     // Getters
    int getIdentifier();
    string setName();
};
#endif 