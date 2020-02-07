#include <stdio.h>

int main (void)
{
    int x , y , z ;
    x= 111 , y = 544 , z= 422 ;
    printf("++z:%i\n",++z); 
    printf("++x:%i\n",++x); 
    printf("++y:%i\n",++y);
    printf("--z:%i\n",--z); 
    printf("--x:%i\n",--x); 
    printf("--y:%i\n",--y); 
    z=z+1 ; x=x+1;  y=y+1 ;
    printf("z:%i\nx:%i\ny:%i\n",z,x,y);
    (z-1)==z ; (x-1)==x; (y-1)==y ;
    printf("z:%i\nx:%i\ny:%i\n",z,x,y);
}