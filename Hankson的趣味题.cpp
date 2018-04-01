#include<conio.h>
#include<stdio.h>
int max(int x,int y)
{
    int z;
    z=(x>y)?x:y;
    return z;
}
int min(int x,int y)
{
    int z;
    z=(x<y)?x:y;
    return z;
}
int yue(int x,int y)
{
    int i,tag=1;
    for(i=1;i<=max(x,y);i++)
    {
              if(x%i==0&&y%i==0)   tag=i;
    }
    return tag;
}
int bei(int x,int y)
{
    int i,tag=x*y;
    for(i=x*y;i>=min(x,y);i--)
    {
              if(i%x==0&&i%y==0)   tag=i;
    }
    return tag;
}
main()
{
      FILE *p1,*p2;
      p1=fopen("son.in","r");
      p2=fopen("son.out","w");
      int n,i,j;
      fscanf(p1,"%d",&n);
      int a0[n+1],a1[n+1],b0[n+1],b1[n+1],tag[n+1];
      for(i=1;i<=n;i++)   tag[i]=0;
      for(i=1;i<=n;i++)
      {
                fscanf(p1,"%d",&a0[i]);
                fscanf(p1,"%d",&a1[i]);
                fscanf(p1,"%d",&b0[i]);
                fscanf(p1,"%d",&b1[i]);
      }
      for(i=1;i<=n;i++)
      {
                for(j=a1[i];j<=b1[i];j++)
                {
                          if(yue(j,a0[i])==a1[i]&&bei(j,b0[i])==b1[i])   tag[i]++;
                }
                fprintf(p2,"%d\n",tag[i]);
      }
}
