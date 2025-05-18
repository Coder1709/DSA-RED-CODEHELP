#include <iostream>

using namespace std;

int main(){
    char arr[20] ;

    char arr2[20] ;

    cin>>arr;

    for(int i = 0 ; i < 5 ; i++){
        char ch;
        cin>>ch;
        arr2[i] =ch;
    }

    cout<<arr<<endl;

    cout<<arr2<<endl;
}
