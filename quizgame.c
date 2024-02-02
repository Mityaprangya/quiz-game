#include<stdio.h>

int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09;
    int total1,total2,total3;

    printf(" Welcome to the game\n\n");
    printf("-> press 7 to start the game\n");
    printf("press 0 to QUIT the game\n");

    scanf("%d",&i);
    if(i==7)
    {
        printf("game has started\n\n");

        printf("1>Which is a search engine?\n\n");
        printf("1) google\n");
        printf("2) youtube\n");
        printf("3) whatsapp\n");
        printf("4) email\n");
        printf("enter your answer\n");
        scanf("%d",&ans1);

        if(ans1==1)
        {
            printf("correct answer");
            point1 = 5;
            printf("you have scored %d point",point1);

        }
        else{
            printf("Wrong answer\n");
            point01=0;
            printf("you have scored %d score",point01);

        }
         printf("1>Which is the 1st browser invented in 1990?\n\n");
        printf("1) internet explorer\n");
        printf("2) Mosaic\n");
        printf("3) Mozilla\n");
        printf("4) Nexus\n");
        printf("enter your answer");
        scanf("%d",&ans2);

        if(ans2==4)
        {
            printf("correct answer");
            point2 = 5;
            printf("you have scored %d point",point2);

        }
        else{
            printf("Wrong answer\n");
            point02=0;
            printf("you have scored %d score",point02);

        }
         printf("1>!st computer virus name?\n\n");
        printf("1) Rabbit\n");
        printf("2) Creeper virus\n");
        printf("3) Elk cloner\n");
        printf("4) Sca virus\n");
        printf("enter your answer");
        scanf("%d",&ans3);

        if(ans3==2)
        {
            printf("correct answer");
            point3 = 5;
            printf("you have scored %d point",point3);

        }
        else{
            printf("Wrong answer\n");
            point03=0;
            printf("you have scored %d score",point03);

        }

         printf("4>Firewall in computer used for?\n\n");
        printf("1) Security\n");
        printf("2) Data transmission\n");
        printf("3) monitoring\n");
        printf("4) Authentication\n");
        printf("enter your answer");
        scanf("%d",&ans4);

        if(ans4==1)
        {
            printf("correct answer");
            point4 = 5;
            printf("you have scored %d point",point4);

        }
        else{
            printf("Wrong answer\n");
            point04=0;
            printf("you have scored %d score",point04);

        }

         printf("5>Which is a search engine?\n\n");
        printf("a) google\n");
        printf("b) youtube\n");
        printf("c) whatsapp\n");
        printf("d) email\n");
        printf("enter your answer");
        scanf("%c",&ans1);

        if(ans1=='a')
        {
            printf("correct answer");
            point1 = 5;
            printf("you have scored %d point",point1);

        }
        else{
            printf("Wrong answer\n");
            point01=0;
            printf("you have scored %d score",point01);

        }




    }
    else if(i==0)
    {
        printf("The game ended\n\n");
    }
    else{
        printf("invalid enter\n\n");
         }
    
}