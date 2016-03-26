#include<stdio.h>
#include<string.h>
int items()
{
  int i;
 
  int ch;

while(1)
{
  printf("Select Items from the Menu......\n");
  printf("1.Noodels\n2.briyani\n3.Veg puff\n4.samosa\n5.exit\n");
  printf("enter your item number:");
  scanf("%d",&ch);
  switch(ch)
   {
     case 1: noodels();
              break;
      case 2: briyani();
        break;
     case 3: vegpuff();
        break;
    case 4: samosa();
    break;
    case 5:
          return;
    break;
    
  default:
      printf("no item found\n");
   }
}
return 0;
}
