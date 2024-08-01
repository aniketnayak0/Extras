#include <iostream>
using namespace std;
class employee{
    string name;
    int age, id, basic_salary,total_overtime,hourly_rate;
    int net_salary, gross_salary;
    public:
    void getdata(){
        cout<<"Enter the name of the employee: ";
        cin>>name;
        cout<<"Enter the age of the employee: ";
        cin>>age;
        cout<<"Enter the id of the employee: ";
        cin>>id;
        cout<<"Enter the basic salary of the employee: ";
        cin>>basic_salary;
        cout<<"Enter the total overtime of the employee: ";
        cin>>total_overtime;
        cout<<"Enter the hourly rate of the employee: ";
        cin>>hourly_rate;
    }
    void displayData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Basic Salary"<<basic_salary<<endl;
        cout<<"Total Overtime: "<<total_overtime<<endl;
        cout<<"Hourly Rate: "<<hourly_rate<<endl;
    }
    void netSalary(){
        net_salary = (basic_salary + (total_overtime*hourly_rate))-((basic_salary + (total_overtime*hourly_rate))*0.3);
        cout<<"Net Salary: "<<net_salary<<endl;
        
    }

};
int main(){
    employee a[100];
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    for(int i=0;i<n;i++){
        a[i].getdata();
    }
    for(int i=0;i<n;i++){
        a[i].displayData();
        a[i].netSalary();
    }
    return 0;
}