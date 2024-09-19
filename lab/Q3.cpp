/*Write a program create employee class with members variable as EmpId,Name of Employee and
Salary. For 10 Employees
Print list of all employees.
Print list of employee who got heights salary.
*/
#include<iostream>
using namespace std;
class employee
{
    protected:
    	int EmpId, salary;
    	string name;
    	public:
    		void get_data(int EmpId,string name,int salary)
    		{
    			this->EmpId=EmpId;
    			this->name=name;
    			this->salary=salary;
    			
			}
			void set_data()
			{
				cout<<"\nempid="<<EmpId<<""<<"\nname="<<name<<""<<"\nsalary="<<salary;
			}
			 salary_get()
			{
				return(salary);
			}


};
main()
{
	employee obj[10];
	int i,s,max=0;
	string n;
	
	cout<<"\n list 10 employees";
	for( int i=0;i<=2;i++)
	{
		cout<<"\n enter name id and salary";
		cin>>i>>n>>s;
		obj[i].get_data(i,n,s);
	}
	for( int i=0;i<=2;i++)
	{
		obj[i].set_data();
	}
	for( int i=0;i<=2;i++)
	{
		if(obj[i].salary_get()>max)
		{
			max=obj[i].salary_get();
		}
	}
	


}
