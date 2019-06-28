#include <iostream>
#include <list>

using namespace std;

list <char> L;
list <char> :: iterator it;

bool calculate_day() {
    int B = 0, unocc = 0;
    it++; //skip A
    char l = *it;
    while (l!='\n') {
        if (l=='B') {
            B++;
        }
        else {
            unocc++;
        }
        it++;
        l = *it;
    }
    it++;
    return ((B>0)&&(unocc>0)&&(B>=unocc));
}

int main(void) {
    int days;
    cin >> days;
    char c;

    int days_read = 0;
    while(days_read <= days) {
        c = getchar();
        if (c=='\n') days_read++;
        L.push_back(c);
    }

    it = L.begin(); it++;

    for(int i=1; i<=days; i++) {
        cout << "Case #" << i << ": ";
        if(calculate_day()) {
            cout << "Y" << endl;
        }
        else {
            cout << "N" << endl;
        }
    }

    return 0;
}