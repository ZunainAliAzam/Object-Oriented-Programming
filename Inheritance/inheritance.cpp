#include <iostream>
using namespace std;
using std::string;

class Abstractemployee
{
    virtual void AskForPromotion() = 0;
};

class employee : Abstractemployee
{
private:
    string Name;
    string Company;
    int Age;

public:
    // setter & getter
    void setname(string name) { Name = name; }
    string getname() { return Name; }

    void setCompany(string company) { Company = company; }
    string getCompany() { return Company; }

    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge() { return Age; }

    employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    // show function
    void introduce_yourself()
    {
        cout << "Name: " << getname() << endl;
        cout << "Company: " << getCompany() << endl;
        cout << "Age: " << getAge() << endl;
    }
    void AskForPromotion()
    {
        if (Age > 30)
            cout << Name << ", promotion rejected" << endl;
        else
            cout << Name << ", promotion accepted" << endl;
    }
};
class Developer : public employee
{
public:
    string favprogramminglanguage;
     void fixbug(){cout<< getname()<< "is debugging"<< favprogramminglanguage<<endl;}
    Developer(string name, string company, int age, string Favprogramminglanguage)
        : employee(name, company, age)
    {
        favprogramminglanguage = Favprogramminglanguage;
    }
};
class teacher : public employee{
public:
    string Subject;
    void preparelesson(){cout<< getname()<< "is preparing"<< Subject<<"lesson"<<endl;}
    teacher(string name, string company, int age, string subject):employee(name, company, age)
    {
        Subject=subject;
    }
};

int main()
{
    employee employee1 = employee("Sadia", "Microsoft", 25);
    employee employee2 = employee("John", "Google", 22);
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    Developer d = Developer("Saldina", "youtube", 25, "Python");
    teacher t=teacher("Saldina", "youtube",35,"cpp");
    t.preparelesson();
    d.fixbug();
    t.AskForPromotion();
    d.AskForPromotion();
}