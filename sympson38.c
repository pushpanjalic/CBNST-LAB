 #include<stdio.h>
   #include<conio.h>
   #include<math.h>
   #define f(x) 1/(1+x);

   void main()
   {
    int n,i;
    float a,b,s,s1=0,s2=0,u,h,y;
    clrscr();
    printf("\t\t\tINPUT\n");
    printf("Enter the uper limit: ");
    scanf("%f",&a);
    printf("Enter the lower limit: ");
    scanf("%f",&b);
    printf("Enter the interval: ");
    scanf("%d",&n);
    h=(a-b)/n;
    s=f(a)+f(b);
    for(i=1;i<=n-1;i++)
    { if(i%3==0)
        {
            s1=s1+2*f(a+(i*h));
        }
        else
        {
            s2=s2+2*f(a+(i*h));
        }
        u=((3*h)/8)*(s+s1+s2);
    }
    printf("\t\t\tOUTPUT\n");
    printf("Answer is: %f",u);

    getch();
}
