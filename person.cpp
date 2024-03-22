#include<iostream>
#include<cctype>
#include<cstring>
#include<math.h>
using namespace std;
//for person
void set_name(string);
void get_name(string);
void set_address(string);
void get_address(string);
void get_age(int);
void set_age(int);
//for student
void set_class(string);
void set_prn(string);
void set_avgmarks(int,int,int);
void get_class(string);
void get_prn(string);
void get_avgmarks(float);
//for employee
void set_empid(float);
void set_desig(string);
void set_salary(double);
void get_empid(float);
void get_desig(string);
void get_salary(double);
int main()
{
	string name,cls,prn;
    string address,desig;
    int age,maths,chem,phy,avg,id;
    double salary;
    cout<<"Enter name "<<endl;
    cin>>name; 
    set_name(name);
    cout<<"Enter address "<<endl;
    cin>>address;
    set_address(address);
    cout<<"Enter age"<<endl;
    cin>>age;
    set_age(age);
    cout<<"Enter class"<<endl;
    cin>>cls;
    set_class(cls);
    cout<<"ENter prn no."<<endl;
    cin>>prn;
    set_prn(prn);
    cout<<"Enter maths marks"<<endl;
    cin>>maths;
    cout<<"Enter chemistry marks"<<endl;
    cin>>chem;
    cout<<"Enter physics marks"<<endl;
    cin>>phy;
    set_avgmarks(maths,chem,phy);
    cout<<"Enter employee id "<<endl;
    cin>>id;
    set_empid(id);
    cout<<"Enter employee designation "<<endl;
    cin>>desig;
    set_desig(desig);
    cout<<"Enter employee salary"<<endl;
    cin>>salary;
    set_salary(salary);
}
void get_name(string name)
{
   cout<<name<<endl;
}
void get_address(string address)
{
    cout<<address<<endl;
}
void get_age(int age)
{
    cout<<age<<endl;
}
void get_class(string cls)
{
    cout<<cls<<endl;
}
void get_prn(string prn)
{
    cout<<prn<<endl;
}
void get_avgmarks(float avg)
{
    cout<<avg<<endl;
}
void get_empid(float id)
{
    cout<<id<<endl;
}
void get_desig(string desig)
{
    cout<<desig<<endl;
}
void get_salary(double salary)
{
    cout<<salary<<endl;
}
void set_name(string name)
{
    bool is_valid=true;
    int i,len=name.length();
	for(i=0;i<len;i++)
    {
        if(isdigit(name[i]))
        {
           is_valid=false;
        }
    }
    if(is_valid==false)
    {
        cout<<"Enter valid name "<<endl;
    }
    else
    {
        cout<<"name is correct "<<endl;
        get_name(name);
    }
}
void set_address(string address)
{
    if(address.length()<=150)
    {
        cout<<"Address is"<<endl;
        get_address(address);
    }
    else{
        cout<<"Enter correct address "<<endl;
    }

}
void set_age(int age)
{
    if(age>0&&age<=100)
    {
        cout<<"Age is "<<endl;
        get_age(age);
    }
    else{
        cout<<"Enter valid age"<<endl;
    }
}
void set_class(string cls)
{
    if(cls.length()<=10)
    {
        cout<<"class is"<<endl;
        get_class(cls);
    }
    else
    {
        cout<<"Enter correct class"<<endl;
    }
}
void set_prn(string prn)
{
    if(prn.length()<=10)
    {
        cout<<"PRN no. is"<<endl;
        get_prn(prn);
    }
    else{
        cout<<"Enter correct prn"<<endl;
    }
}
void set_avgmarks(int maths,int chem,int phy)
{
    //int maths,chem,phy;
    float avg=(maths+chem+phy)/3;
    cout<<"average marks are "<<endl;
    get_avgmarks(avg);

}
void set_empid(float id)
{
    if(isdigit(id))
    {
        cout<<"id is "<<endl;
        get_empid(id);
    }
    else{
        cout<<"Enter valid id "<<endl;
    }
}
void set_desig(string desig)
{
    bool is_valid=true;
    int i,len=desig.length();
	for(i=0;i<len;i++)
    {
        if(isdigit(desig[i]))
        {
           is_valid=false;
        }
    }
    if(is_valid==false)
    {
        cout<<"Enter valid post "<<endl;
    }
    else
    {
        cout<<"post is "<<endl;
        get_desig(desig);
    }

}
void set_salary(double salary)
{
    if(isdigit(salary))
    {
        cout<<"salary is "<<endl;
        get_salary(salary);
    }
    else{
        cout<<"Enter valid salary "<<endl;
    }

}