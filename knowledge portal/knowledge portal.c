#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void signup();
void Portal();
void signup()
{
    char sen1[100];
    char sen2[100];
    int a;
    FILE *fp1;
    fp1=fopen("D:\\knowledge portal\\files\\file1.txt","a");
    printf("\nEnter Username\n");
    scanf("%s",sen1);
    printf("\nEnter Password\n");
    scanf("%s",sen2);
    fprintf(fp1,"%s",sen1);
    fprintf(fp1,"\t%s\n",sen2);
    fclose(fp1);
    printf("\nDo you wish to continue \nPress 1 for Yes \nPress 0 for No\n");
    scanf("%d",&a);
    if(a==0)
    {
        exit(1);
    }
else
{
Portal();
}
}
/******************************************************************************************************/
void Portal()
{
    FILE *ptr;
    int choice,ch,choice2,choice3;
    char a;
    printf("\t\t\t WELCOME TO THE KNOWLEDGE PORTAL\n\n");

    printf("\n\nIf you are a new user then Press 1 for sign up\nIf  you are an existing user then Press 2 for sign in\nIf you want to exit  press 0\n");
    scanf("%d",&ch);
while(ch)
{
    switch(ch)
    {
        case 1:signup();
        break;
        case 2:
{
        int a,c=0;
    char user[100],pass[100];
    char x[100],y[100];
    printf("\nEnter Username\n");
    scanf("%s",user);
    printf("Enter Password\n");
    scanf("%s",pass);
    FILE *fp1;
    fp1=fopen("D:\\knowledge portal\\files\\file1.txt","r");
    while(fscanf(fp1,"%s\t%s\n",x,y)!=-1)
    {
        if((strcmp(user,x)==0) && (strcmp(pass,y)==0))
        {
            printf("\n                         Welcome %s\n",user);
            c=1;
    printf("\t The knowledge portal consist of following contents\n\n \t 1. About Knowledge portal\n \t 2. Various Languages\n\n\t Press 1 to open the 1st section and 2 to open the 2nd section.\n please enter your choice\n ");
    scanf("%d",&choice);

    while(1)
    {
        if(choice==1)
        {
            ptr=fopen("D:\\knowledge portal\\files\\about.txt","r");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);
            }
            fclose(ptr);
        printf("\n\n\t Press 2 to open the languages section and 0 to exit the portal\n");
        scanf("%d",&choice);
        }
        else if(choice==2)
            {
           printf("\n The following languages are available in the knowledge portal\n 1. C\n 2. C++\n 3. Java Core\n 4. Java Advanced \n 5. php\n 6. html\n 7. CSS\n 8. JavaScript\n 9. BootStrap\n 10.C#\n Enter the serial no of the language you want to know about\n ");
scanf("%d",&choice2);
            int k=1;
do{



switch (choice2)
{
case 1:
    {
        printf("\nSo you want to know about C language");
        while(1)
        {
            printf("\n press 1 to know more  \n press 2 to know about its uses \n press 3 to know about the future scope of this language \n  press 4 to know about the difficulty level of this language\n press 0 to exit \n enter you choice.\n");
        scanf("%d",&choice3);
            if(choice3==1)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c info.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }
                }
            if(choice3==2)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c uses.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==3)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c future scope.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==4)
                {
            ptr=fopen("D:\\knowledge portal\\files\\difficulty level of c.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==0)
                {
            break;
                }

        }
        break;
        }

case 2:
    {
        printf("\nSo you want to know about C++ language");
        while(1)
        {
            printf("\n press 1 to know more  \n press 2 to know about its uses \n press 3 to know about the future scope of this language \n  press 4 to know about the difficulty level of this language\n press 0 to exit \n enter you choice.\n");
        scanf("%d",&choice3);
            if(choice3==1)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c++ info.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }
                }
            if(choice3==2)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c++ uses.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==3)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c++ future scope.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==4)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c++ difficulty level.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==0)
                {
            break;
                }

        }
        break;
    }
case 3:
    {
        printf("\nSo you want to know about Java Core language");
        while(1)
        {
            printf("\n press 1 to know more  \n press 2 to know about its uses \n press 3 to know about the future scope of this language \n  press 4 to know about the difficulty level of this language\n press 0 to exit \n enter you choice.\n");
        scanf("%d",&choice3);
            if(choice3==1)
                {
            ptr=fopen("D:\\knowledge portal\\files\\java info.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }
                }
            if(choice3==2)
                {
            ptr=fopen("D:\\knowledge portal\\files\\java uses.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==3)
                {
            ptr=fopen("D:\\knowledge portal\\files\\java future scope.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==4)
                {
            ptr=fopen("D:\\knowledge portal\\files\\java difficulty level.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==0)
                {
            break;
                }

        }
        break;
    }
 case 4:
    {
        printf("\nSo you want to know about Java Advanced language");
        while(1)
        {
            printf("\n press 1 to know more  \n press 2 to know about its uses \n press 3 to know about the future scope of this language \n  press 4 to know about the difficulty level of this language\n press 0 to exit \n enter you choice.\n");
        scanf("%d",&choice3);
            if(choice3==1)
                {
            ptr=fopen("D:\\knowledge portal\\files\\java advanced info.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }
                }
            if(choice3==2)
                {
            ptr=fopen("D:\\knowledge portal\\files\\java advanced uses.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==3)
                {
            ptr=fopen("D:\\knowledge portal\\files\\java advanced future scope.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==4)
                {
            ptr=fopen("D:\\knowledge portal\\files\\java advanced difficulty level.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==0)
                {
            break;
                }

        }
       break;

    }
case 5:
    {
        printf("\nSo you want to know about php language");
        while(1)
        {
            printf("\n press 1 to know more  \n press 2 to know about its uses \n press 3 to know about the future scope of this language \n  press 4 to know about the difficulty level of this language\n press 0 to exit \n enter you choice.\n");
        scanf("%d",&choice3);
            if(choice3==1)
                {
            ptr=fopen("D:\\knowledge portal\\files\\php info.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }
                }
            if(choice3==2)
                {
            ptr=fopen("D:\\knowledge portal\\files\\php uses.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==3)
                {
            ptr=fopen("D:\\knowledge portal\\files\\php future scope.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==4)
                {
            ptr=fopen("D:\\knowledge portal\\files\\php difficulty level.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==0)
                {
            break;
                }

        }
       break;
    }
case 6:
    {
        printf("\nSo you want to know about html language");
        while(1)
        {
            printf("\n press 1 to know more  \n press 2 to know about its uses \n press 3 to know about the future scope of this language \n  press 4 to know about the difficulty level of this language\n press 0 to exit \n enter you choice.\n");
        scanf("%d",&choice3);
            if(choice3==1)
                {
            ptr=fopen("D:\\knowledge portal\\files\\html info.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }
                }
            if(choice3==2)
                {
            ptr=fopen("D:\\knowledge portal\\files\\html uses.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==3)
                {
            ptr=fopen("D:\\knowledge portal\\files\\html future scope.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==4)
                {
            ptr=fopen("D:\\knowledge portal\\files\\html difficulty level.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==0)
                {
            break;
                }

        }
        break;
    }
case 7:
    {
        printf("\nSo you want to know about CSS language");
        while(1)
        {
            printf("\n press 1 to know more  \n press 2 to know about its uses \n press 3 to know about the future scope of this language \n  press 4 to know about the difficulty level of this language\n press 0 to exit \n enter you choice.\n");
        scanf("%d",&choice3);
            if(choice3==1)
                {
            ptr=fopen("D:\\knowledge portal\\files\\css info.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }
                }
            if(choice3==2)
                {
            ptr=fopen("D:\\knowledge portal\\files\\css uses.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==3)
                {
            ptr=fopen("D:\\knowledge portal\\files\\css future scope.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==4)
                {
            ptr=fopen("D:\\knowledge portal\\files\\css difficulty level.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==0)
                {
            break;
                }

        }
        break;
    }
case 8:
    {
        printf("\nSo you want to know about JavaScript language");
        while(1)
        {
            printf("\n press 1 to know more  \n press 2 to know about its uses \n press 3 to know about the future scope of this language \n  press 4 to know about the difficulty level of this language\n press 0 to exit \n enter you choice.\n");
        scanf("%d",&choice3);
            if(choice3==1)
                {
            ptr=fopen("D:\\knowledge portal\\files\\javascript info.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {

                printf("%c",a);

            }
                }
            if(choice3==2)
                {
            ptr=fopen("D:\\knowledge portal\\files\\javascript uses.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==3)
                {
            ptr=fopen("D:\\knowledge portal\\files\\javascript future scope.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==4)
                {
            ptr=fopen("D:\\knowledge portal\\files\\javascript difficulty level.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==0)
                {
            break;
                }

        }
        break;
    }
case 9:
    {
        printf("\nSo you want to know about Bootstrap language");
        while(1)
        {
            printf("\n press 1 to know more  \n press 2 to know about its uses \n press 3 to know about the future scope of this language \n  press 4 to know about the difficulty level of this language\n press 0 to exit \n enter you choice.\n");
        scanf("%d",&choice3);
            if(choice3==1)
                {
            ptr=fopen("D:\\knowledge portal\\files\\bootstrap info.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }
                }
            if(choice3==2)
                {
            ptr=fopen("D:\\knowledge portal\\files\\bootstrap uses.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==3)
                {
            ptr=fopen("D:\\knowledge portal\\files\\bootstrap future scope.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==4)
                {
            ptr=fopen("D:\\knowledge portal\\files\\bootstrap difficulty level.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==0)
                {
            break;
                }

        }
       break;
    }
case 10:
    {
        printf("\nSo you want to know about C# language");
        while(1)
        {
            printf("\n press 1 to know more  \n press 2 to know about its uses \n press 3 to know about the future scope of this language \n  press 4 to know about the difficulty level of this language\n press 0 to exit \n enter you choice.\n");
        scanf("%d",&choice3);
            if(choice3==1)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c# info.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }
                }
            if(choice3==2)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c# uses.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==3)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c# future scope.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==4)
                {
            ptr=fopen("D:\\knowledge portal\\files\\c# difficulty level.txt","r");
            printf("\n");
            while((a=getc(ptr))!=EOF)
            {
                printf("%c",a);

            }

                }
            if(choice3==0)
                {
            break;
                }

        }
       break;
    }
default:
    {
        printf("*****************************INVAILID CHOICE**************************");
    }

}
 printf("\n\n\tpress 0 if you want to exit and 1 if you want to  continue ");
    scanf("%d",&k);
    if(k==0)
        printf("\n\n Thank You \n");
    else
        {
        printf("\n\tEnter the serial number  of other language you want to explore ");
    scanf("%d",&choice2);
        }
}while(k==1);


            printf("\n\n\tPress 1 to open the about us section and 0 to exit the portal\n");
        scanf("%d",&choice);
            }
            else if(choice==0)
            {
                break;
            }
        else
            {
            printf("\n********************INVAILD CHOICE**************************\n Enter Your choice again");
            scanf("%d",&choice);
            }
    }
    printf("\n *****************THANK YOU FOR USING THE KNOWLEDGE PORTAL**********************\n*****************BYE*******************");
break;

 }
}
    if(c==0)
        {
        printf("\nInvalid Username or Password \n Please sign up if you are a new user \n");
    }
    printf("\nDo you wish to continue \nPress 1 for Yes \nPress 0 for No\n");
    scanf("%d",&a);
    if(a==0)
    {
        printf("\n\tHOPE YOU LIKE IT VISIT AGAIN ");
        exit(1);
}

}
default:
printf("\ninvalid key \n");
}

}


}
/******************************************************************************************************/
int  main()
{
    printf("\t\t********************HELLO WORLD********************\n\n");
     Portal();
     printf("\n\tHOPE YOU LIKE IT VISIT AGAIN ");
return 0;
}

