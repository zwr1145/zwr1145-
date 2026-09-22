#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//设计算机给出的数字为a
//用户猜的数字为b
//count代表猜的次数
int main(){
srand(time(0));
int count=0,b=0;
int a=rand()%100+1;
printf("主人，准备好猜数了喵，范围是1-100喵\n");
int mima=114514,MIMA;
printf("主人请输入密码喵\n");
scanf("%d",&MIMA);
if(MIMA!=mima){
printf("你是傻逼吗，密码都输不对还猜你吗个头，滚出去");
    return 0;
}
do{
    printf("曹尼玛赶紧给老子猜一个1到100的数：\n");
    scanf("%d",&b);
    count++;
    if(b>a){
    printf("傻逼，你他妈就知道瞎几把猜，猜的数大了你不知道吗\n");}
    else if(b<a){
    printf("我看你他妈是猜不对了，数猜小了傻逼\n");}
}while (b!=a);
    printf("恭喜主人猜对了喵\n");
    printf("主人好棒，用%d次就猜到我给的数了喵\n",count);



    return 0;
}#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//设计算机给出的数字为a
//用户猜的数字为b
//count代表猜的次数
int main(){
srand(time(0));
int count=0,b=0;
int a=rand()%100+1;
printf("主人，准备好猜数了喵，范围是1-100喵\n");
int mima=114514,MIMA;
printf("主人请输入密码喵\n");
scanf("%d",&MIMA);
if(MIMA!=mima){
printf("你是傻逼吗，密码都输不对还猜你吗个头，滚出去");
    return 0;
}
do{
    printf("曹尼玛赶紧给老子猜一个1到100的数：\n");
    scanf("%d",&b);
    count++;
    if(b>a){
    printf("傻逼，你他妈就知道瞎几把猜，猜的数大了你不知道吗\n");}
    else if(b<a){
    printf("我看你他妈是猜不对了，数猜小了傻逼\n");}
}while (b!=a);
    printf("恭喜主人猜对了喵\n");
    printf("主人好棒，用%d次就猜到我给的数了喵\n",count);



    return 0;
}
