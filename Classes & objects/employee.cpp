#include <iostream>
using namespace std;
using std::string;

class employee{
public:
    string Name;
    string Company;
    int Age;

    //Null constructor
    employee(){};
    //pramterize constructor
    employee(string name, string company, int age){
        Name= name;
        Company=company;
        Age = age;
    }
    //copy constructor

    // show function
    void introduce_yourself(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;

    }
};

int main(){
    //creating objects
    employee employee1;
    employee1.Name = "John";
    employee1.Company = "Abbot";
    employee1.Age=25;
    employee1.introduce_yourself();

    employee employee2;
    employee2.Name = "Zunain";
    employee2.Company = "Audi";
    employee2.Age=25;
    employee2.introduce_yourself();

    //Invoking parametrized constructor
    employee employee1= employee("John","Abbot",25);
    employee1.introduce_yourself();

    employee employee2= employee("Zunain","Audi",25);
    employee1.introduce_yourself();
}