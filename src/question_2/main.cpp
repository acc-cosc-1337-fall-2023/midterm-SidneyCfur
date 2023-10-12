#include "question2.h" 
#include <iostream>
using std::cout; using std::cin;
int main()
{
    auto choice = 0;
    auto exit = 'n';
	
    do
    {
    cout<<"Enter a number for the amount of cookies \n\n";
	cin>>choice;
    std::vector<double> cookies = get_cookie_ingredients(choice);

    for(auto i = 0; i < 3; i++)
    {
        cout<<cookies[i]<<"  \n";
    }
    
    
	
	cout<<"Do you want to exit? (y/n)\n";
	cin>>exit;
    } while (exit == 'n' || exit == 'N');
    
	
	
	
    return 0;
}