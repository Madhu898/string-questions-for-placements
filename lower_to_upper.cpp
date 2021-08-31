#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int l;
    cout<<"enter an string "<<endl;
    getline(cin,s);
    l=s.length();
    //cout<<'a'-'A';=32
   for(int i=0;i<l;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    } 
    cout<<"the capitalized string is "<<s<<endl;
    return 0;
}