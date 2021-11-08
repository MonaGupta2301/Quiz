#include<stdio.h>
#include<conio.h>
main()
{
 long int a,b,c,d,e;
clrscr();
printf("\n\n                    SOLVE THE PUZZLE              ");
printf("\n\n                      EIGHT STAGES                 ");
printf("\n\n              ++++++++++ STAGE 1 +++++++++++");
printf("\n\n Enter Any Five Number Make Sure That Addition of That five Number\n Should be equal to 1000 And  Each Number Should Be divisible by 2 :");
printf("\n\n Enter five Number :");
scanf("%ld%ld%ld%ld%ld",&a,&b,&c,&d,&e);
if((((a%2)==0)&&((b%2)==0)&&((c%2)==0)&&((d%2)==0)&&((e%2)==0)&&((a+b+c+d+e)==1000)))
{
  int x;
  printf("\n\n           *********** STAGE ONE CLEAR**************");
  printf("\n\n                    +++++++ STAGE 2 ++++++++ ");
  printf("\n\n999999 + 899999 - 899998 + 999999 - 1000000 - 999998 = ???????");
  printf("\n\n Enter a Answer : ");
  scanf("%d",&x);
  if(x==1)
  { int y;
   printf("\n\n           ************ STAGE TWO CLEAR*************");
   printf("\n\n                   +++++++ STAGE 3 ++++++++ ");
   printf("\n\n Enter Two Digit Number Who's Sum is 6 And It Can Be Divisible\n\n By 1,2,3,4,6,8 ");
   printf("\n\n Enter the Answer :");
   scanf("%d",&y);
    if(y==24)
    {
     int p,q,r,s;
     printf("\n\n         ************ STAGE THREE CLEAR***********");
     printf("\n\n                  ++++++++ STAGE 4 ++++++++ ");
     printf("\n\n A)  When is The International Women's Day celebrated ?");
     printf("\n\n 1) 7th march    2) 8th march\n\n 3) 9th march   4)19th March");
     printf("\n\n Enter The Answer :");
     scanf("%d",&p);
     printf("\n\n        ------------------------     ");
     if(p==2)
     {

	printf("\n\n B) Who is The Author of '' Glimpses  of World's history ''?");
	printf("\n\n 1) Dr. APJ Abdul Kalam   2) Smt Pratibha Patil\n\n 3) jawaharlal nehru  4) S. Radhakrishnan");
	 printf("\n\n Enter The Answer :");
	scanf("%d",&q);
	printf("\n\n     -------------------------     ");
	if(q==3)
	{
	printf("n\n C) Who is The 'grah Mantri' of india (2019)??");
	printf("\n\n 1) Amit shah  2) Narendra modi \n\n 3) Smriti hirani 4)shivraj singh chauhan");
	printf("\n\n Enter The Answer :");
	scanf("%d",&r);
	printf("\n\n     -------------------------     ");
	if(r==1)
	{
	 printf("\n\n D) Who Wrote the National Song of india??");
	 printf("\n\n 1) Mahatma Gandhi  2) Bankim Chandra Chatterjee\n\n 3) B.G tilak  4) None of These");
	 printf("\n\n Enter The Answer :");
	 scanf("%d",&s);
	 printf("\n\n     -------------------------      ");
	 if(s==2)
	 {  int mona;
	   printf("\n\n         ************ STAGE FOUR CLEAR*************");
	   printf("\n\n                 ++++++++ STAGE 5 ++++++++ ");
	   printf("\n\n 1)  ABCD :: GHIJ   KLMN :: QRST  \n  EFGH :: ------} ");
	   printf("\n\n 1) WXYZ     2) PQRS \n\n 3) HIJK    4) KLMN ");
	   printf("\n\n Enter The Answer :");
	   scanf("%d",&mona);
	   if(mona==4)
	   {
	       int neha;
	       printf("\n\n Solve :");
	       printf("\n\n 2) Which One Of the Following Number is Divisible by 11 ?");
	       printf("\n\n 1) 8423718   2) 8432718\n\n 3) 4823718    4) 4832718 ");
	       printf("\n\n Enter the Answer  :");
	       scanf("%d",&neha);
	       if(neha== 4)
	       {
	       int sona;

		 printf("\n\n 3) Rat :: black   Duck ::-----");
		 printf("\n\n 1) white   2) brown \n\n 3) Red   4) yellow");
		 printf("\n\n Enter The Answer :");
		 scanf("%d",&sona);
		 if(sona==1)
		 {  int bittu;
		    printf("\n\n 4) Synonyms of beautiful  :");
		    printf("\n\n 1) pretty   2) ugly \n\n 3) smart  4) all of these");
		    printf("\n\n Enter The Andwer :");
		    scanf("%d",&bittu);
		    if(bittu==1)
		    {
			 int mg;
			 printf("\n\n         ************ STAGE FIVE CLEAR**************");
			 printf("\n\n                 ++++++++ STAGE 6 +++++++++ ");
			 printf("\n\n 1) Pointing to the lady , rohit said to neha that she is the only \n    daughter of your grandfather and she is my mother . What was\n    the relationship between rohit and neha ......???");
			 printf("\n\n 1) brother and sister    2) husband and  wife \n\n 3) uncle and aunt         4)none of the above");
			 printf("\n\n Enter the answer :");
			 scanf("%d",&mg);
			 printf("\n\n -----------------------");
			 if(mg==1)
			 {
			  int bt;
			  printf("\n\n 2)  A + B = 100\n     (A + B) - C =150\n     C + 2D = 200 \n     D = ?????");
			  printf("\n\n 1) 75    2) 125  \n\n 3) -75    4) -125 ");
			  printf("\n\n Enter the Answer :");
			  scanf("%d",&bt);
			  printf("\n\n -----------------------");
			  if(bt==2)
			 {
			   int md;
			   printf("\n\n 3)  A = 1000\n     B = 2500 \n     C = 4500 \n     D = 7000 \n     E = ?????");
			   printf(" \n\n 1) 8500  2) 9500 \n\n 3) 10000  4) 15000");
			   printf("\n\n Enter the Answer :");
			   scanf("%d",&md);
			   printf("\n\n -----------------------");
			   if(md==3)
			   {
			     int id;
			     printf("\n\n         ************ STAGE SIX CLEAR **************");
			     printf("\n\n                 ++++++++ STAGE 7 +++++++++++ ");
			     printf("\n\n i) What is the smallest number that must be\n    added to 1780 to make it perfect square  ??");
			     printf("\n\n 1) 39          2) 49 \n\n 3) 59        4) 69");
			     printf("\n\n Enter the Answer :");
			     scanf("%d",&id);
			     printf("\n\n -----------------------");
			     if(id==4)
			     {
			     int cm;
			     printf("\n\n ii) last year my age is perfect square ,next yesr it\n     will be perfect cube ,what was my present age ????");
			     printf("\n\n 1) 24      2) 25  \n\n 3) 26      4) 27");
			     printf("\n\n Enter the answer :");
			     printf("\n\n -----------------------");
			     scanf("%d",&cm);
			     if(cm==3)
			     {
				int vb ;
				printf("\n\n iii) A train runs at 45 km per hour. \n      How far does it go in 6 sec ???");

				printf("\n\n 1) 72 m     2) 76 m \n\n 3) 75 m    4) 70 m ");
				printf("\n\n Enter the Answer :");
				printf("\n\n -----------------------");
				scanf("%d",&vb);
				if(vb==3)
				{
				   int ug ;
				   printf("\n\n         ************ STAGE SEVEN CLEAR **************");
				   printf("\n\n                 ++++++++ STAGE 8 +++++++++ ");
				   printf("\n\n 1) Which one of the following number is\n    divisible by 99 ?");
				   printf("\n\n 1) 23456543   2) 135792   \n\n 3) 913464   4) 114345 ");
				   printf("\n\n Enter the answer :");
				   scanf("%d",&ug);
				   printf("\n\n -----------------------");
				   if(ug==4)
				   {
				      int pg;
				      printf("\n\n 2) if (a/3) = (b/4) = (c/7) then what,s \n    the value of ((a+b+c)/c)......???");
				      printf("\n\n 1) 2      2) 1/2  \n\n    3)  7      4)  1/7 ");
				      printf("\n\n Enter the answer :");
				      scanf("%d",&pg);
				      printf("\n\n -----------------------");
				      if(pg==1)
				      {
				       int sa;
				       printf("\n\n 3) The smallest number that must be substracted from\n    1000 and resultant number is perfect square ");
				       printf("\n\n 1) 37     2) 38     \n\n 3) 39       4) 40     ");
				       printf("\n\n Enter the answer : ");
				       scanf("%d",&sa);
				       printf("\n\n -----------------------");
				       if(sa==3)
				       {
					  int ss;
					  printf("\n\n 4) Which one of the following is the national\n    game of 'SPAIN'");
					  printf("\n\n 1) bull fighting    2) Rugby   \n\n    3) Golf      4) Baseball");
					  printf("\n\n Enter the answer :");
					  scanf("%d",&ss);
					  printf("\n\n -----------------------");
					  if(ss==1)
					  {
					     printf("\n\n ++++++++++++++ LEVEL COMPLETED +++++++++++++++++ ");
					     printf("\n\n* * * * * * * * *  YOU WONNNNNNN * * * * * * * * ");
					  }
					  else
					  {
					     printf("\n\n ************ PLZ COMPLETE STAGE 8 *********** ");
					     printf("\n\n                     AND                       ");
					     printf("\n\n         -------- WON ----------            ");
					  }
				       }
				       else
				       {
					  printf("\n\n ************ PLZ COMPLETE STAGE 8 *********** ");
					  printf("\n\n                     AND                       ");
					 printf("\n\n         -------- WON ----------            ");
				       }
				      }
				   }
				   else
				   {
				       printf("\n\n ************ PLZ COMPLETE STAGE 8 *********** ");
				       printf("\n\n                     AND                       ");
				       printf("\n\n         -------- WON ----------            ");
				   }
				}
				else
				{
				 printf("\n\n ************ PLZ COMPLETE STAGE 7 *********** ");
				 printf("\n\n                     AND                       ");
				 printf("\n\n                VISIT ON STAGE 8               ");{

				}
			     }   }
			     else
			     {
			      printf("\n\n ************ PLZ COMPLETE STAGE 7 *********** ");
			      printf("\n\n                     AND                       ");
			      printf("\n\n                VISIT ON STAGE 8               ");{

			     }   }}
			     else
			     {
			      printf("\n\n ************ PLZ COMPLETE STAGE 7 *********** ");
			      printf("\n\n                     AND                       ");
			      printf("\n\n                VISIT ON STAGE 8               ");{

			     }
			   }   }
			   else
			   {
			   printf("\n\n ************ PLZ COMPLETE STAGE 6 *********** ");
			   printf("\n\n                     AND                       ");
			   printf("\n\n                VISIT ON STAGE 7               ");{

			   }
			 }   }
			 else
			 {
			   printf("\n\n ************ PLZ COMPLETE STAGE 6 *********** ");
			   printf("\n\n                     AND                       ");
			   printf("\n\n                VISIT ON STAGE 7               ");
			 }
			 }
			 else
			 {
			  printf("\n\n ************ PLZ COMPLETE STAGE 6 *********** ");
			  printf("\n\n                     AND                       ");
			  printf("\n\n                VISIT ON STAGE 7               ");
			 }
		    }
		    else
		    {
			printf("\n\n ************ PLZ COMPLETE STAGE 5 *********** ");
			printf("\n\n                     AND                       ");
			printf("\n\n                VISIT ON STAGE 6               ");
		    }
		 }
		 else
		 {
		 }
	       }
	   else
	       {
		 printf("\n\n ************ PLZ COMPLETE STAGE 5 *********** ");
		 printf("\n\n                     AND                       ");
		 printf("\n\n                VISIT ON STAGE 6               ");
	       }
	   }
	   else
	   {
	    printf("\n\n   * *  * * CORRECT IT * * * * ");
	   }
	 }
	 else
	 {
	    printf("\n\n ************ PLZ COMPLETE STAGE 4 *********** ");
	    printf("\n\n                     AND                       ");
	    printf("\n\n                VISIT ON STAGE 5               ");
	 }
	 }
	}
       else
       {
	printf("\n\n * * * CORRECT IT * * * ");
       }
     }
     else
     {
       printf("\n\n * * * CORRECT IT * * *");

     }

    }
    else
    {
      printf("\n\n ************ PLZ COMPLETE STAGE 3 *********** ");
      printf("\n\n                     AND                       ");
      printf("\n\n                VISIT ON STAGE 4               ");
    }
  }
  else
  {
   printf("\n\n ************ PLZ COMPLETE STAGE 2 *********** ");
   printf("\n\n                     AND                       ");
   printf("\n\n                VISIT ON STAGE 3               ");

  }
}
else
{
 printf("\n\n ************ PLZ COMPLETE STAGE 1 *********** ");
 printf("\n\n                     AND                       ");
 printf("\n\n                VISIT ON STAGE 2               ");
}
getch();
return 0;


}














