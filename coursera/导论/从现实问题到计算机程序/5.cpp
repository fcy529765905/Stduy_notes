#include<iostream>
using namespace std;
int main(){
    int a[1000],n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
        for (int i = 0; i < n; i++)
    {
        cout<<a[n-1-i]<<' ';
    }
    return 0;
} 