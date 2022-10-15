// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//      int i=1;
//     while(i<=n){
//         cout<<i<<" ";
//         i=i+1;
//     }
//     return 0;
// }

//sum of even numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int sum=0;

    while(i<=n){
        if(i%2==0)
        sum=sum+i;
        i=i+1;

    }
cout<<"value of sum is "<<sum<<endl;

    return 0;
}