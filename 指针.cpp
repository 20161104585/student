#include<iostream>
using namespace std;

struct student
{
	char name[50];
	char num[12];
	int age;
	struct student *next;
};

int main()
{
	int a;
	struct student *p,*q,*head;
	head=new student;
	q=head;
	p=q;
	a=1;
	head=NULL;
    
	while(cout<<"1������¼�� 2����ʾ��Ϣ"<<endl,cin>>a,a==1)
	{
		p=new student;
		cout<<"����ѧ��������"<<endl;
		cin>>p->name;
		cout<<"����ѧ��ѧ�ţ�"<<endl;
		cin>>p->num;
		cout<<"����ѧ�����䣺"<<endl;
		cin>>p->age;
		
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			q->next=p;
		}
		q=p;
		p->next=NULL;
	}
    
	p=head;
	while(p!=NULL)
	{
		cout<<"����:"<<p->name<<endl<<"ѧ��:"<<p->num<<endl<<"����:"<<p->age<<endl;
		p=p->next;
	}

	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}while(q);
}
