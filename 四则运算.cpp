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
 int result;      //������
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
 float result;      //������
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
 printf("С��ʾ:\nÿ��ģʽĬ������5�ξ͵�����ѡ��,��;�˳�ֱ�Ӱ�Ctrl+c!\n");
p:  printf("��ѡ��ģʽ:\n\n");
 printf("----------1:��ϰģʽ\n");
    printf("----------2:����ģʽ\n");
 count=0;
 scanf("%d",&moshi);
 switch(moshi)
 {
 case 1: 
  {   int n;
   int first,second;//�����������������
   while(true)
   {
     n=first%4;    //����4ȡ���������ȷ�����ú���
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
         char c,c1;  //���������
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