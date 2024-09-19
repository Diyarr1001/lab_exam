/*Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
Default values for Pay_Rate Rs. 500 per hours)*/
#include<iostream>
using namespace std;
class worker
{
 private:
 	string name;
 	int hr,pr=500,salary;
 	public:
 		void get_data( string name, int hr)
 		{ 
 		 this->name=name;
 		 this->hr=hr;
 		 //this->pr=pr;
 		 //this->s=s;
 		 	
		 }
		 void  sal()
		 {
		 	salary=pr*hr;
		 	
		 }
        void set_data() 
		{
			cout<<"\n name="<<name<<""<<"\nno_of_worked_hrs="<<hr;
			//cout<<"\npay_rate="<<pr;
		cout<<"\nsalary="<<salary;
			}	
			
};
int main()
{
	worker w;
	w.sal();
	w.get_data("xyz",5);
	
	w.set_data();

return 0;
}
