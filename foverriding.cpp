#include<iostream>
using namespace std;

class Person
{
private:
int age;
public: 
void eat()
{
cout<<"i like eating mangoes"<<endl;
}
};

class Doctor: public Person
{
public:
void eat()
{
cout<<"the doctor doesnt eat junk food";
}
};

int main()
{
Person p;
Doctor d;
p.eat();
d.eat();
return 0;
}
