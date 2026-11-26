#include<iostream>
using namespace std ;
class Person 
{
public :
virtual void walk()
{
cout<<"I dont like walking"<<endl;
}
};

class Student: public Person
{
public:
void walk()
{
cout<<"I like walking very much";
}
};

int main()
{
Person *ptr;
Student s;
ptr=&s;
ptr->walk();
return 0;
}
