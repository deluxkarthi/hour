#include<stdio.h>
#include<math.h>
int main()
{
int h2,m2,h3,m3;
scanf("%d %d\n%d %d",&h2,&m2,&h3,&m3);
h2=abs(h2-h3);
m2=abs(m2-m3);
printf("%d %d",h3,m3);
return 0;
}

