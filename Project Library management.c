#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void logincheck()
{
    char u[10];
    int p;
    int c=3;

    while(c>0)
    {
        printf("\t                  Enter Username: ");
        fflush(stdin);
        gets(u);

        printf("\t                  Enter Password: ");
        scanf("%d",&p);
        if(strcmp(u,"Suimee")==0 || strcmp(u,"Lamia")==0 || strcmp(u,"Razzaq")==0)
        {
            if(strcmp(u,"Suimee")==0 && p==221)
            {
                system("cls");
                printf("\n\t\t\t\t                  WELCOME!!\n\n");
                    break;
            }
            else if(strcmp(u,"Lamia")==0 && p==221)
            {
                 system("cls");
                    printf("\n\t\t\t\t              WELCOME!!\n\n");
                    break;
            }
            else if(strcmp(u,"Razzaq")==0 && p==221)
            {
                system("cls");
                    printf("\n\t\t\t\t              WELCOME!!\n\n");
                    break;
            }


        }
        else
            {
                system("cls");
                c--;
                if(c!=0)
                {
                printf("\t                      You've entered wrong Username or Password\n",c);
                printf("\n\t                          You've got %d more Chances\n\n",c);
                }
                else if(c==0)
                {
                     printf("               It looks like you forgot your username or password\n");
                     printf("                               Try again Later!!\n");
                     exit(0);
                }
            }
    }

}
  struct library
{
char bk_name[30];
char author[30];
int pages;
float price;
};
int main()
{
struct library l[100];
char ar_nm[30],bk_nm[30];
int i,j, keepcount;
i=j=keepcount = 0;

while(j!=6)
{
logincheck();
printf("\t\t\t*#*#*#*#*#*#*#*# NSU CENTRAL LIBRARY *#*#*#*#*#*#*#*#\n\n\n");
printf("\n\n1. Add book information\n2. Display book information\n");
printf("3. List all books of given author\n");
printf("4. List the title of specified book\n");
printf("5. List the count of books in the library\n");
printf("6. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{
/* Add book */
case 1:

printf ("Enter book name = ");
scanf ("%s",l[i].bk_name);

printf ("Enter author name = ");
scanf ("%s",l[i].author);

printf ("Enter pages = ");
scanf ("%d",&l[i].pages);

printf ("Enter price = ");
scanf ("%f",&l[i].price);
keepcount++;

break;
case 2:
printf("you have entered the following information\n");
for(i=0; i<keepcount; i++)
{
printf ("book name = %s",l[i].bk_name);

printf ("\t author name = %s",l[i].author);

printf ("\t  pages = %d",l[i].pages);

printf ("\t  price = %f",l[i].price);
}
break;

case 3:
printf ("Enter author name : ");
scanf ("%s",ar_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(ar_nm, l[i].author) == 0)
printf ("%s %s %d %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

case 4:
printf ("Enter book name : ");
scanf ("%s",bk_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(bk_nm, l[i].bk_name) == 0)
printf ("%s \t %s \t %d \t %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
break;

case 5:
printf("\n No of books in library : %d", keepcount);
break;
case 6:
exit (0);
}
}
return 0;

}
