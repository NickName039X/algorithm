#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
const int MAX = 1010;
char s1[MAX],s2[MAX];
int s[MAX];
int main()
{
    int n, c, m, count = 1;
    scanf("%d ",&n);
    for(int l=0; l<n; l++)
    {
        memset(s1, '\0', sizeof(s1));
        memset(s2, '\0', sizeof(s2));
        memset(s,0,sizeof(s));
        scanf("%s", s1);
        scanf("%s", s2);
        int i = strlen(s1);
        int j = strlen(s2);
        reverse(s1, s1+i);
        reverse(s2, s2+j);
        int k = i > j ? i : j;
        if(i>=j)
        {
            c = 0;
            for(m=0; m<j; m++)
            {

                s[m] = s1[m]-'0'+s2[m]-'0'+c;
                c = s[m]/10;
                s[m] = s[m]%10;
            }
            for(m=j; m<i; m++)
            {
                s[m] = s1[m]-'0'+c;
                c = s[m]/10;
                s[m] = s[m]%10;
            }

        }
        else
        {
            c = 0;
            for(m=0; m<i; m++)
            {

                s[m] = s1[m]-'0'+s2[m]-'0'+c;
                c = s[m]/10;
                s[m] = s[m]%10;
            }
            for(m=i; m<j; m++)
            {
                s[m] = s2[m]-'0'+c;
                c = s[m]/10;
                s[m] = s[m]%10;
            }
        }
        if(c)
            s[k] = c;
        else
            k--;
        reverse(s1, s1+i);
        reverse(s2, s2+j);
        cout<<"Case "<<count<<":"<<endl;
        cout<<s1<<" "<<"+"<<" "<<s2<<" "<<"="<<" ";
        for(i=k; i>=0; i--)
        {
            cout<<s[i];
        }
        if(count<n)
        {
            cout<<endl<<endl;
            cout<<endl<<endl;
        }
        else
            cout<<endl;
        count++;
    }


    return 0;
}
