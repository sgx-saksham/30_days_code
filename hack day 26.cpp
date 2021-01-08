#include <bits/stdc++.h>

using namespace std;

bool prime(int );

int main() 
{
    int n, i;
    bool f;
    cin >> n;
    
    vector<int> arr(n);
    while(n-- > 0)
    {
        cin >> arr[i];
        bool f = prime(arr[i]);
        
        if(f)
        {
            cout<<"Prime"<<endl;
        }
        else
        {
            cout<<"Not prime"<<endl;
        }
    }    
    return 0;
}

bool prime(int n)
{
    int i ,sqr;
    if(n == 1)
    {
        return false;
    }
    if(n == 2)
    {
        return true;
    }
    sqr = sqrt(n);
    for(i = 2; i <= sqr; ++i )
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
        
}
