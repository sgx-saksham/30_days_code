#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, i;

    cin >> N;
	
	//std::__cxx11 library is used
	regex exp(".+@gmail\\.com$");

    vector<string> strarray;

    for(i = 0; i < N; i++)
 {
        string F_name;

        string E_id;

        cin >> F_name >> E_id;

        if(regex_match(E_id, exp))
 {
            strarray.push_back(F_name);
        }
    }

    sort(strarray.begin(), strarray.end()); 

    for(i = 0; i < strarray.size();i++) 
    { 
        cout << strarray[i] << endl; 
    }

    return 0;
}

