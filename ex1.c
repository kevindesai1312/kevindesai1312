#include<stdio.h>
#include<string.h>
#include <conio.h>
struct subject
{
    int internal,midsemester,endsemester;
};
struct student
{
    char name[100];
    char address[200];
    int year_of_birth,month_of_birth,day_of_birth;
    char addmission[10];
    struct subject s[3];
};
#define max_student 10
struct student secondclass[max_student];
int numstudent=0;
void insert()
{
    if(numstudent>=max_student)
    {
        printf("cannot add more");
    }
    struct student ns;
    printf("enter name :");
    scanf("%s",ns.name);
    printf("enter address :");
    scanf("%s",ns.address);
    printf("enter year :");
    scanf("%d",&ns.year_of_birth);
    printf("enter month :");
    scanf("%d",&ns.month_of_birth);
    printf("enter day :");
    scanf("%d",&ns.day_of_birth);
    printf("enter addmission :");
    scanf("%s",ns.addmission);
    printf("enter marks");
    for(int i=0;i<3;i++)
    {
        printf("subject %d :\n",i+1);
        printf("internal test marks");
        scanf("%d",&ns.s[i].internal);
        printf("mid test marks");
        scanf("%d",&ns.s[i].midsemester);
        printf("internal test marks");
        scanf("%d",&ns.s[i].endsemester);
    }
    secondclass[numstudent]=ns;
    numstudent++;
    printf("student add sucessfully");
}
void modify()
{
    if(numstudent == 0)
    {
        printf("no student found");
    }
    char add[10];
    int found = 0;
    printf("enter addmission number");
    scanf("%s",add);
    for(int i=0;i<numstudent;i++)
    {
        if(strcmp(secondclass[i].addmission,add)==0)
        {
            found=1;
            printf("enter new detail :");
            printf("enter name :");
            scanf("%s",secondclass[i].name);
            printf("enter address :");
            scanf("%s",secondclass[i].address);
            printf("enter year :");
            scanf("%d",&secondclass[i].year_of_birth);
            printf("enter month :");
            scanf("%d",&secondclass[i].month_of_birth);
            printf("enter day :");
            scanf("%d",&secondclass[i].day_of_birth);
            printf("enter addmission :");
            scanf("%s",secondclass[i].addmission);
            printf("enter marks");
            for(int i=0;i<3;i++)
            {
                printf("subject %d :\n",i+1);
                printf("internal test marks");
                scanf("%d",&secondclass[i].s[i].internal);
                printf("mid test marks");
                scanf("%d",&secondclass[i].s[i].midsemester);
                printf("internal test marks");
                scanf("%d",&secondclass[i].s[i].endsemester);
            }
            printf("student %s modified sucessfully. \n",add);
            break;
        }
    }
    if(!found)
    {
        printf("student with addmission no %s not found. \n");
    }
}
void display()
{
    if(numstudent==0)
    {
        printf("no student found. \n");
    }
    printf("list of student : \n");
    for(int j=0;j<numstudent;j++)
    {
        printf("student %d:\n",j+1);
        printf("name : %s \n",secondclass[j].name);
        printf("address : %s \n",secondclass[j].address);
        printf("date of birth : %d/%d/%d \n",secondclass[j].day_of_birth,secondclass[j].month_of_birth,secondclass[j].year_of_birth);
        printf("addmission no : %s \n",secondclass[j].addmission);
        printf("enter marks");
        for(int i=0;i<3;i++)
        {
            printf("subject %d :\n",i+1);
            printf("internal test marks: %d \n ",secondclass[j].s[i].internal);
            printf("mid  test marks: %d \n ",secondclass[j].s[i].midsemester);
            printf("end test marks: %d \n ",secondclass[j].s[i].endsemester);
        }
        printf("\n");
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n");
        printf("menu : \n");
        printf("menu : \n");
        printf("1.insert \n");
        printf("2.modify \n");
        printf("3.display \n");
        printf("4.exit \n");
        printf("enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                modify();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("exicting program. \n");
                break;
            }
            default:
            {
                printf("invaild");
                break;
            }
        }
    }while(choice !=4);
    return 0;
}
