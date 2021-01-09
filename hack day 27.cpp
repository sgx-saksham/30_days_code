#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int dd1, mm1, yy1;
    int dd2, mm2, yy2;
    
    cin >> dd1 >> mm1 >> yy1 >> dd2 >> mm2 >> yy2;
    
    if ( yy1 > yy2 ) {
        cout << 10000;
    } else if ( yy1 == yy2 ) {
        if ( mm1 > mm2 ) {
            cout << ((mm1 - mm2) * 500);
        } else if ( mm1 == mm2 ) {
            if ( dd1 > dd2 ) {
                cout << ((dd1 - dd2) * 15);
            } else {
                cout << 0;
            }
        } else {
            cout << 0;
        }
    } else {
        cout << 0;
    }
  
    return 0;
}

