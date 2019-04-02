#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string cmd, url;
    for(int i = 1; i <= t; i++)
    {
        stack<string>f;
        stack<string>b;
        url = "http://www.lightoj.com/";
        cout<<"Case "<<i<<":"<<endl;
        while(1)
        {
            cin>>cmd;
            if(cmd == "QUIT")
                break;
            else if(cmd == "VISIT")
            {
                while(!f.empty())
                    f.pop();
                b.push(url);
                cin>>url;
                cout<<url<<endl;
            }
            else if(cmd == "BACK")
            {
                if(b.empty())
                    cout<<"Ignored"<<endl;
                else
                {
                    f.push(url);
                    url = b.top();
                    cout<<url<<endl;
                    b.pop();
                }
            }
            else
            {
                if(f.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    b.push(url);
                    url = f.top();
                    cout<<url<<endl;
                    f.pop();
                }
            }
        }
    }
    return 0;
}
