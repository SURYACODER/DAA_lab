#include<iostream>
using namespace std;
int main(){
    int rows,columns,a[100][100],b[100][100],c[100][100],i,j;
    cout<<"enter number of rows and colunms : ";
    cin>>rows>>columns;
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < rows; ++i)
        for(j = 0; j < columns; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < rows; ++i)
        for(j = 0; j < columns; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }   
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"After addition Matrix is:\n";
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cout<<c[i][j]<< " ";
        }
        cout<<"\n";
    }
}