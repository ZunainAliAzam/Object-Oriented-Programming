#include <iostream>
using namespace std;
class Distance
{
private:
    int meters;

public:
    Distance() { meters = 0; };
    void displaydata()
    {
        cout << "meters value: " << meters<< endl;
    }
    //prototype or signature
    friend void addvalue(Distance &d);
};

void addvalue(Distance &d)
{
    d.meters = d.meters + 5;
}
int main(){
    Distance d1;
    d1.displaydata();
    
    //calling the friend function
    addvalue(d1); //pass by reference
    d1.displaydata();
}