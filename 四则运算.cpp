#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int moshi;
int count;
void plus(int first,int second)
{
 int result;
    printf("%d + %d =",first,second);
 scanf("%d",&result);
 if(result == first+second)
 {
  printf("Right!\n");
 }
 else
 {
  printf("wrong!\nThe correct answer is:%d\n",first+second);
 }
}
void minus(int first,int second)
{
 int result;
    printf("%d - %d =",first,second);
 scanf("%d",&result);
 if(result == first-second)
 {
  printf("Right!\n");
 }
 else
 {
  printf("wrong!\nThe correct answer is:%d\n",first+second);
 }}
void multiply(int first,int second)
{
 int result;      //运算结果
    printf("%d * %d =",first,second);
 scanf("%d",&result);
 if(result == first*second)
 {
  printf("Right!\n");
 }
 else
 {
  printf("wrong!\nThe correct answer is:%d\n",first*second);
 }
}
void divide(int first,int second)
{
 float result;      //运算结果
 float temp;
 second = rand()%100;
    printf("%d / %d =",first,second);
 if(second==0)
 {
  printf("Error!\n");
  return;
 }
 scanf("%f",&result);
 temp=result*100 - ((float)first/(float)second)*100;
 if(abs(temp)<0.01)
 {
  printf("Right!\n");
 }
 else
 {
  printf("wrong!\nThe correct answer is:%f\n",(float)first/(float)second);
 }
}
int  main()
{
 printf("小提示:\n每种模式默认运行5次就得重新选择,中途退出直接按Ctrl+c!\n");
p:  printf("请选择模式:\n\n");
 printf("----------1:练习模式\n");
    printf("----------2:计算模式\n");
 count=0;
 scanf("%d",&moshi);
 switch(moshi)
 {
 case 1: 
  {   int n;
   int first,second;//保存两个运算的数字
   while(true)
   {
     n=first%4;    //除以4取余数，随机确定调用函数
     srand(time(NULL));
     first = rand()%100;
        second = rand()%100;
     if(count==5)
      goto p;
       switch(n)
     {
    
    case 0:
     {
      plus(first,second); 
      count++;
      break;
     }
    case 1:
     {
      minus(first,second);
      count++;
      break;
     }
    case 2:
     {
      multiply(first,second);
      count++;
      break;
     }
    case 3:
     {
      divide(first,second); 
      count++;
      break;
     }
    default:
     {
      count++;
      break;
     }
    }//switch
   }//while
  }//case1
 case 2:
  {
   int first,second;
         char c,c1;  //保存运算符
         while(true)
   { 
    scanf("%d%c%d%c",&first,&c,&second,&c1);
    if(count==5)
      goto p;
    switch(c)
    {
    case '+':
     {
      printf("%d+%d=%d\n",first,second,first+second);
      count++;
      break;
     }
    case '-':
     {
      printf("%d-%d=%d\n",first,second,first-second);
      count++;
      break;
     }
    case '*':
     {
      printf("%d*%d=%d\n",first,second,first*second);
      count++;
      break;
     }
    case '/':
     {
      printf("%d/%d=%f\n",first,second,(float)first/(float)second);
      count++;
      break;
     }
    default:
     {
      count++;
      break;
     }
    }//switch
   }//while
  }//case2
 default:
  {
   break;
  }
 }
    return 0;
}