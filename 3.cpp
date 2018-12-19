#include <iostream>

using namespace std;

int main()
{   
    //setting the seed
    std::srand(time(NULL));
    
    //creating an array to store the frequencies
    int frequency[6] = {0};
    
    int rolled, random;
    for (int i=0;i<1000;i++){
        random = rand();
        rolled = random%6;;
        frequency[rolled]++;
    }
    for (int i=0;i<6;i++){cout<<frequency[i]<<"\n";}
    return 0;
}
