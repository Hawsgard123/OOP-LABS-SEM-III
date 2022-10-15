#include <iostream>
#include <string>
using namespace std;

class Student
{
	protected:
		char name[50];
		int roll;
		int age;
	
	public:
		void get()
		{
			cout << "Enter Name: ";
			cin.getline(name, sizeof(name));
			cout << "Roll No: ";
			cin >> roll;
			cout << "Age: ";
			cin >> age;
		}
		
		void display()
		{
			cout << "Name: " << name << '\n';
			cout << "Roll No :" << roll << '\n';
			cout << "Age: " << age << '\n';
		}
};

class Test : public Student
{
	public: 
		int marks[5];
		void get()
		{
			Student::get();
			cout << "Enter marks: " << '\n';
			for(int i=0;i<5;i++)
			{
				cout << "Mark " << i + 1 << ": ";
				cin >> marks[i];
			}
		}
		
		void display()
		{
			Student::display();
			for(int i=0;i<5;i++)
				cout << "Mark " << i + 1 << ": " << marks[i] << '\n';
		}	
};
class Sports
{	
	public:
		int smark;
		void get()
		{
			cout << "Enter sports mark : ";
			cin >> smark;
		}
		void display()
		{
			cout << "Sport Marks : " << smark << '\n';
		}
};
class Result : public Test, Sports
{
	protected:
		int total;
		float per;
		
	public:
		Result(Test &t, Sports &s)
		{
			t.get();
			s.get();
			t.display();
			s.display();
			display(t, s);
		}
		void display(Test &t, Sports &s)
		{
			total = 0;
			for(int i=0;i<5;i++)
				total += t.marks[i];
			
			total += s.smark;
			cout << "Total Marks : " << total << '\n';
			per = (float)total / 6;
			cout << "Percentage : " << per << '\n';
		}
};


int main()
{
	Test t;
	Sports s;
	Result R(t, s);
}