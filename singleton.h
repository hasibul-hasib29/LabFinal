#ifndef SINGLETON_H
#define SINGLETON_H

#include<bits/stdc++.h>

class StudentManager {
private:
    static int totalStudents;
    static int Inscounter;
    static StudentManager* instance;

    std::vector<std::string> names;

    StudentManager(); // constructor

public:
    static StudentManager* addStudent(const std::string& sname);
    static void showStudents();
    static void removeStudent(const std::string& sname);
    static int getTotalStudents();
};

#endif // SINGLETON_H
