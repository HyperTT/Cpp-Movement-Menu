#include <iostream>
using namespace std;

int main ()
{
    int choice;
    do
    {
        cout<<"Which direction would you like to move?\n";
        cout<<"[8] North\n";
        cout<<"[4] West\n";
        cout<<"[2] South\n";
        cout<<"[6] East\n";
        cout<<"[0] Exit\n";
        cin>>choice;
        if (choice == 8)
            cout<<"You moved north.\n";
        else if (choice == 4)
            cout<<"You moved west.\n";
        else if (choice == 2)
            cout<<"You moved south.\n";
        else if (choice == 6)
            cout<<"You moved east.\n";
    }
    while(choice != 0);
    return 0;
}
