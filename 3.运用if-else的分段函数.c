#include<stdio.h>
int main(){
	//写一个分段函数
	/*f(x)=
	114 x<0
	0   x=0
	514 x>0*/ 
	
	int x = 0;
	printf("请输入x的值=");
	scanf("%d",&x);
	int f=0;
	if (x<0){
		f=114;}	
	else if(x=0){
		 f=0;	
	}
	else{
	f=514;	 		
	}
	printf("f(x)=%d",f);
	
	
	
	return 0;
}
