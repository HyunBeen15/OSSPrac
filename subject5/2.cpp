#include <iostream>
using namespace std;

int main() {
    string name;
    string studentID;
    string department;
    string school;

  ossprac2
    cout << "이름 입력: ";
    getline(cin, name);

    cout << "학번 입력: ";
    getline(cin, studentID);

    cout << "학과 입력: ";
    getline(cin, department);

    cout << "학교 입력: ";
    getline(cin, school);

    cout << "\n[출력 결과]" << endl;
    cout << "이름: " << name << endl;
    cout << "학번: " << studentID << endl;
    cout << "학과: " << department << endl;
    cout << "학교: " << school << endl;

    return 0;
}