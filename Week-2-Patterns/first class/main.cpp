//first we did


#include <iostream>
#include <string>

using namespace std;




char toUpperCase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    cout << "Uppercase: " << toUpperCase(c) << endl;
    cout << "Lowercase: " << toLowerCase(c) << endl;

    return 0;
}


//wsat that convert a upper case character into a lower case character


void convertTOLC(char ch){

    char ch = ch -'A'+'a';

    cout<<ch<<endl;
}
