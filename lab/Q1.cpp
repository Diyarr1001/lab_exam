/*Q.No. 1 Banking Record System.
File handling has been effectively used for each feature of this project
Operations
? Add Record:
? Show/List Data:
? Search Record:
? Edit Record:
? Delete Record:*/

#include<fstream>
#include<iostream>
using namespace std;
main()
{
	string line,file,name;
	cout<<"\n enter file name";
	cin>>name;
	ifstream file("d:\\"+name+".txt");
     file<<"\n banking record system";	
     file.close();
	
}