#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<< "Do you want to play a game?(y/n):";
    string response;
    cin>>response;
    cout <<"you entered: "<< response<<endl;
    if(response =="y")
    {
        cout<<"let's play a game, then...\n";

    }
    system("pause");
    return 0;

}
