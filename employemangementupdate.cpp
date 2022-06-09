#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string>
using namespace std;
struct emp
{
	string name,id,address,contact,salary;
	
};
emp e[1000];
int total=0;
void entdata()
{
	int choice;
	system("cls");
	cout<<"How many employee Data you want to Enter : ";
	cin>>choice;
	for(int i=total;i<total+choice;i++)
	{
		cout<<"\nEnter data of employee "<<i+1<<endl;
		cout<<"Employee name : ";
		cin>>e[i].name;
		//getline(cin,e[i].name);
		
		cout<<"Enter id: ";
		cin>>e[i].id;
		
		cout<<"Enter address: ";
		cin>>e[i].address;
		//getline(cin,e[i].address);
		
		cout<<"Enter contact: ";
		cin>>e[i].contact;

		cout<<"Enter salary: ";
		cin>>e[i].salary;
		//cout<<e[i].address;
	}
	total=total+choice;
	system("cls");
}
void show()
{
	system("cls");
	if (total!=0)
	{
		for(int i=0;i<total;i++)
		{
			cout<<"\nData of employee : "<<i+1<<endl;
			cout<<"Employee name : "<<e[i].name<<endl;
			cout<<"Employee ID : "<<e[i].id<<endl;
			cout<<"Employee Adress : "<<e[i].address<<endl;
			cout<<"Employee Contact : "<<e[i].contact<<endl;
			cout<<"Employee Salary : "<<e[i].salary<<endl;
		}
	}
	else 
	{
		cout<<"\n\n\t\tYour record is empty "<<endl;
	}
	system("pause");
	system("cls");

}
void search()
{
	system("cls");
	if(total!=0)
	{
		string id;
		cout<<"Enter ID of emplyoee which you want to check : "<<endl;
		cin>>id;
		for(int i=0;i<total;i++)
		{
			if(id==e[i].id)
			{
				cout<<"\nData of employee : "<<i+1<<endl;
				cout<<"Employee name : "<<e[i].name<<endl;
				cout<<"Employee ID : "<<e[i].id<<endl;
				cout<<"Employee Adress : "<<e[i].address<<endl;
				cout<<"Employee Contact : "<<e[i].contact<<endl;
				cout<<"Employee Salary : "<<e[i].salary<<endl;
				break;
			}
			if(i==total-1)
			{
				cout<<"No such record found"<<endl;
			}
		}
	}
	else 
	{
		cout<<"\n\n\t\tYour record is empty "<<endl;
	}
	system("pause");
	system("cls");
}
void update()
{
	system("cls");
	if(total!=0)
	{
		string id;
		cout<<"Enter ID of emplyoee which you want to Update : "<<endl;
		cin>>id;
		
		for(int i=0;i<total;i++)
		{
			if(id==e[i].id)
			{
				cout<<"\n Previous Data was :- "<<endl;
				cout<<"\nData of employee : "<<i+1<<endl;
				cout<<"Employee name : "<<e[i].name<<endl;
				cout<<"Employee ID : "<<e[i].id<<endl;
				cout<<"Employee Adress : "<<e[i].address<<endl;
				cout<<"Employee Contact : "<<e[i].contact<<endl;
				cout<<"Employee Salary : "<<e[i].salary<<endl;
				cout<<"\nEnter new data : "<<endl;
				cout<<"Employee name : ";
				cin>>e[i].name;
				//getline(cin,e[i].name);
		
				cout<<"Enter address: ";
				cin>>e[i].address;
				//getline(cin,e[i].address);
		
				cout<<"Enter contact: ";
				cin>>e[i].contact;

				cout<<"Enter salary: ";
				cin>>e[i].salary;
				//cout<<e[i].address;
				break;
			}
			if(i==total-1)
			{
				cout<<"No such record found"<<endl;
			}
		}
	}
	else
	{
		cout<<"\n\n\t\tYour record is empty "<<endl;
	}
	system("pause");
	system("cls");
	
}
void del()
{
	system("cls");
	if(total!=0)
	{
		char user;
		cout<<"Press 1 to Delete full record "<<endl;
		cout<<"Press 2 to Delete Specific record "<<endl;
		user=getch();
		if(user=='1')
		{
			total=0;
			cout<<"All record is Deleted .....!!!"<<endl;
		}
		else if (user=='2')
		{
			string id;
			cout<<"Enter ID of emplyoee which you want to delete  : "<<endl;
			cin>>id;
			
			for(int i=0;i<total;i++)
			{
				if (id==e[i].id)
				{
					for(int j=i;j,total;j++)
					{
						//rewrite of data is done 
						e[j].name=e[j+1].name;
						e[j].id=e[j+1].id;
						e[j].address=e[j+1].address;
						e[j].contact=e[j+1].contact;
						e[j].salary=e[j+1].salary;
						total--;
						cout<<"your required recordcis deleted "<<endl;
						break;
				    }
				  		 if(i==total-1)
						{
							cout<<"No such record found"<<endl;
						} 
				}
			}	
		}
	}
	else 
	{
		cout<<"\n\n\t\tYour record is empty "<<endl;
	}
	system("pause");
	system("cls");
}

