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
    
	while(cout<<"1：继续录入 2：显示信息"<<endl,cin>>a,a==1)
	{
		p=new student;
		cout<<"输入学生姓名："<<endl;
		cin>>p->name;
		cout<<"输入学生学号："<<endl;
		cin>>p->num;
		cout<<"输入学生年龄："<<endl;
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
		cout<<"姓名:"<<p->name<<endl<<"学号:"<<p->num<<endl<<"年龄:"<<p->age<<endl;
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
