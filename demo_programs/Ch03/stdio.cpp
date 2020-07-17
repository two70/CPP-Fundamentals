// demonstrates standard input and output
// specifically >> and getline
// compile and run the program as it is
// fix it by uncommentint cin >> line, so the getline works propertly!

#include <iostream>
#include <string>

using namespace std;

int main() {
    float n1, n2;
    char ch;
    string name;
    cout << "Enter two numbers separated by comma: ";
    // parse the input stream
    // >> reads and discards leading whitespace until printable character is found
    cin >> n1 >> ch >> n2; // leaves behind \n
    // ws makes the input wait until non-whitespace character is found
    // need to use it carefully!
    cout << n1 << " + " << n2 << " = " << n1+n2 << endl;
    cout << "Hi, what's your name?: ";
    //cin >> ws; // discard any whitespace character and stop at the character
    getline(cin, name);
    cout << "Nice meeting you, " << name << endl;
    cout << "Good bye...\n";
    return 0;
}