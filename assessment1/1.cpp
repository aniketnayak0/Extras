#include <iostream>
#include <cstring>
using namespace std;
class country{
    string name;
    int area,population;
    public:
        void getdata(){
            cout<<"Enter the name of the country: ";
            cin>>name;
            cout<<"Enter the area of the country: ";
            cin>>area;
            cout<<"Enter the population of the country: ";
            cin>>population;
        }
        void display(){
            cout<<"Name of the country: "<<name<<endl;
            cout<<"Area of the country: "<<area<<endl;
            cout<<"Population of the country: "<<population<<endl;
        }
        country largestpopulation(int i, int n, country a[]){
            for(i=0;i<n;i++){
                if(a[0].population<a[i].population){
                    a[0].population=a[i].population;
                    a[0].name=a[i].name;
                    a[0].area=a[i].area;
                    return a[0];
                }
            }
        }
    
};
int main(){
    country a[100];
    int n,i;
    cout<<"Enter the number of countries: ";
    cin>>n;
    for(i=0;i<n;i++){
        a[i].getdata();
    }
    a[0].largestpopulation(i,n,a);
    a[0].display();
    return 0;
}
