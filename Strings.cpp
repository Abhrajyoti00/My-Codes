/*  Input Format

You are given two strings separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length respectively.
In the second line print the string produced by concatenating them.
In the third line print two strings separated by a space except that their first characters are swapped.  */

//CODE

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    char t;
    int lena,lenb;
    cin>>a>>b;
    lena=a.size();
    lenb=b.size();
    cout<<lena<<" "<<lenb<<endl;
    cout<<(a+b)<<endl;
    t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<a<<" "<<b<<" ";
    return 0;
}
