#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    string s;

    cin>>n;
    cin>>s;

    for (int i = 0; i < n; ++i)
    {
        s[i] = tolower(s[i]);
    }

    sort(s.begin(),s.end());

    for (int i = 0; i < n; ++i)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }

    if(count==26)
    {
        cout<<"YES";
    }
    else cout<<"NO";

    return 0;
}



