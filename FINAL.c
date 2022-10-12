#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int read;
struct player_info
{
    int No,age,g,a,gs,mp;
    double rating;
    char name[50],position [16],nationality [30];
} pi[20];
int player_call(int choice)
{
    FILE *f= fopen("playername.txt","r");
    int i=0,n;
    char temp,t;
    printf("\n\n\t\t\t\tFC.Barcelona Player Stats (2020-2021)\n\n");
    printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
    while (fscanf(f,"%[^\n]%*c%[^\n]%*c%[^\n]%*c%d%d%d%d%d%lf%c",&pi[i].name,&pi[i].nationality,&pi[i].position,&pi[i].age,&pi[i].g,&pi[i].a,&pi[i].gs,&pi[i].mp,&pi[i].rating,&temp)!= EOF)
    {
        printf("\n%d.%s\t%s\t%s\t   %d\t %d\t%d\t%d\t\t%d\t\t%.2lf\n",i+1,pi[i].name,pi[i].nationality,pi[i].position,pi[i].age,pi[i].g,pi[i].a,pi[i].gs,pi[i].mp,pi[i].rating);
        i++;
    }
    return 1;
}
int search(int choice)
{
    printf("\t\t\t\t1. Search a player by serial        2. Search players by country\n\n");
    printf("Enter your choice:  ");
    int choice3;
    scanf("%d",&choice3);
    if(choice3==1)
    {
        printf("\n\n1.F.de Jong\n\n2.L.Messi\n\n3.A.Fati\n\n4.S.Roberto\n\n5.J.Alba\n\n6.A.Griezmann\n\n7.Ter Stegen\n\n8.S.Busquets\n\n9.C.Lenglet\n\n10.Pedri\n\n11.O.Dembele\n\n12.Gerard Pique\n\n13.P.Coutinho\n\n14.M.Pjanic\n\n15.Neto\n\n16.S.Umtiti\n\n\n");
        printf("Enter serial number of a player: ");
        int sp;
        scanf("%d",&sp);
        if(sp==1)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n1.F.de Jong\tNED\tMF,DF\t   23\t 3\t4\t1\t\t1\t\t7.16\n\n\n");
        }
        else if(sp==2)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n2.L.messi\tARG\tFW\t   33\t 23\t8\t0\t\t24\t\t8.59\n\n\n");
        }
        else if(sp==3)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n3.A.Fati\tESP\tFW\t   18\t 4\t0\t0\t\t7\t\t7.38\n\n\n");
        }
        else if(sp==4)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n4.S.Roberto\tESP\tDF\t   29\t 1\t2\t1\t\t8\t\t7.16\n\n\n");
        }
        else if(sp==5)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n5.J.Alba\tESP\tDF\t   32\t 3\t4\t2\t\t25\t\t7.11\n\n\n");
        }
        else if(sp==6)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n6.A.Griezmann\tFRA\tFW,MF\t   30\t 8\t6\t0\t\t26\t\t7.13\n\n\n");
        }
        else if(sp==7)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n7.Ter Stegen\tGER\tGK\t   28\t 0\t0\t25\t\t22\t\t6.72\n\n\n");
        }
        else if(sp==8)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n8.S.Busquets\tESP\tMF\t   32\t 0\t3\t2\t\t26\t\t6.89\n\n\n");
        }
        else if(sp==9)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n9.C.Lenglet\tFRA\tDF\t   25\t 1\t0\t5\t\t25\t\t6.62\n\n\n");
        }
        else if(sp==10)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n10.Pedri\tESP\tMF\t   18\t 2\t3\t1\t\t28\t\t6.82\n\n\n");
        }
        else if(sp==11)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n11.O.Dembele\tFRA\tFW\t   23\t 4\t2\t0\t\t22\t\t7.01\n\n\n");
        }
        else if(sp==12)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n12.Gerard Pique\tESP\tDF\t   34\t 0\t0\t2\t\t11\t\t6.90\n\n\n");
        }
        else if(sp==13)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n13.P.Coutinho\tBRA\tMF,FW\t   28\t 2\t2\t0\t\t12\t\t6.79\n\n\n");
        }
        else if(sp==14)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n14.M.Pjanic\tBIH\tMF\t   30\t 0\t0\t1\t\t17\t\t6.42\n\n\n");
        }
        else if(sp==15)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n15.Neto\tBRA\tGK\t   31\t 0\t0\t2\t\t6\t\t6.49\n\n\n");
        }
        else if(sp==16)
        {
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n16.S.Umtiti\tFRA\tDF\t   27\t 0\t0\t3\t\t10\t\t6.61\n\n\n");
        }
        else
        {
            printf("\nNo Players Found!!!\n");
        }
    }
    else if(choice3==2)
    {
        printf("\n\n1.Argentina\n\n2.Spain\n\n3.Netherland\n\n4.France\n\n5.Germany\n\n6.Brazil\n\n7.Bosnia\n\n\n");
        char str1[15],str2[15]= "Argentina",str3[15]="Spain",str4[15]="Netherland",str5[15]="France",str6[15]="Germany",str7[15]="Brazil",str8[15]="Bosnia";
        printf("\nEnter a country name: ");
        scanf("%s",&str1);
        int compare1=strcmp(str1,str2);
        int compare2=strcmp(str1,str3);
        int compare3=strcmp(str1,str4);
        int compare4=strcmp(str1,str5);
        int compare5=strcmp(str1,str6);
        int compare6=strcmp(str1,str7);
        int compare7=strcmp(str1,str8);
        if(compare1==0)
        {
            printf("\n\nIn FC Barcelona, There are 1 players from Argentina\n");
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n1.L.messi\tARG\tFW\t   33\t 23\t8\t0\t\t24\t\t8.59\n\n");
        }

        else if(compare2==0)
        {
            printf("\n\nIn FC Barcelona, There are 6 players from Spain\n");
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n1.A.Fati\tESP\tFW\t   18\t 4\t0\t0\t\t7\t\t7.38\n");
            printf("\n2.S.Roberto\tESP\tDF\t   29\t 1\t2\t1\t\t8\t\t7.16\n");
            printf("\n3.J.Alba\tESP\tDF\t   32\t 3\t4\t2\t\t25\t\t7.11\n");
            printf("\n4.S.Busquets\tESP\tMF\t   32\t 0\t3\t2\t\t26\t\t6.89\n");
            printf("\n5.Pedri\t\tESP\tMF\t   18\t 2\t3\t1\t\t28\t\t6.82\n");
            printf("\n6.Gerard Pique\tESP\tDF\t   34\t 0\t0\t2\t\t11\t\t6.90\n\n");
        }

        else if(compare3==0)
        {
            printf("\n\nIn FC Barcelona, There are 1 players from Netherland\n");
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n1.F.de Jong\tNED\tMF,DF\t   23\t 3\t4\t1\t\t1\t\t7.16\n\n");
        }
        else if(compare4==0)
        {
            printf("\n\nIn FC Barcelona, There are 4 players from France\n");
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n1.A.Griezmann\tFRA\tFW,MF\t   30\t 8\t6\t0\t\t26\t\t7.13\n");
            printf("\n2.C.Lenglet\tFRA\tDF\t   25\t 1\t0\t5\t\t25\t\t6.62\n");
            printf("\n3.O.Dembele\tFRA\tFW\t   23\t 4\t2\t0\t\t22\t\t7.01\n");
            printf("\n4.S.Umtiti\tFRA\tDF\t   27\t 0\t0\t3\t\t10\t\t6.61\n\n");
        }
        else if(compare5==0)
        {
            printf("\n\nIn FC Barcelona, There are 1 players from Germany\n");
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n1.Ter Stegen\tGER\tGK\t   28\t 0\t0\t25\t\t22\t\t6.72\n\n");
        }
        else if(compare6==0)
        {
            printf("\n\nIn FC Barcelona, There are 2 players from Brazil\n");
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n1.P.Coutinho\tBRA\tMF,FW\t   28\t 2\t2\t0\t\t12\t\t6.79\n");
            printf("\n2.Neto\t\tBRA\tGK\t   31\t 0\t0\t2\t\t6\t\t6.49\n\n");
        }
        else if(compare7==0)
        {
            printf("\n\nIn FC Barcelona, There are 1 players from Bosnia\n");
            printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
            printf("\n1.M.Pjanic\tBIH\tMF\t   30\t 0\t0\t1\t\t17\t\t6.42\n\n");
        }
        else
        {
            printf("\nWrong info, No Players Found!!!\n");
        }
    }
    else
    {
        printf("\n\n\t\tIf you want to continue then select a option or enter 5 to Quit\t\t\n\n");
    }
}
int history(int choice)
{
    FILE *fp= fopen("history.txt","r");;
    int i,n;
    char s[10000];
    while ( fgets(s, 10000, fp ) != NULL )
    {
        printf("%s\n", s);
    }
}
int Add_player(int choice2)
{
    char s1[20],s2[20],s3[20],s4[20],tmp1;
    int age1,g1,a1,gs1,mp1,i=0,j,n;
    double rating1;
    printf("How many player you want to add?\n");
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        FILE *fptr= fopen("playername.txt", "a");
        if (fptr == NULL)
        {
            printf("Error!");
            exit(1);
        }
        printf("\nAdd a player by giving this information\n\n");
        gets(s1);
        printf("Player Name: ");
        gets(s2);
        printf("\nNationality: ");
        gets(s3);
        printf("\nPosition: ");
        gets(s4);
        printf("\nAge: ");
        scanf("%d",&age1);
        printf("\nGoal Scored: ");
        scanf("%d",&g1);
        printf("\nAssist: ");
        scanf("%d",&a1);
        printf("\nGoal Saved: ");
        scanf("%d",&gs1);
        printf("\nMatch Played: ");
        scanf("%d",&mp1);
        printf("\nRating: ");
        scanf("%lf",&rating1);
        fprintf(fptr,"\n%s\n%s\n%s\n%d %d %d %d %d %.2lf",s2,s3,s4,age1,g1,a1,gs1,mp1,rating1);
        fclose(fptr);
    }
    printf("\n\nNew Player Successfully Added\n\n");
    char temp;
    FILE *f= fopen("playername.txt","r");
    printf("\nPlayer\t\tNation\tPosition   Age\t Goals\tAssist\tGoals Saved\tMatch Played\tRating\n");
    while (fscanf(f,"%[^\n]%*c%[^\n]%*c%[^\n]%*c%d%d%d%d%d%lf%c",&pi[i].name,&pi[i].nationality,&pi[i].position,&pi[i].age,&pi[i].g,&pi[i].a,&pi[i].gs,&pi[i].mp,&pi[i].rating,&temp)!= EOF)
    {
        printf("\n%d.%s\t%s\t%s\t   %d\t %d\t%d\t%d\t\t%d\t\t%.2lf\n",i+1,pi[i].name,pi[i].nationality,pi[i].position,pi[i].age,pi[i].g,pi[i].a,pi[i].gs,pi[i].mp,pi[i].rating);
        i++;
    }
    //main();
}
int password(choice)
{
    char un[10],pw[8],ch;
    int i,j,cp=0;
    printf(">>User Name: ");
    scanf("%s",&un);
    printf(">>Password : ");
    for(i = 0; i < 100; i++)
    {
        ch = getch();
        if(ch == 13)
            break;
        pw[i] = ch;
        ch = '*' ;
        printf("%c ", ch);
    }
    pw[i] = '\0';
    if(strcmp(un,"safi")==0)
    {
        if(strcmp(pw,"pass")==0)
        {
            printf("\n\t1)Add New Player        2)Return to main menu\n\n");
            printf("Enter your choice:  ");
            int choice2;
            scanf("%d",&choice2);
            if(choice2==1)
            {
                read = Add_player(choice2);
            }
            if(choice2=2)
            {
                read = intro();
            }
        }
        else printf("\nInvalid username/password try again\n ");
        puts("\n\n\t\t\tIf you want to continue then select a option or enter 5 to Quit\t\t\n\n");
    }
    else if(strcmp(un,"nayeem")==0)
    {
        if(strcmp(pw,"word")==0)
        {
            printf("\n\t1)Add New Player        2)Return to main menu\n\n");
            printf("Enter your choice:  ");
            int choice2;
            scanf("%d",&choice2);
            if(choice2==1)
            {
                read = Add_player(choice2);
            }
            if(choice2=2)
            {
                read = intro();
            }
        }
        else printf("\nInvalid username/password try again\n ");
        puts("\n\n\t\t\tIf you want to continue then select a option or enter 5 to Quit\t\t\n\n");
    }
    else
    {
        printf("\nInvalid username/password try again\n ");
        puts("\n\n\t\t\tIf you want to continue then select a option or enter 5 to Quit\t\t\n\n");
    }
}
int intro()
{
    puts("\n\n\t\t\t\t\t*****Welcome to FC.Barcelona*****\n");
}
int main()
{
   // read = intro();
    while (1)
    {
        printf("\n\t\t\t  1. Whole team performance            2. Club History\n\n");
        printf("\t\t\t  3. Search a player stats             4. Admin Login\n\n");
        printf("\t\t\t\t                    5.Quit\n\n");
        printf(">>Enter your choice: ");
        int choice,i;
        scanf("%d",&choice);
        if(choice==1)
        {
            read = player_call(choice);
            puts("\n\n\t\tIf you want to continue then select a option or enter 5 to Quit\t\t\n\n");
        }
        if(choice==2)
        {
            read = history(choice);
            puts("\n\n\t\t\tIf you want to continue then select a option or enter 5 to Quit\t\t\n\n");
        }
        if(choice==3)
        {
            read  = search(choice);
            puts("\n\n\t\t\tIf you want to continue then select a option or enter 5 to Quit\t\t\n\n");
        }
        if(choice==4)
        {
            read = password(choice);
        }
        if(choice==5)
        {
            printf("\n\n\t\t\t\t\t\t ***Thank You***\n\n");
            printf("Copyright FC Barcelona Official website of FC Barcelona\n");
            return 0;
        }

    }
    return 0;
    getch ();
}

