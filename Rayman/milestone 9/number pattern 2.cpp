#include<iostream>
using namespace std;
int main()
{
    int rows, i, j;
    cout<<"enter number of rows : ";
    cin>>rows;

    for(i=rows; i>=1; i--)
    {
        for(j=i; j<=rows; j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
