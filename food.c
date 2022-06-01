int main()
{
  int choice,p,b,f,s,Pizza,Burger,French Fries,Sandwich;
  printf("1.Pizza\n.2.Burger\n.3.French Fries\n.4.Sandwich\n.")
  printf("please select your choice from 1,2,3,4\n.")
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
        printf("you selected Pizza.n\");
        printf("You selected Pizza.\n");
        printf("Please select quantity : ");
        scanf("%d", &b);
        Pizza = 239 * p;
        printf("Your bill is : %d", Pizza);
        break;
    case 2:
        printf("You selected Burger.\n");
        printf("Please select quantity : ");
        scanf("%d", &b);
        Burger = 129 * b;
        printf("Your bill is : %d", Burger);
        break;
    case 3:
        printf("you selected French Fries.n\");
        printf("You selected French Fries.\n");
        printf("Please select quantity : ");
        scanf("%d", &b);
        French Fries = 99* f;
        printf("Your bill is : %d", Pizza);
        break; 
    case 4:
        printf("you selected Sandwich .n\");
        printf("You selected Sandwich.\n");
        printf("Please select quantity : ");
        scanf("%d", &b);
        Sandwich = 149 * p;
        printf("Your bill is : %d", Sandwich);
        break;
        
   
