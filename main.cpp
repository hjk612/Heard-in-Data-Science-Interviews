/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str = "-3878973";
    int n = 0;
    int start_index = 0;
    int sign = 1;
    if (str.at(0) == '+' || str.at(0) == '-'){
        start_index = 1;
    }
    if (str.at(0) == '-'){
        sign = -1;
    }
    
    for (int i = start_index; i<str.size(); i++){
        //cout<<str.at(i)<<"\n";
        n *= 10;
	//http://www.cplusplus.com/forum/beginner/166060/
        n += str.at(i) - '0';
        cout<<n<<"\n";
    }
    n = sign * n;
    cout<<"Hello World"<<n;

    return 0;
}
