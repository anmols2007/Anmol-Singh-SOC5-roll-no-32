#include<iostream>
using namespace std;
class Employee
{
public :
int employee_id;
int salary,bonus, total;
string name;

Employee()
{
	employee_id=0;
salary=0;
bonus=0;
total=0;
name ="unknown";
}
Employee(int id, int s, int b, string n)
{
employee_id=id;
salary=s;
bonus=b;
name=n;
}

void calculate()
{
total= salary + bonus;
}
void display()
{
cout<<"Employee name : "<<name<<endl;
cout<<"Employee id" <<employee_id<<endl;
cout<<" Employee salary before bonus:" <<salary<<endl;
cout<<"salary after bonus:"<<total<<endl;
}
};

int main()
{
Employee  e1;
e1.display();
Employee e2(69,2000000,15000,"Anmol");
e2.display();
return 0;
}


