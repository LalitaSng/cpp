#include <iostream>

using namespace std;

int main()
{
    string s1="ramesh kumar";
    string s2="";
    int i;
    for( i=0;i<s1.length();i++){
        s2+=s1[i];
    } 
    cout<<s2;

    return 0;
}

