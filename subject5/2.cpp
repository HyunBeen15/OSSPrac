#include <iostream>
using namespace std;

int main() 
{
    string name;
    string studentID;

    cout << "이름을 입력하세요: ";
    cin >> name;

    cout << "학번을 입력하세요: ";
    cin >> studentID;

    cout << "\n[출력 결과]" << endl;
    cout << "이름: " << name << endl;
    cout << "학번: " << studentID << endl;

    return 0;
}