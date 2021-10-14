#include<studio.h>
int main()
{
printf("enter the mark");
int mark=0;
scanf("%d",&mark);
if(mark<40)
{
printf("Grade F");
}
else if(mark>=40 && mark>54)
{
printf("Grade D");
}
else if(mark>=55 && mark<69)
{
printf("Grade C");
}
else if(mark>=70 && mark<84)
{
printf("Grade B");
}
else
{
printf(""Grade A");
}
       }
