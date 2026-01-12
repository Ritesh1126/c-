#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int firstterm =0, secterm = 1, nextterm;
    for (int i = 1; i<= n ; i++)
    {
        cout<<firstterm<<",";
        nextterm = firstterm + secterm;
        firstterm = secterm;
        secterm = nextterm;
        
    }
}