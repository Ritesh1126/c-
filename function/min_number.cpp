#include<iostream>
using namespace std;

void minimumnumber()
{
    int x , y;
    cout<<"Enter number :";
    cin >> x>>y;

    if (x < y)
    {
        cout<< " x is minimu " << x << endl;
    }
    else {
        cout <<"y is minumum" <<y <<endl;
    }
    
}

int main ()
{

    minimumnumber();
    return 0;

}