#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<" Do you want to play a game?(y/n):";
    string response;
    cin>> response;
    cout<< "you entered:" <<response<< endl;
        if(tolower(response [0]) == 'y') //yes
    {
        cout << "let's play a game,then...\n";
    }
    return 0;
}
