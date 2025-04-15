#include "singleton.h"

int StudentManager::totalStudents = 0;
int StudentManager::Inscounter = 0;
StudentManager* StudentManager::instance = nullptr;

StudentManager::StudentManager() {
    Inscounter++;
    std::cout << "Student counter: " << Inscounter << std::endl;
}

StudentManager* StudentManager::addStudent(const std::string& sname) {
    if (instance == nullptr) {
        instance = new StudentManager();
    }
    instance->names.push_back(sname);
    totalStudents++;
    std::cout << "Student instance created. Total student: " << totalStudents << std::endl;
    return instance;
}

void StudentManager::showStudents() {
    std::cout << "Students: ";
    for (const auto& name : instance->names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;
}

void StudentManager::removeStudent(const std::string& sname) {
    auto it = std::find(instance->names.begin(), instance->names.end(), sname);
    if (it != instance->names.end()) {
        instance->names.erase(it);
        totalStudents--;
        std::cout << "Student " << sname << " removed. Total students: " << totalStudents << std::endl;
    } else {
        std::cout << "Student " << sname << " not found." << std::endl;
    }
}

int StudentManager::getTotalStudents() {
    return totalStudents;
}
