//the main logic is to add 32 to the all letters as difference between uppercase and lower case alphabets is 32
            //that is fist A,B,C,D,E,F...X,Y,Z THEN a,b,c,d,e.....x,y,z 

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
