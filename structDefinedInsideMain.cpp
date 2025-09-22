#include <iostream>
using namespace std;

void updateStudent(Student &s) {  // ❌ Error: ‘Student’ not declared
    s.name = "Charlie";
    s.age += 1;
}

int main() {
    // Local struct definition
    struct Student {
        string name;
        int age;
    };

    Student s1 = {"Alice", 19};
    updateStudent(s1);  // ❌ Won’t compile

    return 0;
}
