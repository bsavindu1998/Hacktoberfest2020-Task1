#include <stdio.h>
#include<conio.h>

int main()
{
    char skill;
    char name[100];
    char country[100];
    int age=0;

    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your name : ");//Get User name
    fgets(name, 100, stdin);
    printf("Enter your Country of Residance : ");//Get user country
    fgets(country, 100, stdin);
    printf("Enter your Age : ");//Get user Age
    scanf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : ");//Get user skill level
    scanf(" %c",&skill);
    printf("Thank you %s from %s Happy Hacking",name,country);//Thank the user

    return 0;
}
