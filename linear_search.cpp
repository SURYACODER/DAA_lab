#include<iostream>
using namespace std;
void linear_search(int a[],int size,int key);
int main(){
    int i,a[100],r,s;
    cout<<"enter the size of array"<<endl;
    cin>>s;
    cout<<"enter the elements"<<endl;
    for(i=0;i<s;i++)
    cin>>a[i];
    cout<<"enter the element for searching"<<endl;
    cin>>r;
    linear_search(a,s,r);

}
void linear_search(int a[],int size,int key){
    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]==key)
        {
        cout<<"element found at "<<i+1<<" position"<<endl;
        break;
        }
    }
    if(i==size)
    cout<<"element not there in the list"<<endl;
}