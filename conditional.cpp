#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value:"<<endl;
    cin>>a;
    if(a>0){
        cout<< "a is positive";
    }
//     else{
//         if(a<0){
//             cout<<"a is negative";
//         }
//         else{
//             cout<< "a is 0";
//         }
//     return 0;

//     }

// }

else if(a<0){
    cout<<"a is negative"<<endl;
}
else{
        cout<<"a is 0"<<endl;
    }
    return 0;
}




