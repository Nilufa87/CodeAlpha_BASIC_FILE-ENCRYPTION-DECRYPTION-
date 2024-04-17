#include<iostream>
using namespace std;
void encrypt(char n[25])
{
    int a;
    cout<<"Enter Your Confusion key : ";
    cin>>a;
    for(char b=0;(b<25 && n[0]!='\0');b++)
    {
        n[b]=n[b]+a;
    }
    cout<<"Your Data is Encrypt : "<<n;
}
void decrypt(char n[25])
{
    int a;
    cout<<"Enter Your defusion key : ";
    cin>>a;
    for(char b=0;(b<25 && n[0]!='\0');b++)
    {
        n[b]=n[b]-a;
    }
    cout<<"Your Data is Encrypt : "<<n;
}
int main(){
int d;
char z[25],m;
while (m!='n')
{

cout<<"Enter your input: ";
cin>>z;
cout<<"Press 1-> for Encrypt : "<<endl;
cout<<"Press 2-> for Decrypt : "<<endl;
cin>>d;
switch(d)
{
    case 1:
    encrypt(z);
    break;
    case 2:
    decrypt(z);
     break;
    default:
    cout<<"Input invalid";

}
cout<<"\n Do you want to run more y\n : ";
cin>>m;
}
}

