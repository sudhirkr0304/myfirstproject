#include<stdio.h>
#include<math.h>
int main()
{
	printf("\n\t\tDO NOT USE SPACE\n\n");
	int *fp;
	fp=fopen("sudhir.txt","w");
	if(fp==NULL)
	{
		printf("file cannot exist !");
	}
	int i,sum=0,sum2;
	char name[100];
	printf(" NAME :");
	gets(name);
	fprintf(fp,"%s\n",name);

	
	for(i=0; name[i];i++)
	{
		if(name[i]>64 && name[i]<91)
		{}
		if( name[i]>96 && name[i]<123)
		{}
		else
		{
			printf(" ERROR NAME !");
			exit(1);
		}
	}
	
	
	for(i=0;name[i];i++)
	{
		if(name[i] !=' ')
		{
		sum=sum+name[i];
	    }
	
	}
	
	
		int dob,n,sum1=0;
	printf(" DOB  :");
	scanf("%d",&dob);
	fprintf(fp,"%d",dob);
	fclose(fp);
	int l,days=0,month=0,year=0,rem;
	int x;
	for(i=1;i<=4;i++)
	{
	 l=pow(10,i-1);
	 rem=dob%10;
	 year=year+ l*rem;
	 dob=dob/10;
	}
		for(i=1;i<=2;i++)
	{
	 l=pow(10,i-1);
	 rem=dob%10;
	 month=month+ l*rem;
	 dob=dob/10;
	}
		for(i=1;i<=4;i++)
	{
	 l=pow(10,i-1);
	 rem=dob%10;
	 days=days+ l*rem;
	 dob=dob/10;
	}
    if(month>12 && month<0)
    {
    	printf( "  ERROR DOB");
    	exit(1);
	}
	
	if(year%400==0)
	{x=1;}
	else if(year%100==0)
	{x=2;}
	else if(year%4==0)
	{x=1;}
	else
	{x=2;}

	if(x==1 && month==2)
	{
		if(days>29 || days<0)
		{
			printf( "  ERROR DOB");	
			exit(1);
		}
	}
	if(x==2 && month==2)
	{
		if(days>28 || days<0)
		{
			printf( "  ERROR DOB");	
			exit(1);
		}
	}
	
    if((x==1 || x==2 ) &&  (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ) )
	{
		if(days>31 || days<0)
		{
			printf( "  ERROR DOB");	
			exit(1);
		}
	}
	if((x==1 || x==2 ) &&  (month==4 || month==6 || month==9 || month==11 ) )
	{
		if(days>30 || days<0)
		{
			printf( "  ERROR DOB");	
			exit(1);
		}
	}
	
		
	if(year>2018)
	{
		printf( "  ERROR DOB");	
		exit(1);
	}
	
		while(dob>0)
	{
	 n=dob%10;
	 sum1=sum1+n;
	 dob=dob/10;
	}
    sum2=sum+sum1*10;
     if(sum2<1000)
     {
     	printf("\n\t You're an awesome friend.\nYou're a gift to those around you..\n\n");
	 }
	 if(sum2>1000 && sum2<1200)
	 {
	 	printf("\n\tYou're a smart cookie.You are awesome!\n\n");
	 }
	 if(sum2>1200 && sum2<1400)
	 {
	 	printf("\n\tYou have impeccable manners.You have the best laugh.\n\n");
	 }
	 if(sum2>1400 && sum2<1600)
	 {
	 	printf("\n\tYou are the most perfect you there is.I appreciate you.\n\n");
	 }
	 if(sum2>1600 && sum2<1800)
	 {
	 	printf("\n\tnYou are enough.You are enough.\n\n");
	 }
	 if(sum2>1800 && sum2<2000)
	 {
	 	printf("\n\tYour perspective is refreshing.I'm grateful to know you.\n\n");
	 }
	 if(sum2>2000 && sum2<2500)
	 {
	 	printf("\n\tYou deserve a hug right now.You should be proud of yourself.\n\n");
	 }
	 if(sum2>2500)
	 {
	 	printf("\n\t YOUR NAME IS TOOO.. BIG \n\n");
	 }
	 
    
}
