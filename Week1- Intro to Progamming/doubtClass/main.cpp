#include <iostream>

using namespace std;

int main(){
    int a = 5;



    int val = (++a) * (a++) + (--a) * (a--);
    cout<<val <<endl;

    int b = 5;


    int val2 = (--b) * (b--);

    //this will be an ambiguous statement as the value of b changes too kmuch 
    

    

    
    cout<<val2 <<endl;

    return 0;

    
}