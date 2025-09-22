#include <iostream>
using namespace std;

// Global scope
struct Student {
    string name;
    int age;
};

void updateStudent(Student &s) {
    s.name = "Charlie";
    s.age += 1;
}

void printStudent(const Student &s) {
    cout << "Student: " << s.name << ", Age: " << s.age << endl;
}

int main() {
    Student s1 = {"Alice", 19};

    printStudent(s1);       // Before update
    updateStudent(s1);      // Modify s1 using pass-by-reference
    printStudent(s1);       // After update

    return 0;
}
