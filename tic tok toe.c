#include<stdio.h>

void board();
int win();
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
int main( )
{
    int i=-1,p=1,j=1,input,player;
    char mark;
    board();

   while(i==-1)
   {
    player=(p%2==1)?1:2;
    mark=(player==1)?'x':'o';
    printf("player %d enter a number",player);
    scanf("%d",&input);
    a[input]=mark;
    board();
    j=win();
    if(j==-1)
    {
        printf("%d player is winner",player);
    }
    if(j==2)
    {
        printf("the match is draw");
    }
    p++;   
   }


}

void board()
{
    printf("--------------------------\n");
    printf("|       |         |       |\n");
    printf("|   %c   |     %c   |    %c  |\n",a[1],a[2],a[3]);
    printf("|-------|---------|-------|\n");
    printf("|       |         |       |\n");
    printf("|  %c    |    %c    |   %c   |\n",a[4],a[5],a[6]);
    printf("|-------|---------|-------|\n");
    printf("|       |         |       |\n");
    printf("|  %c    |    %c    |   %c   |\n",a[7],a[8],a[9]);
    printf("-------------------------\n");
}

int win()
{
    int count=0,i;
    if(a[1]==a[2]&&a[2]==a[3] || a[4]==a[5]&&a[5]==a[6] || a[7]==a[8]&&a[8]==a[9])
    {
        return -1;
    }
    if(a[1]==a[4]&&a[4]==a[7] || a[2]==a[5]&&a[5]==a[8] || a[3]==a[6]&&a[6]==a[9])
    {
        return -1;
    }
    if(a[1]==a[5]&&a[5]==a[9] || a[3]==a[5]&&a[5]==a[7])
    {
        return -1;
    }

    for(i=0;i<9;i++)
    {
        if(a[i]=='x' || a[i]=='o')
        {
            count++;
        }
        if(count==9)
        {
            return 2;
        }
    }
    return 1;
} 