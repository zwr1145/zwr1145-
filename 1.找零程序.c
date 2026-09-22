#include<stdio.h>
int main()
{	//输入原价 
	int yuanjia,fukuan;
	printf("本商品原价为:");
	scanf("%d",&yuanjia);
	//顾客第一次付款多少元 
	printf("顾客付款:"); 
	scanf("%d",&fukuan);
	
	int zhaoling=fukuan-yuanjia,zaifu;
	if(zhaoling<0){
	//顾客此时需要再付多少元	
	int chajia=yuanjia-fukuan,zaifu;	
	printf("您需要再付%d元\n",chajia) ;
	//顾客输入再付金额 
	printf("顾客再付:");
	scanf("%d",&zaifu);
	//再付后找零 
	int zhaoling=zaifu+fukuan-yuanjia;
	printf("找您%d元",zhaoling);
	}else{
	
	
	printf("找您%d元",zhaoling);}
	
	
	
	return 0;
 } 
