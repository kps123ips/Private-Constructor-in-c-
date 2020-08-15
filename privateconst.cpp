#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Student
{
	private:
		char studentName[100];
		char studentId[100];
		
		Student()
		{
			strcpy(studentName,"Krishna");
			strcpy(studentId,"student");
			
		}
		public:
			void showStudent()
			{
				cout<<"\nStudent Name :"<<studentName;
				cout<<"\nStudent Id :"<<studentId;
			}
			static Student* getInstance()
			{
				Student *ptr=new Student;
				return(ptr);
			}
};
int main()
{
	Student *studentPointer;
	studentPointer = Student::getInstance();
	studentPointer->showStudent();
	getch();
	
}

