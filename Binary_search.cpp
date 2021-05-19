#include<iostream>
using namespace std;
void binary_search(int a[],int size,int key);
int main(){
    int i,a[100],r,s;
    cout<<"enter the size of array"<<endl;
    cin>>s;
    cout<<"enter the elements"<<endl;
    for(i=0;i<s;i++)
    cin>>a[i];
    cout<<"enter the element for searching"<<endl;
    cin>>r;
    binary_search(a,s,r);
}
void binary_search(int a[],int size,int key){
    int low=0,high=size,mid;
    while(low<=high)
    {
      mid = (low+high)/2;
      if(a[mid]==key)
      {
      cout<<"element found at "<<mid+1<<" position"<<endl;
      break;
      }
      else if(key>a[mid])
      low = mid+1;
      else 
      high = mid-1;
    }
    if(low>high)
    cout<<"element not there in the list"<<endl;
}