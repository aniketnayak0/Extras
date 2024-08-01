#include <iostream>
#include <cstring>
using namespace std;
class person
{
    string name;
    int age, id;
    public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter id: ";
        cin >> id;
    }
    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
    }
};
class employee : public person{
    string designation;
    public:
    int basic_salary, total_overtime,hourly_rate;
    void getData()
    {
        person::getData();
        cout << "Enter designation: ";
        cin >> designation;
        cout << "Enter basic salary: ";
        cin >> basic_salary;
        cout << "Enter total overtime: ";
        cin >> total_overtime;
        cout << "Enter hourly rate: ";
        cin >> hourly_rate;
    }
    void displayData()
    {
        person::displayData();
        cout << "Designation: " << designation << endl;
        cout << "Basic salary: " << basic_salary << endl;
        cout << "Total overtime: " << total_overtime << endl;
        cout << "Hourly rate: " << hourly_rate << endl;
    }
};
class computedSalary : public employee{
    int total_salary;
    public:
    void getData()
    {
        employee::getData();
    }
    void displayData()
    {
        employee::displayData();
        total_salary = basic_salary + (total_overtime * hourly_rate);
        cout << "Total salary: " << total_salary << endl;

    }

};
int main(){
    int n;
    computedSalary c[100];
    cout << "Enter number of person: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        c[i].getData();
    }
    for(int i = 0; i < n; i++)
    {
        c[i].displayData();
    }
    
    return 0;
}