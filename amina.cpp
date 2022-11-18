//Amina Habib
//BS Data science
//programing fundamentals
//submitted to: ma'am Ayesha Hakim 




#include<iostream>
using namespace std;
int main()
{
int i;
cout<<"By using for loop"<<endl;
for(i =1;i<=10;i++)
{
	if(i==5)
	{
	continue ;
	}
	
	else
	{
	cout<<i*i;
	cout<<endl;
	}
}
cout<<endl;
cout<<"By using while loop"<<endl;

i=1;
while(i<=10)
{
	if(i==5)
	{
		i++;
	continue;
	}
	
	else 
	{
	cout<<i*i;
	cout<<endl;
	}
		i++;
}
cout<<endl;
cout<<"By using do while loop"<<endl;
i=1;
	do{
	if(i==5)
	{
	i++;
	continue ;
	}

	else 
	{
	cout<<i*i ;
	cout<<endl;
	}
	
	i++;
	}
	while(i<=10);
}