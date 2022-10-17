#include<iostream>
using namespace std;
using std::string;

class employee{
private:
    string Name;
    string Company;
    int Age;

public:
    //setter & getter
    void setname(string name) { Name = name; }
    string getname() { return Name; }

    void setCompany(string company) { Company = company; }
    string getCompany() { return Company; }

    void setAge(int age) { if (age>=18) Age = age; }
    int getAge() { return Age; }

    // show function
    void introduce_yourself(){
        cout << "Name: " << getname() << endl;
        cout << "Company: " << getCompany() << endl;
        cout << "Age: " << getAge() << endl;
    }
    employee(string name, string company, int age){
        Name= name;
        Company=company;
        Age = age;
    }

};

int main(){ 
    employee employee1 = employee("Sadia","Microsoft",25);
    employee1.introduce_yourself();

    employee employee2 = employee("John","Google",22);
    employee2.introduce_yourself();

    employee1.setAge(39);
    cout<< employee1.getname() << " is " << employee1.getAge()<<" years old "<<endl;
}