/*QUESTION :-
             Create a class Student containing fields for Roll No., Name, Class, Year and Total 
Marks. Write a program to store 5 objects of Student class in a file. Retrieve these records 
from file and display them
SOLUTION :-
*/
#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    int RollNo;
    string Name;
    int Class;
    int Year;
    int TotalMarks;
};

int main()
{
    ofstream f2;
    f2.open("Question_2output.txt");

    for (int i = 1; i < 6; i++)
    {
        Student obj;
        cout << "Enter the Roll No of student no-" << i << endl;
        cin >> obj.RollNo;
        f2 << obj.RollNo << "  ";

        cout << "Enter the Name of student no-" << i << endl;
        cin.ignore();
        getline(cin, obj.Name);
        f2 << obj.Name << "    ";
        
        cout << "Enter the Class of student no-" << i << endl;
        cin >> obj.Class;

        cout << "Enter the Year of student no-" << i << endl;
        cin >> obj.Year;

        cout << "Enter the Total Marks obtained by student no-" << i << endl;
        cin >> obj.TotalMarks;

        f2 << obj.Class << "  " << obj.Year << "  " << obj.TotalMarks << endl;
        }

    return 0;
}