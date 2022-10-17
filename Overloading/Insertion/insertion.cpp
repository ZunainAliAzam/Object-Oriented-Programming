#include <iostream>
#include <string>
using namespace std;

class person {
    private:
    string name;
    int age;
    public:
        person(){
        name= "noname";
        age= 0;
        }
        friend ostream &operator << (ostream &out, person &p);
        friend istream &operator >> (istream &in, person &p);
};
ostream &operator << (ostream &out, person &p){
    out << "what the heck"<< endl;
    out << "my name is " <<p.name<<" and my age is "<<p.age<<endl;
    return out;
    }
istream &operator >> (istream &in, person &p){
    in >> p.name;
    in >> p.age;
    return in;
    }
int main(){
    cout<< "enter the name and age: "<<endl;
    person azam;
    cin >> azam;
    cout << azam;
    return 0;
}