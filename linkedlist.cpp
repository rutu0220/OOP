#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;

		Node(int data)
		{
		    this->data=data;
		    this->next=NULL;
		}
		Node()
		{
			data=0;
			next=NULL;
		}
};
class linkedList
{
	private:
		Node *head;
		
	public:
		void attachBegin(int data);
		void attachEnd(int data);
		int dettachBegin();
		int dettachEnd();
		void display();
		linkedList();
};
linkedList::linkedList()
{
	head=NULL;
}
void linkedList::attachBegin(int data)
{
	Node *n1;
	n1=new Node(data);
	n1->data=data;
	n1->next=head;
	head=n1;
}
void linkedList::attachEnd(int data)
{
	Node *n1;
	n1=new Node(data);
	if(head==NULL)
	{
		head=n1;
	}
	else
	{
		Node *n2=head;
		while(n2->next!=NULL)
		{
			n2=n2->next;
		}
		n2->next=n1;
	}
	
}
int linkedList::dettachBegin()
{
	Node *n1;
	n1=head;
	head=n1->next;
	delete(n1);
	return(1);
}
int linkedList::dettachEnd()
{
	Node *n1,*n2;
	n2=head;
	while(n1->next!=NULL)
	{
		n2=n1;
		n1=n1->next;
	}
	n2->next=n1->next;
	delete(n2);
	return(1);
}
void linkedList::display()
{
	Node *n1;
	n1=head;
	while(n1!=NULL)
	{
		cout<<n1->data<<endl;
		n1=n1->next;
	}
}
int main()
{
	int ch,n;
  linkedList l1;
  do{
  cout<<"Enter your choice "<<endl<<"1. attach begin "<<endl<<"2. attach end "<<endl<<"3. detach begin "<<endl<<"4. detach end "<<endl<<"5. display "<<endl<<"6. exit"<<endl;
  cin>>ch;
  switch(ch)
  {
	case 1:
	cout<<"/nenter the value "<<endl;
	cin>>n;
	l1.attachBegin(n);
	break;

	case 2:
	cout<<"/nenter the value "<<endl;
	cin>>n;
	l1.attachEnd(n);
	break;

	case 3:
	l1.dettachBegin();
	cout<<"Detached sussesfully from begin "<<endl;
	break;

	case 4:
	l1.dettachEnd();
	cout<<"Detached sussesfully from end "<<endl;
	break;

	case 5:
	l1.display();
	cout<<"displayed sussesfully "<<endl;
	break;

	case 6:
	break;

	default:
	cout<<"Enter valid value"<<endl;
  }
  }
  while (ch!=6);
}
