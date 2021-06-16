#ifndef ATTENDANCEMANAGEMENT_HPP_INCLUDED
#define ATTENDANCEMANAGEMENT_HPP_INCLUDED

class AttendanceManagement{
public:
    AttendanceManagement();
    ~AttendanceManagement();
    void takeAttendance(Student* student, Course* course, String fecha, bool estado);
};
#endif