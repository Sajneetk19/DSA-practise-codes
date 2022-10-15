#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class stack{
    private:

    node *top;
    public:
    stack()
    {
        top=NULL;
    }
    void push(int val){
        node* newnode =new node;
        newnode->data =val;
        newnode->next =top;
        top= newnode;

    }
void pop(){
    if(top==NULL)
    cout<<"stack underflow"<<endl;
    else{
        cout<<"the popped element is :-"<<top->data<<endl;
        top= top->next;
    }
}
void display(){
    node *ptr;
    if(top==NULL)
    cout<<"stack is empty";
    else{
        ptr=top;
        cout<<"stack elements are :-.
        ";
        while(ptr !=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        
        }
        cout<<endl;
}
};
//class node* top =NULL;

int main(){
    stack stk;

    stk.push(11);
    stk.push(12);
    stk.push(13);
    stk.push(14);
    stk.push(15);
stk.display();
stk.pop();
stk.display();
return 0;

}

