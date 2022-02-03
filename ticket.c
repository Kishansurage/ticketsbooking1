#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void shershah();
void pushpa();
void bahubali();
int main()
{
int choice;
printf("---------------------THEATER TICKET COUNTER WORKING-----------------------\n");
printf("                          TODAY MOVIES LIST                              \n");
printf("\t\t1)Pushpa\n\t\t2)Shershah\n\t\t3)Bahubali\n\n\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
       pushpa();
       break;
case 2:
       shershah();
       break;
case 3:
       bahubali();
       break;
default :
    printf("wrong choice\n");
}
return 0;
}
void pushpa()
{
    int nob,ch,amount=50;
    FILE *fp=NULL,*fq=NULL,*fs=NULL;
    fp=fopen("pushpa.txt","r");

     if(fp==NULL)
     {
         printf("error");
     }
     fscanf(fp,"%d",&ch);
       if(ch==50)
       {
       printf("NOT SEAT AVAILABLE YET\n");
       fclose(fp);
            }
       else
       {    int F,d;
         printf("\n");
         nob=amount-ch;
         printf("%d Tickets available yet\n",nob);
         printf("ENTER 1 FOR YES 0 FOR NO\n");
         scanf("%d",&F);
        
        // sleep(3);
         system("cls");
         if(F==1)
         {
         fs=fopen("note1.txt","r");
         while(!feof(fs))
         {
         d=fgetc(fs);
         printf("%c",d);
         }}
          fclose(fs);
          ////////
         if(F)
         {
         ch++;
         fq=fopen("pushpa.txt","w");
         fprintf(fq,"%d",ch);
         }
    
        fclose(fq);
      }
}

void shershah()
{
    int nob,ch,amount=50;
    FILE *fp=NULL,*fq=NULL,*fs=NULL;
    fp=fopen("shershah.txt","r");

     fscanf(fp,"%d",&ch);
     if(ch==50)
     {
      printf("THEIR IS NO SEATS AVAILABLE FOR SHERSHAH\n");
      fclose(fp);     }
      else
      {
         int F,d;
         printf("\n");//messsage
         nob=amount-ch;
         printf("%d Tickets available yet\n",nob);
         printf("ENTER 1 FOR YES 0 FOR NO\n");
         scanf("%d",&F);
         ///////////////////

        // sleep(3);
         system("cls");
          if(F==1)
         {
         fs=fopen("note1.txt","r");
         while(!feof(fs))
         {
         d=fgetc(fs);
         printf("%c",d);
         }}
         fclose(fs);
         //////////////////
         if(F)
         {
         ch++;
         fq=fopen("shershah.txt","w");
         fprintf(fq,"%d",ch);
         }
   
         fclose(fq);
      }
}
void bahubali()
{
    int noc,ch,amount=50;
    FILE *fp=NULL,*fq=NULL,*fs=NULL;
    fp=fopen("bahubali.txt","r");
    fscanf(fp,"%d",&ch);
       if(ch==50)
       {
       printf("THEIR IS NO MORE SEAT AVAILABLE FOR BAHUBALI \n");
       fclose(fp);     }
       else
       {
        int F,d;
         printf("\n");//message
         noc=amount-ch;
         printf("%d Tickets available yet\n",noc);
         printf("ENTER 1 FOR YES 0 FOR NO\n");
         scanf("%d",&F);
         //////////////////

        // sleep(3);
         system("cls");
          if(F==1)
         {
         fs=fopen("note1.txt","r");
         while(!feof(fs))
         {
         d=fgetc(fs);
         printf("%c",d);

         }}
         fclose(fs);
         ///////////////////
         if(F)
         {
         ch++;
         fq=fopen("bahubali.txt","w");
         fprintf(fq,"%d",ch);
         }
      
    fclose(fq);
      }
}
