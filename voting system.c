#include<stdio.h>
void caste_vote();
void view_vote();
void find_lead();
void find_least();

int cand1=0,cand2=0,cand3=0,cand4=0;
 int main()
 {
    int choice;
    read:
    printf("\n\n 1-to caste vote \n2-to view vote count \n3-to find leading candidate \n4-find loosing candidate");
    
    printf("\nplease enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:caste_vote();
        break; 
        case 2:view_vote();
        break;
        case 3:find_lead();
        break;
        case 4:find_least();
        break;
        }
        goto read;
}

void caste_vote()
{
    int vote;
    printf("\nto vote cand1--1 \nto vote cand2--2 \nto vote cand3--3 \nto vote cand4--4 \n");
    printf("please enter your choice:\n");
    scanf("%d",&vote);

    switch(vote)
    {
        case 1:cand1++;
        break;
        case 2:cand2++;
        break;
        case 3:cand3++;
        break;
        case 4:cand4++;
        break;
    }

}

void view_vote( )
{
    printf("cand1=%d \ncand2=%d \ncand3=%d \ncand4=%d \n",cand1,cand2,cand3,cand4);
}

void find_lead()
{
    if(cand1>cand2 && cand1>cand3 && cand1>cand4)
    {
        printf("\ncandidate 1 is leading ");
    }
     if(cand2>cand1 && cand2>cand3 && cand2>cand4)
    {
        printf("\ncandidate 2 is leading ");
    }
     if(cand3>cand1 && cand3>cand2 && cand3>cand4)
    {
        printf("\ncandidate 3 is leading ");
    }
     if(cand4>cand1 && cand4>cand2 && cand4>cand3)
    {
        printf("\ncandidate 4 is leading ");
    }
}

void find_least()
{
    
    if(cand1<cand2 && cand1<cand3 && cand1<cand4)
    {
        printf("\ncandidate 1 is least ");
    }
     if(cand2<cand1 && cand2<cand3 && cand2<cand4)
    {
        printf("\ncandidate 2 is  least");
    }
     if(cand3<cand1 && cand3<cand2 && cand3<cand4)
    {
        printf("\ncandidate 3 is least ");
    }
     if(cand4<cand1 && cand4<cand2 && cand4<cand3)
    {
        printf("\ncandidate 4 is least ");
    }
}    -