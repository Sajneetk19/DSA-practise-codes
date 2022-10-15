#include<iostream>
using namespace std;         //hacker rank and hacker earth join
    class student
    {                                //valid marks, sorting, student report card
        public:
        string name;
        float m1,m2,m3;                      
    }s[10];
    int main()
    {
        for(int i=0;i<10;i++)
        {
            cout<<"Enter name:";
            cin>>s[i].name;

            cout<<"Enter marks:";
            cin>>s[i].m1;
            cin>>s[i].m2;
            cin>>s[i].m3;

            cout<<endl;
        }

        for(int i=0;i<5;i++)
        {
            cout<<"\n student:"<<i+1<<endl;
            cout<<"name :"<<s[i].name<<endl;
            cout<<s[i].m1<<endl;
            cout<<s[i].m2<<endl;
            cout<<s[i].m3<<endl;
        }
        return 0;
    }



