#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    char name[50];
    float marks;
};

void addStudent() {
    Student s;
    ofstream file("students.txt", ios::app);

    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Marks: ";
    cin >> s.marks;

    file << s.id << " " << s.name << " " << s.marks << endl;
    file.close();

    cout << "Student Added!\n";
}

void displayStudents() {
    Student s;
    ifstream file("students.txt");

    while(file >> s.id >> s.name >> s.marks) {
        cout << "ID: " << s.id << " Name: " << s.name << " Marks: " << s.marks << endl;
    }

    file.close();
}

int main() {
    int choice;

    do {
        cout << "\n1. Add Student\n2. Display Students\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
        }
    } while(choice != 3);

    return 0;
}