int main()
{
	system("cls");
	cout<<"\n\n\t\t EMPLYOEE MANAGEMENT SYSTEM "<<endl;
	cout<<"\t <<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
	cout<<"\n\n\t\t ***SIGN UP*** "<<endl;
	string username,password;
	cout<<"\n\n\t\t Enter Username : ";
	cin>>username;
	//getline(cin,username);
	cout<<"\n\n\t\t Enter Password : ";
	cin>>password;
	cout<<"\n\n\t\t Your ID is creating please wait ";
	for(int i=0;i<2;i++)
	{
		cout<<" .";
		Sleep(1000);
	}
	system("CLS");
	cout<<"\n\n\t\t Your ID is created sucessfully !!!! THANKS "<<endl;
	cout<<"\n\n\t\t ";
	system("pause");
	system("CLS");
	start :
	system("CLS");	
	cout<<"\n\n\t\t EMPLYOEE MANAGEMENT SYSTEM "<<endl;
	cout<<"\n\n\t\t Sign-in "<<endl;
	string username1,password1;
	cout<<"\n\n\t\t Enter Your Username: ";
	cin>>username1;
	//getline(cin,username1);
	cout<<"\n\n\t\t Enter Your Password: ";
	cin>>password1;
	if(username1==username&&password1==password)
	{
		system("CLS");
		char user;
		while(1)
		{
			cout<<"\nPress 1 to enter data "<<endl;
			cout<<"Press 2 to show data "<<endl;
			cout<<"Press 3 to search data "<<endl;
			cout<<"Press 4 to update data "<<endl;
			cout<<"Press 5 to delete data "<<endl;
			cout<<"Press 6 to logout "<<endl;
			cout<<"Press 7 to exit .. "<<endl;
			user=getch();
			system("CLS");
			switch (user)
			{
				case '1':
					entdata();
					break;
				
				case '2':
					show();
					break;
				
				case '3':
					search();
					break;
				
				case '4':
					update();
					break;
					
				case'5':
					del();
					break;
					
				case '6':
					goto start;
					break;

				case '7':
					cout<<"Thank you "<<endl;
					exit(0);
					break;	
				default:
					cout<<"\a INVALID INPUT ..."<<endl;
					break;
					
					
					
			}
		}	
	}
	else if (username1!=username)
	{
		cout<<"\n\n\t\t \aYour Username is Incorrect "<<endl;
		Sleep(3000);
		system ("CLS");
		goto start;
	}
	
	else if (password1!=password)
	{
		cout<<"\n\n\t\t \aYour Password is Incorrect "<<endl;
		Sleep(3000);
		system ("CLS");
		goto start;
	}
	return 0;
}
