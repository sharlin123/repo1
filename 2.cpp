#include<bits/stdc++.h>
using namespace std;
int main()
{// maps program
    map<string,float>g;
    string a;
    for(int j=0;j<10;j++)
    {
        cin>>a;
        g[a]++;
    }

   /* g.insert(pair <char,int> ('a',40));
    g.insert(pair <char,int> ('b',40));
    g.insert(pair <char,int> ('c',40));
    g.insert(pair <char,int> ('d',40));
    g.insert(pair <char,int> ('e',40));
    g.insert(pair <char,int> ('f',40));
    g.insert(pair <char,int> ('g',40));*/



    map<string,float> :: iterator i;
    for(i=g.begin();i!=g.end();++i)
        cout<<'\t'<<i->first<<'\t'<<i->second<<'\n';
    cout<<endl;

}
