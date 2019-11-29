#include <stdio.h>

//只需要记忆前面2个数
__int64 fb2(__int64 a,__int64 b,__int64 n)
{
    if(n==0)
    {
        return a;
    }

    if(n==1)
    {
        return b;
    }


    __int64 pre = a;
    __int64 next = b;
    __int64 temp = 0;
    for(__int64 i=2; i<=n; i++)
    {
        temp = next;
        next = pre*next % 1000000007;
        pre = temp;
    }

    return next;


}


__int64 main()
{
    __int64 a,b,n;
    scanf("%%I64d %%I64d %%I64d",&a,&b,&n);
    __int64 res = fb2(a,b,n);
    printf("%d",res);
    return 0;
};


