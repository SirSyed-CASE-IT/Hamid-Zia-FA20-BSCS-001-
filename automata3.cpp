#include<iostream>
#include<string.h>
using namespace std;

void strings()
{
		string str;
	
			cout<<"ENTER YOUR STRING: "<<endl;
			cin>>str;
			
		
			for(int n=0;  n<str.length();  n++)
			if(str[0]=='a'  ||   str[1]=='b')
			{
				if(str[1]=='a'  || str[1]=='b'||  str[1]=='c')
				cout<<"YOUR STRING IS CORRECT. \n";
			}
			else
			{
				cout<<"YOUR STRING IS NOT CORRECT. \n";
			}
			
			if(str[0]=='c')
			{
			   if(str[1]=='b' || str[1]=='c')
				{
            		if(str[1]=='a' || str[1]=='b' || str[1]=='c')
               		{
               
            	    }
                	cout << "YOUR STRING IS CORRECT.\n";;
				}	
			}
			
		}
		

int main()
{
	strings();
}

