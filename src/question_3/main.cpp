#include "question3.h"
#include <iostream>
using std::cout; using std::cin;
int main()
{
    auto choice = 0;
    auto exit = 'n';
	
    do
    {
    cout<<"Enter a number between 1 and 15 \n\n";
	cin>>choice;
    if(choice > 0 && choice < 16)
    {
        int num = get_fib_sequence(choice);
        cout<<num<<"\n\n";
    }
    else
    {
        cout<<"Number out of bounds! \n\n";
    }
    
    
	
	cout<<"Do you want to exit? (y/n)\n";
	cin>>exit;
    } while (exit == 'n' || exit == 'N');

    return 0;
}