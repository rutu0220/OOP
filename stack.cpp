#include<iostream>
using namespace std;
class Stack
{
   private :
      
        int *starray;
        int size;
        int top;
       
   public :
        
        int push(int data);
        int pop();
        int isEmpty();
        int isFull();
        Stack();
        Stack(int Usize);
        //~Stack();
};
Stack :: Stack()
{
    starray=new int[10];
    top=-1;
    size=10;
}
Stack :: Stack(int Usize)
{
    starray=new int[Usize];
    top=-1;
    size=Usize;
} 
int Stack :: isFull()
{
    if(top==size-1)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}
int Stack :: isEmpty()
{ 
    if(top==-1)
    {
      return 1;
    }
    else
    {
      return 0;
    }
}
int Stack :: push(int data)
{
    int store=isFull();
    if(store==1)
    {
       return 0;
    }
    else
    {
      int store=isEmpty();
      if(store==1)
      {
       top++;
       starray[top]=data;
      }
      else
      {
      starray[top]=data;
      top++;
      cout<<"Element is pushed"<<endl;
      }
    }
}
int Stack :: pop()
{
   if(top==-1)
   {
     return -1;
   }
   else
   {
     int temp=starray[top];
     top--;
     return temp;
     cout<<"Element is popped "<<temp<<endl;
   }
}
/*int Stack :: ~Stack()
{
  delete[] starray;
}*/
int main()
{
   Stack objs1;
   objs1.push(10);
   objs1.push(20);
   int val=isEmpty();
   if(val==0)
   {
     objs1.pop();
   }
   Stack obj2(20);
   obj2.push(5);
   obj2.push(3);
   if(val==0)
   {
     obj2.pop(3);
   }
   
}