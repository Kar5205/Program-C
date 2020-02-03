#include <stdio.h>
int main(void)
{
   int age ,weiht; 
    char user[50];
    printf("Իմ անունն է: \n");
    scanf("%s",user);
    printf("Իմ տարիքն է: \n");
    scanf("%d",&age);
    printf("իմ քաշն է: \n");
    scanf("%d",&weiht);
    printf("Իմ տվյալններն է: \n");
    printf("Անունը:%s\nՏարիքը:%d\nՔաշը:%d\n",user,age,weiht);
    printf("բարև բոլորին \n");
}
