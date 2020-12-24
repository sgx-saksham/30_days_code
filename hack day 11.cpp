//hack day 11
//decimal to bbinary and to find maximum number of 1 in n
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0,maximum=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    while(n)
    {
        if (n&1)
            count++;
        else 
            count = 0;
        if (maximum < count)
            maximum = count;
        n>>=1;
    }
    cout << maximum;
    return 0;
}

