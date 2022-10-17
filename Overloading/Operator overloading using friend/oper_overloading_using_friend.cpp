#include<iostream>
using namespace std;
class complex {
    private:
    int real, imag;
    public:
    complex(){
        real= 0; 
        imag= 0;
    }
    complex(int r, int i){
        real=r;
        imag=i;
    }
    //operator overloading syntax
    complex operator +(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp; 
    }
    // operator overload using friend function
    friend void operator +(complex &c);
    void print(){
        cout << real << "+" << imag  << "i"<<endl;
    }
};
void operator + (complex &c){
    c.real =+ c.real;
    c.imag =+ c.imag;
}
int main(){
    complex c1(5,4);
    complex c2(2,5);
    complex c3;
     // binary operator overloading
    c3=c1+c2; 
    // unary operator overloading  
    +c1;         
    c1.print();
    c3.print();
    return 0;
}