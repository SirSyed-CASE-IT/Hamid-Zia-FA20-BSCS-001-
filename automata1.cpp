#include <bits/stdc++.h>
using namespace std;

void q1(string, int);
void q2(string, int);
 
void q1(string str, int n)
{
 
    if (n == str.length()) 
	{
        cout << "THE GIVEN STRING IS ACCEPTED BY DFA:) \n";
        return;
    }
 
 
 
    if (str[n] == 'a')
        q1(str, n + 1);
        
    else
        q2(str, n + 1);
}
 

void q2(string str, int n)
{
    if (n == str.length()) 
	{
        cout << "THE GIVEN STRING IS NOT ACCEPTED BY THE DFA:(  \n";
        return;
    }
 



    if (str[n] == 'a')
        q1(str, n + 1);
        
    else
        q2(str, n + 1);
}
 
void q3(string, int);
void q4(string, int);

void q3(string str, int n)
{
    if (n == str.length()) {
        cout << "THE GIVEN STRING IS ACCEPTED BY DFA:) \n";
        return;
    }
 
    if (str[n] == 'a')
        q4(str, n + 1);
    else
        q3(str, n + 1);
}
 

void q4(string str, int n)
{

    if (n == str.length()) {
        cout << "THE GIVEN STRING IS NOT ACCEPTED BY THE DFA:(  \n";
        return;
    }
 
    if (str[n] == 'a')
        q4(str, n + 1);
    else
        q3(str, n + 1);
}
 
void q0(string str, int n)
{
 
    if (n == str.length()) {
        cout << "THE GIVEN STRING IS NOT ACCEPTED BY THE DFA:( \n";
        return;
    }
 

    if (str[n] == 'a')
        q1(str, n + 1);
    else
        q3(str, n + 1);
}
 
int main()
{
    string str = "abbaabaaa";
    q0(str, 0);
}
