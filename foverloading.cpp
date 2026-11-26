#include<iostream>
using namespace std;
class Calculator
{
private:
int num;
public:
int add(int a , int b )
{
return a+b;
}
int add(int a, int b, int c)
{
return a+b+c;
}
};

int main()
{
Calculator c;
cout <<"addition of and b is : "<<c.add(6,9)<<endl;
cout <<"addition of a,b and c is :" <<c.add(7,3,5);
return 0;
}
