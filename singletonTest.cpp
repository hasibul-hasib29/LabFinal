#include <gtest/gtest.h>
#include "singleton.h"

TEST(UserAdd, AddStudent) {
    StudentManager* student1 = StudentManager::addStudent("A");
    EXPECT_EQ(StudentManager::getTotalStudents(), 1);
}

TEST(RemoveStudent, RemoveStudentCheck) {
    StudentManager::addStudent("B");
    StudentManager::addStudent("C");
    StudentManager::removeStudent("B");
    EXPECT_EQ(StudentManager::getTotalStudents(), 2);  
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
