#include<iostream>
#include<iomanip>
#include<ios>
using namespace std;
 //The setprecision C++ function is used to format floating-point values
 int main()
 {
    cout<<fixed<<setprecision(2);
    cout<<left<<setw(52)<<setfill('.')<<"Movie Name"<<" "<<right<<setw(15)<<"Journey to mars"<<endl;
    cout<<left<<setw(53)<<setfill('.')<<"NUmber of tickets sold"<<" "<<right<<setw(10)<<278.00<<endl;
    cout<<left<<setw(45)<<setfill('.')<<"Gross Amount "<<right<<setw(10)<<"$"<<setw(10)<<100.00<<"%"<<endl;
    cout<<left<<setw(45)<<setfill('.')<<"percentage of gross amount donated"<<right<<setw(10)<<"$"<<setw(10)<<10.00<<endl;
    cout<<left<<setw(45)<<setfill('.')<<"Amount donated"<<right<<setw(10)<<"$"<<setw(10)<<213.00<<endl;
    cout<<left<<setw(45)<<setfill('.')<<"Net Sale"<<right<<setw(10)<<"$"<<setw(10)<<8235.00<<endl;
 }
