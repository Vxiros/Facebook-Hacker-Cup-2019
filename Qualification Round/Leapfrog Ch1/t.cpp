#include <iostream>
#include <list>

using namespace std;

int main(void) {
    char c;
    c = getchar();
    while(c!='\n') {
        cout << c << endl;
        c = getchar();
    }
    //cout << c << endl;
    return 0;
}