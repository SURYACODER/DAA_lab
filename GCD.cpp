#include<iostream>
using namespace std;
int gcd(int x,int y);
int main()
{
    int x,y,g;
    cout<<"enter two numbers"<<endl;
    cin>>x>>y;
    g = gcd(x,y);
    cout<<"gcd of "<<x<<" and "<<y<<" is "<<g<<endl;
    return 0;
}
int gcd(int x,int y){
    if (y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }   
}





