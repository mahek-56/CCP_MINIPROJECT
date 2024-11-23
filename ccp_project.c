#include<stdio.h>
#include<string.h>
int main()
{
    int TOTALBALANCE=100000;
    int WITHDRAW;
    int REMAIN;
    int CREDIT=0;
    char  choice;
    int PIN;
    char str[10];
    printf("\nWELCOME TO BANK OF INDIA.\n\n");
    printf("YOUR TOTAL BALANCE IS 100000.\n");
    printf("\n<1> IF YOU WANT TO ADD AMOUNT(CREDIT) THAN ENTER credit.\n");
    printf("\n<2> IF YOU WANT TO TAKE AMOUNT(WITHDRAW) THAN ENTER debit.\n");
    printf("\n<3> IF YOU WANT TO TRANSFER AMOUNT*(BANK TRANSFER)* THAN ENTER transfer.\n");
    printf("\nENTER YOUR choice::");
    scanf("%s", str);
    if(strcmp(str,"credit")==0)
    {
    char k='X';
    printf("\nTHE CHOICE CREDIT::[%c]",k);
    printf("\nTHE CHOICE DEBIT::[ ]");
    printf("\nTHE CHOICE BANK TRANSFER::[ ]\n\n");
    }
   else  if(strcmp(str,"debit")==0)
    {
    char k='X';
    printf("\nTHE CHOICE CREDIT::[ ]");
    printf("\nTHE CHOICE DEBIT::[%c]",k);
    printf("\nTHE CHOICE BANK TRANSFER::[ ]\n\n");

    }
    else  if(strcmp(str,"transfer")==0)
    {
    char k='X';
    printf("\nTHE CHOICE CREDIT::[ ]");
    printf("\nTHE CHOICE DEBIT::[ ]");
    printf("\nTHE CHOICE BANK TRANSFER::[%c]\n\n",k);
    printf("\n<------------------------------------------------->");
    }

    if(strcmp(str,"credit")==0)
    {
    printf("\n< MAXIMUM AMOUNT YOU CAN ADD IN ONE DAY IS 100000.>\n");
    printf("< IF YOU WANT SEE YOUR TOTAL BALANCE, ENTER 0     >\n");
    printf("<------------------------------------------------->");
     printf("\nENTER YOUR ATM PIN ::");
       scanf("%d",&PIN);
       if(PIN==3017)
       {


       int add;
       while(100000>=CREDIT)
       {
       printf("\n\nENTER THE AMOUNT WHICH YOU WANT TO ADD::");
       scanf("%d",&add);
       if(add<0)
       {
         printf ("\nENTER VALID AMOUNT.");
         break;
       }
       CREDIT+=add;
        if(add==0)
       {
       int TOTAL;
       TOTAL=TOTALBALANCE+CREDIT;
       printf("\nTOTAL ADDED  AMOUNT IS %d\n",CREDIT);
       printf("\nTOTAL BALANCE IS %d ",TOTAL);
       printf("\n<-------------------------------------------------------------->\n");
       printf("\n\n<------------------------------------------ >\n");
       printf("           RECEIPT                           \n");
       printf("< NAME :: KRISHKUMAR JIGNESHBHAI RAMANANDI  >\n");
       printf("< TRANSACTION ID :: BK345798KR              >\n");
       printf("< YOUR TOTAL BALANCE IS %d.             >\n",TOTAL);
       printf("< YOUR CREDITED AMOUNT IS %d.                >\n",CREDIT);
       printf("<------------------------------------------->");
       break;
       }
        else if(CREDIT<100000)
       {
       int TOTAL;
       TOTAL=TOTALBALANCE+CREDIT;
       printf("\nTOTAL ADDED  AMOUNT IS %d\n",CREDIT);
       printf("\nTOTAL BALANCE IS %d ",TOTAL);
       printf("\n<-------------------------------------------------------------->\n");
       }

       else if(CREDIT>100000)
       {
         int TOTAL;
       CREDIT=CREDIT-add;
       TOTAL=(TOTALBALANCE+CREDIT);
       printf("\nYOU CAN'T ADD MORE THAN 100000 IN ONE DAY.");
       printf("\n\nTOTAL ADDED  AMOUNT IS %d\n",CREDIT);
       printf("\nTOTAL BALANCE IS %d ",TOTAL);
       printf("\n<-------------------------------------------------------------->\n");
       printf("           RECEIPT                           \n");
       printf("< NAME :: KRISHKUMAR JIGNESHBHAI RAMANANDI  >\n");
       printf("< TRANSACTION ID :: BK345798KR              >\n");
       printf("< YOUR TOTAL BALANCE IS %d.             >\n",TOTAL);
       printf("< YOUR CREDITED AMOUNT IS %d.           >\n",CREDIT);
       printf("<--------------------------------------- --->");
       break;
       break;
       }
       else if (CREDIT==100000)
       {
       int TOTAL;
       TOTAL=TOTALBALANCE+CREDIT;
       printf("\nNOW FURTHER YOU CAN'T ADD MORE MONEY. \n");
       printf("\nTOTAL ADDED  AMOUNT IS %d\n",CREDIT);
       printf("\nTOTAL BALANCE IS %d ",TOTAL);
       printf("\n<-------------------------------------------------------------->\n");
       printf("\n\n<------------------------------------------ >\n");
       printf("           RECEIPT                           \n");
       printf("< NAME :: KRISHKUMAR JIGNESHBHAI RAMANANDI  >\n");
       printf("< TRANSACTION ID :: BK345798KR              >\n");
       printf("< YOUR TOTAL BALANCE IS %d.             >\n",TOTAL);
       printf("< YOUR CREDITED AMOUNT IS %d.             >\n",CREDIT);
       printf("<--------------------------------------- --->");
       break;
       }
       }
       }
       else
       {
        printf("\nYOUR ATM PIN IS INCORRECT");
        printf("\nPLEASE TRY AGAIN");
       }
}
else if(strcmp(str,"debit")==0)
   {
     printf("\n< MAXIMUM AMOUNT YOU CAN TAKE IN ONE DAY IS 100000.>\n");
    printf("< IF YOU WANT SEE YOUR TOTAL BALANCE, ENTER 0     >\n");
    printf("<------------------------------------------------->");

      int TAKE;
      int TOTAL=TOTALBALANCE;
      int CREDIT=0;
       printf("\nENTER YOUR ATM PIN ::");
       scanf("%d",&PIN);
       if(PIN==3017)
       {

      while (100000>=CREDIT)
      {
         printf("\n\nENTER THE AMOUNT WHICH YOU WANT TO TAKE::");
       scanf("%d",&TAKE);
       if(TAKE<0)
        {
         printf ("\nENTER VALID AMOUNT.");
         printf("\n\n<------------------------------------------ >\n");
       printf("           RECEIPT                           \n");
       printf("< NAME :: KRISHKUMAR JIGNESHBHAI RAMANANDI  >\n");
       printf("< TRANSACTION ID :: BK345798KR              >\n");
       printf("< YOUR TOTAL REMAINING BALANCE IS %d.   >\n",TOTAL);
       printf("< YOUR DEBITED AMOUNT IS %d.                 >\n",CREDIT);
       printf("<------------------------------------------->");
         break;
         }
        else if(TAKE>100000 )
       {
       printf("<--------------------------------------------------------->");
       printf("\nYOU CAN'T WITHDRAW MORE THAN 100000 IN ONE DAY.\n");
       printf("\nYOUR TOTAL WITHDRAWL AMOUNT %d\n",CREDIT);
       printf("\nYOUR REMAINING BALANCE IS %d\n",TOTAL);
       printf("<---------------------------------------------------->");
       printf("\n\n<------------------------------------------ >\n");
       printf("           RECEIPT                           \n");
       printf("< NAME :: KRISHKUMAR JIGNESHBHAI RAMANANDI  >\n");
       printf("< TRANSACTION ID :: BK345798KR              >\n");
      printf("< YOUR TOTAL REMAINING BALANCE IS %d.   >\n",TOTAL);
       printf("< YOUR DEBITED AMOUNT IS %d.                 >\n",CREDIT);
       printf("<------------------------------------------->");;
        continue;
       }
      //  else if(TAKE>TOTAL)
      //  {
      //    printf("<--------------------------------------------------------->");
      //    printf("\nYOU HAVE NOT ENOUGH MONEY TO TAKE\n");
      //    printf("<--------------------------------------------------------->");
      //  }
       else if(TAKE==0)
       {
       printf("\nYOUR TOTAL WITHDRAWL AMOUNT %d\n",CREDIT);
       printf("\nYOUR REMAINING BALANCE IS %d\n",TOTAL);
       printf("<--------------------------------------------------------->");
       printf("\n\n<------------------------------------------ >\n");
       printf("           RECEIPT                           \n");
       printf("< NAME :: KRISHKUMAR JIGNESHBHAI RAMANANDI  >\n");
       printf("< TRANSACTION ID :: BK345798KR              >\n");
       printf("< YOUR TOTAL REMAINING BALANCE IS %d.   >\n",TOTAL);
       printf("< YOUR DEBITED AMOUNT IS %d.                 >\n",CREDIT);
       printf("<------------------------------------------->");
         break;
       }
       else if (TAKE>TOTAL)
       {
       printf("\nYOU HAVE NOT ENOUGH MONEY, YOU CAN'T WITHDRAW IT.\n");
       printf("\nYOUR TOTAL WITHDRAWL AMOUNT %d\n",CREDIT);
       printf("\nYOUR REMAINING BALANCE IS %d\n",TOTAL);
       printf("<--------------------------------------------------------->");
       printf("\n\n<------------------------------------------ >\n");
       printf("           RECEIPT                           \n");
       printf("< NAME :: KRISHKUMAR JIGNESHBHAI RAMANANDI  >\n");
       printf("< TRANSACTION ID :: BK345798KR              >\n");
       printf("< YOUR TOTAL REMAINING BALANCE IS %d.    >\n",TOTAL);
       printf("< YOUR DEBITED AMOUNT IS %d.             >\n",CREDIT);
       printf("<------------------------------------------->");
         break;
       }
      //  else if(CREDIT==100000)
      //  {
      //   printf("l");
      //   break;
      //  }
       else if(CREDIT==100000)
       {
       printf("\nNOW YOU CAN'T FURTHER  WITHDRAW MONEY, YOUR LIMIT IS OVER.\n");
       printf("\nYOUR TOTAL WITHDRAWL AMOUNT %d\n",CREDIT);
       printf("\nYOUR REMAINING BALANCE IS %d\n",TOTAL);
       printf("<------------------------------------------------------------>");
       printf("\n\n<------------------------------------------ >\n");
       printf("              RECEIPT                           \n");
       printf("< NAME :: KRISHKUMAR JIGNESHBHAI RAMANANDI  >\n");
       printf("< TRANSACTION ID :: BK345798KR              >\n");
       printf("< YOUR TOTAL REMAINING BALANCE IS %d.        >\n",TOTAL);
       printf("< YOUR DEBITED AMOUNT IS %d.            >\n",CREDIT);
       printf("<------------------------------------------->");
        break;
       }
       else
       {
          CREDIT+=TAKE;
       TOTAL=TOTALBALANCE-CREDIT;
        printf("\n<YOUR TOTAL REMAINING BALANCE IS %d.        >\n",TOTAL);
       printf("< YOUR DEBITED AMOUNT IS %d.            >\n",CREDIT);
       printf("<------------------------------------------->");
   }
}

   }
   else
    {
      printf("\nYOUR ATM PIN IS INCORRECT");
      printf("\n PLEASE TRY AGAIN");
    }
   }
   else if(strcmp(str,"transfer")==0)
   {
     printf("\nENTER YOUR ATM PIN ::");
       scanf("%d",&PIN);
       if(PIN==3017)
       {
        int HDFC=100000;
    int BOI=120000;
    printf("IF YOU WANT TO TRANSFER FROM BOI TO HDFC THAN ENTER 1.");
    printf("\nIF YOU WANT TO TRANSFER FROM HDFC TO BOI THAN ENTER 2.");
    int choice;
    printf("\nENTER YOUR choice::");
    scanf("%d",&choice);
    if(choice==1)
    {
        int amount;
         printf("YOUR TOTAL BALANCE IN HDFC IS 100000.\n");
         printf("YOUR TOTAL BALANCE IN BOI IS 120000.\n");
        printf("ENTER THE AMOUNT WHICH YOU WANT TO TRANSFER ::");
        scanf("%d",&amount);
         if(0>amount)
        {
            printf("\nENTER VALID AMOUNT");
        }
        else if(BOI>=amount)
        {
        HDFC=HDFC+amount;
         printf("\nTOTAL TRANSFERED AMOUNT IS %d\n",amount);
       printf("\nTOTAL BALANCE IN HDFC IS %d ",HDFC);
        BOI=BOI-amount;
        printf("\nTOTAL REMAINING BALANCE IN BOI IS %d ",BOI);


        }
        else if(amount>BOI)
        {
            printf("\nACCOUNT HAS NOT ENOUGH BALANCE");
        }

    }
     else if(choice==2)
    {
        int amount;
        printf("YOUR TOTAL BALANCE IN BOI IS 120000.\n");
        printf("YOUR TOTAL BALANCE IN HDFC IS 100000.\n");
        printf("ENTER THE AMOUNT WHICH YOU WANT TO TRANSFER ::");
        scanf("%d",&amount);
         if(0>amount)
        {
            printf("\nENTER VALID AMOUNT");
        }
       else if(BOI>=amount)
        {
        BOI=BOI+amount;
         printf("\nTOTAL TRANSFERED AMOUNT IS %d\n",amount);
       printf("\nTOTAL BALANCE IN BOI IS %d ",BOI);
        HDFC=HDFC-amount;
        printf("\nTOTAL REMAINING BALANCE IN HDFC IS %d ",HDFC);


        }
        else if(amount>HDFC)
        {
            printf("\nACCOUNT HAS NOT ENOUGH BALANCE");
        }

    }
       }
       else
       {
        printf("YOUR ATM PIN IS INCORRECT");
       }
   }
   else
    {
       printf("\nENTER THE VALID CHOICE");
   }
   return 0;
}
