#include <stdio.h>

//递归
int fb(int n)
{
    if(n<1)
    {
        return 0;
    }
    if(n==1 || n==2)
    {
        return 1;
    }
    return fb(n-1)+fb(n-2);
}

//只需要记忆前面2个数
int fb2(int n)
{
    if(n<1)
    {
        return 0;
    }
    if(n==1 || n==2)
    {
        return n;
    }

    int pre = 1;
    int next = 1;
    int temp = 0;
    for(int i=3; i<=n; i++)
    {
        temp = next;
        next = pre+next;
        pre = temp;
    }

    return next;


}


int main()
{
    int n;
    scanf("%d",&n);
    int res = fb2(n);
    printf("%d",res);
    return 0;
};


