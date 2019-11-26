#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    string s; 
    int sum = 0; 
    int A[256]= {0};
    getline(cin, s);
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (A[int(s[i])] == 0)
            A[int(s[i])] = 1;
    }
    if (accumulate (A,A+256,sum) == len)
        cout << "all are unique";
    else 
        cout << "all are not unique";
}
