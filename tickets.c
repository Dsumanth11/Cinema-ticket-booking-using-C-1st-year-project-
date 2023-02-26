#include <stdio.h>
#include <string.h>
#include<conio.h>
struct info
{
    char name[40];
    char movie[40];
    char TIME[40];
    int no_tickets;
};
struct SEATSBOOKED
{
    char n1[3];
};
struct SEATSBOOKED k1[100];
void INFODISPLAY();
int rate=0;
struct tick
{
    char seatno[3];
};
int A[19],B[19],check,k;
void timings(int ch);
char c[40];
char selmovie[100];
int s=0,i,j,t=999;
int yo=0;
void names();
void seating();
void tickets();
struct info customer1;
int main()
{
    printf("WELCOME TO SHOBANA THEATRE ONLINE TICKET BOOKING PLATFORM\n");
    printf("PLEASE ENTER YOUR NAME:");
    fgets(c,20,stdin);
    strcpy(customer1.name,c);
    for(i=0;i<=2;i++)
    {
        names();
        if(s==1 || s==2 || s==3)
        {
            break;
        }
        else
        {
            printf("U ENTERED WRONG S.NO PLEASE RE-ENTER\n");
        }
    }
    if(i==4)
    {
        printf("SORRY U HAVE ENTERED WRONG S.NO MORE TIMES PLEASE RUN PROGRAM AGAIN");
        yo=1;
    }
    for(i=0;i<10;i++)
    {
        if(yo==1)
        {
            break;
        }
        if(t==1||t==2||t==3||t==4)
        {
            break;
        }
        else
        {
            if(i!=0)
            printf("U HAVE ENTERED WRONG S.NO");
        }
        if(i==0)
        {
            printf("\nTHIS ARE THE TIMINGS AVAILABLE IN THIS THEATRE\n");
            timings(t);
        }
        if(i!=0)
        {
        timings(t);
        }
        
    }
    for(i=0;i<25;i++)
    {
        A[i]=i;
        B[i]=i;
    }
    seating();
    tickets();
    INFODISPLAY();
}
void timings(int t11)
{
    if(i==0)
    {
        if(t11==999)
        {
            printf("S.NO TIME\n");
        }
        if(t11==1 ||t11==999)
        {
            char t1[]="1)   11:15AM";
            puts(t1);
        }
        if(t11==2 ||t11==999)
        {
            char t2[]="2)   2:15PM";
            puts(t2);
        }
        if(t11==3 ||t11==999)
        {
            char t3[]="3)   6:15PM";
            puts(t3);
        }
        if(t11==4 ||t11==999)
        {
            char t4[]="4)   9:15PM";
            puts(t4);
        }
    }
    printf("\nPLEASE ENTER S.No of show timings:");
    scanf("%d",&t);
    if(t==1)
    {
        strcpy(customer1.TIME,"11:15AM");
    }
    else if(t==2)
    {
        strcpy(customer1.TIME,"2:15PM");
    }
    else if(t==3)
    {
        strcpy(customer1.TIME,"6:15PM");
    }
    else if(t==4)
    {
        strcpy(customer1.TIME,"9:15PM");
    }
}
void names()
{
    if(i==0)
    {
        printf("\nHi %sThe given below are list of movies available in SHOBANA THEATRE\n",c);
        printf("\nS.NO  MOVIE NAME");
        char m1[]="\n 1)   JATHIRATNALU";
        puts(m1);
        char m2[]=" 2)   CHAAVU KABURU CHALLAGA";
        puts(m2);
        char m3[]=" 3)   GODZILLA VS KONG\n";
        puts(m3);
    }
    printf("PLEASE ENTER S.NO OF MOVIE:");
    scanf("%d",&s);
    if(s==1)
    {
        strcpy(customer1.movie,"JATHIRATNALU");
    }
    else if(s==2)
    {
        strcpy(customer1.movie,"CHAAVU KABURU CHALLAGA");
    }
    else if(s==3)
    {
        strcpy(customer1.movie,"GODZILLA VS KONG");
    }
}
void seating()
{
    printf("------------------------------------------------------------------------------------------\n");
    printf("                                      PVR CINEMAS WELCOME YOU                             \n");
    printf("------------------------------------------------------------------------------------------\n");
    printf("\n ENTRY                                                                              ENTRY ");
    printf("\n________*********************************| S C R E E N |**************************________\n\n\n");
    printf("                                          BRONZE-₹150\n");
    printf("                       A                                                B          \n\n\n");
    for(i=0;i<2;i++)
    {
        for(j=(4*i)+1;j<=(4*i)+5;j++)
        {
            printf("%8d",A[j]);
        }
        printf("         ");
        for(j=(4*i)+1;j<=(4*i)+5;j++)
        {
            printf("%8d",B[j]);
        }
        printf("\n\n");
    }
    printf("\n<---EXIT                                                                          EXIT---> \n");
    printf("------------------------------------------------------------------------------------------\n");
    printf("\n--> ENTRY                                                                       ENTRY <--\n");
    printf("                                          DIAMOND-₹250 \n");
    printf("                       A                                                B          \n\n\n");
    for(i=2;i<5;i++)
    {
        for(j=10+((i-2)*5);j<15+((i-2)*5);j++)
        {
            printf("%8d",A[j]);
        }
        printf("         ");
        for(j=10+((i-2)*5);j<15+((i-2)*5);j++)
        {
            printf("%8d",B[j]);
        }
        printf("\n\n");
    }
    printf("\n<---EXIT                                                                          EXIT---> \n");
}
void tickets()
{
    printf("Enter no of Tickets:");
    scanf("%d",&customer1.no_tickets);
    struct tick Ticke1[customer1.no_tickets];
    for(int i=0;i<customer1.no_tickets;i++)
    {
        printf("Enter seat numbers of Ticket %d(example:A1):",i+1);
        scanf("%s",Ticke1[i].seatno);
        strcpy(k1[i].n1,Ticke1[i].seatno);
        int l=strlen(Ticke1[i].seatno);
        if(l==2)
        {
            for(j=0;j<2;j++)
            {
                if(j==1)
                {
                    if((Ticke1[i].seatno[j])<=57)
                    {
                        rate+=150;
                    }
                }
            }
        }
        else if(l==3)
        {
            if(Ticke1[i].seatno[2]>=48)
            rate+=250;
        }
    }
    printf("PLEASE PAY %d Amount at THEATRE counter",rate); 
}
void INFODISPLAY()
{
    printf("\n\n\n");
    printf("          TAKE TICKET PRINT FROM HERE      \n");
    printf("--------------------------------------------------------------------\n");
    printf("     PVR CINEMAS BALANAGAR ONLINE TICKET\n");
    printf("\nCustomer Name:  %s",customer1.name);
    printf("MOVIE:  %s\n",customer1.movie);
    printf("SHOW TIME:  %s\n",customer1.TIME);
    printf("Number Of Tickets=  %d\n",customer1.no_tickets);
    printf("SEATS NO:  ");
    for(i=0;i<customer1.no_tickets;i++)
    {
        if(i<customer1.no_tickets-1)
        for(int mn=0;mn<3;mn++)
        {
            printf("%c",k1[i].n1[mn]);
        }
        else
        for(int nm=0;nm<3;nm++)
        {
            printf("%c",k1[i].n1[nm]);
    
        }
        if(i!=customer1.no_tickets-1)
        {
            printf(",");
        }
        else
        {
            printf(".");
        }
    }
    printf("\nPLEASE PAY %d Amount at THEATRE counter\n",rate); 
    printf("TICKET CODE:#1501234\n");
    printf("*TICKET is valid at entrance only after payment of %d at counter\n",rate);
    printf("\nTHANK U FOR BOOKING ONLINE\n");
    printf("ENJOY WATCHING %s MOVIE",customer1.movie);
}

