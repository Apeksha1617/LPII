 #include <iostream>
#include<stdlib.h>
#define max 5
using namespace std;
int main(){
int queue[max],front=0,rear=-1,ch=0;
int data,temp,count=0,count1,front1;
//clscr();
do
{
cout<<"\n1 Enqueue-insert the element";
cout<<"\n2 dequeue-delete the element";
cout<<"\n3 display the queue";
cout<<"\n4 quit";
cout<<"\n Enter your choice";
cin>>ch;
switch(ch)
{
case 1 :
if(count==max)
 cout<<"queue is full";
else {
cout<<"enterdata ";
cin>>data;
rear=(rear+1)%max;
queue[rear]=data;
count++;
}
count1=count;
break;
case 2 :
if(count==0)
 cout<<"\nqueue is empty";
else {
data=queue[front];
cout<<data<<"is deleted \n";
front=(front+1)%max;
count--;
}
front1=front;
break;

case 3 :
count1=count;
front1=front;
if(count1==0)
cout<<"\nqueue is empty";
else {
while(count1>0)
{
cout<<queue[front1]<<" ";
front1=(front1+1)%max;
count1--;
}
}
break;
case 4 :
exit(0);
}
cout<<"continue[1/0]";
cin>>ch;
}
while(ch==1);

}

