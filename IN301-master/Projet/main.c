//
//  main.c
//  facc
//
//  Copyright (c) 2017 jilink. All rights reserved.
//

#include <stdio.h>

void egypte(int x,int y)
{
    int r = y;
    printf("%i X %i\n", x, y);
    while (x>1)
    {
        if (x%2==1)
        {
            x = x-1;
            printf("= %i X %i + %i\n", x, y,r);
        }
        
        else
        {
            x = x/2;
            y = y*2;
            printf("= %i X %i + %i\n", x, y,r);
            if (x>2)
            {
                r=r+y;
            }
        }
        
    }
    printf("= %i\n",x*y+r);
    
}

void premier(int p)
{
    int test=1;
    int a =(p/2);
    if (p==1)
    {
        printf("1 n'est pas un nombre premier contrairement à ce qu'on peut penser ://///\n");
    }
    else
    {
        while (a>1 && test==1)
        {
            test = p%a>0;
            a=a-1;
        }
        
        
        
        if (test)
        {
            printf("C'est un nombre premier :)\n");
        }
        else
        {
            printf("Ce n'est pas un nombre premier ://///\n");
        }
    }
   
}

int ami(int m, int n)
{
    int a = n/2;
    int b=m/2;
    int f=0;
    int g =0;
    
    while (a>0)
    {
        if (n%a==0)
        {
            f=f+a;
        }
        a=a-1;
    }
    while (b>0)
    {
        if (m%b==0)
        {
            g=g+b;
        }
        b=b-1;
    }
    
    if (f==m && g==n)
    {
       // printf("Ces deux nombres sont amis ;) \n");
        return 1;
    }
    else
    {
        //printf("Ah ces deux nombres ne sont pas amis :'( \n");
        return 0;
    }

    
}

void amilist(int nm)
{
    int m = nm;
    int n = nm;
    while (m>0)
    {
        while (n>0)
        {
            if (ami(m,n))
            {
                printf("(%i,%i)\n",n,m);
            }
            n=n-1;
            
        }
    
        m=m-1;
        n=m;

            
    }
}

void multi(int a)
{
    int t = 0;
    
    while (a>0)
    {
        if (a%3==0)
        {
            t=t+a;
            a=a-1;

        }
        else if (a%5==0)
        {
            t=t+a;
            a=a-1;
            
        }
        else
        {
            a=a-1;
            
        }
        
    }
    printf("%i\n",t);
}



int main(int argc, const char * argv[]) {
    // insert code here...

    multi(999);
   
    
   
    return 0;
}
