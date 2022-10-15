// / -----------define max 10------------/

// maintains the LIFO [last in first out]
#include<iostream>            // add means push and delete means pop
using namespace std;
class mystack
{
    int top;
    int a[size];
    public:mystack()
    {
        top=-1;
    }
    int push(int x)
    { 
        top++;
        if (top==size)
        {
        cout<<"stack is full/overflow";
        return 0;
        }
        else{
            a[top]=x;
            return 1;

        }
    }
       
        int pop()
        {
            int item;
            if(top=-1)
            cout<<"underflow";
            else{
                item =a[top];
                top=top-1;
               }
            
        }
        return a[top];
};

// #include<iostream>
// using namespace std;
// class employee
// {
//     int eid,esal;
//     string ename;


// public:employee()
// {
//     eid=-5;
//     esal=0;
//     ename="xxxx";
// }
// employee(int x,int p,string s)
// {
//     eid=x; esal=p; ename=s;
// }
// void disp(){
// cout<<-------;
// }
// };

// stack<employee>st;
// st.push(new employee(101,5000,"AB"))
// st.push(new employee)
// employee e2(201,50020,"yyyy");
// st.push(e2);
