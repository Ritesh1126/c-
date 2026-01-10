#include<iostream>
using namespace std;
int main ()
{
    int pasandtumhari;
    cout <<"enter number between 1 to 5:";
    cin >> pasandtumhari;

    switch (pasandtumhari)
    {
    case 1:
        cout << "You selected option 1." << endl;
        break;
    case 2:
        cout << "You selected option 2." << endl;
        break;
    case 3:
        cout << "You selected option 3." << endl;
        break;
    case 4:
        cout << "You selected option 4." << endl;
        break;
    case 5:
        cout << "You selected option 5." << endl;
        break;
    default:
        break;
    }
}