#include<iostream>

using namespace std;

int main()
{
    string s;
    int higher=0, lower=0;

    cin>>s;

    for(int i=0; i< s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            higher++;
        }
        else
        {
            lower++;
        }
    }

    if(lower<higher)
    {
        for(int i=0; i< s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i]-32;
            }
        }
    }
    else
    {
        for(int i=0; i< s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i]+32;
            }
        }
    }

    cout<<s;

    return 0;
}
