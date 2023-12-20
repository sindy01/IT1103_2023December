//Lecture 10 Slide 18 - Practice Question 02

#include <iostream>
#include <string>

using namespace std;

struct Employee
{
    int EmpID;
    string Empname;
    int Age;
    float Salary;
};

Employee getEmployeeData()
{
    Employee emp;

    cout << "Enter Employee ID: ";
    cin >> emp.EmpID;

    cout << "Enter Employee Name: ";
    cin >> emp.Empname;

    cout << "Enter Employee Age: ";
    cin >> emp.Age;

    cout << "Enter Employee Salary: ";
    cin >> emp.Salary;

    return emp;
}

void printEmployeeData(Employee emp)
{
    cout << "\nEmployee Details:\n";
    cout << "Employee ID: " << emp.EmpID << "\n";
    cout << "Employee Name: " << emp.Empname << "\n";
    cout << "Employee Age: " << emp.Age << "\n";
    cout << "Employee Salary: " << emp.Salary << "\n";
}

int main()
{
    // Call getEmployeeData() to get employee details
    Employee empDetails = getEmployeeData();

    // Call printEmployeeData() to print employee details
    printEmployeeData(empDetails);

    return 0;
}

