#include <iostream>
#include "./include/attendanceManagement.hpp"
#include "./include/student.hpp"
#include "./include/course.hpp"

using namespace std;

int main()
{
    Student* juan = new Student();
    juan->setIdentifier(1);
    juan->setName("Juan");
    juan->setSurname("Perez");

    Course* algebra = new Course();
    algebra->setIdentifier(1);
    algebra->setName("Algebra");

    AttendanceManagement* attendanceManagement = new AttendanceManagement();
    attendanceManagement->takeAttendance(juan, algebra, "2021-06-08", true);

    delete juan;
    delete algebra;
    delete attendanceManagement;

    return 0;
}