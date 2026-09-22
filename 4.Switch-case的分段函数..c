#include<stdio.h>

int main()
{  

    int x,f,n;
    printf("ÇëÊäÈëxµÄÖµ£º"); 
    scanf("%d",&x);
    if(x<0){ n = 1;}
    else if(x==0){ n = 2;}
    else { n = 3;}
    
    
    
    
    
    
    
    
    
    switch(n){
    
    case 1:
    f=-1;
    printf("f(x)=%d",f);
    break;
    
    case 2:
    f=0;
    printf("f(x)=%d",f);
    break;
    
    case 3:
    f=2*x;
    printf("f(x)=%d",f);
    break;
    
    
    
    }
    
    
    return 0;
}
