//能力有限，此练习仅适用于20以下 
#include<stdio.h>
int main(){
/*用高精度计算出 S=1!+2!+3!+?+n!（n≤50）。

其中 ! 表示阶乘，定义为 n!=n×(n?1)×(n?2)×?×1。例如，5!=5×4×3×2×1=120。

输入格式
一个正整数 n。

输出格式
一个正整数 S，表示计算结果。*/  
int n;
printf("请输入数字：") ; 
scanf("%d",&n); 
long long fact=1,s=0;
int i=1;
do{
	fact*=i;
	i++;	
	s+=fact;
}while(i<=n);
	
	
	printf("%d！=%lld\n",n,fact);
	printf("阶乘总和为：%lld\n",s);
	return 0;
}

