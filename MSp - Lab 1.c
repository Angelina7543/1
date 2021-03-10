#include<conio.h>
#include<stdio.h>

int main()
{
   int Mat_Smej[20][20]={0};
   int Mat_Inc[20][20]={0}; 
   int Spisok[20][20]={0};
   int Kol_Ver, Kol_Sveaz;
   int i, j;

   unsigned graf;


    printf("1) Matrita smejnosti \n");
    printf("2) Matrita intidentnosti \n");
    printf("3) Spisok smejnosti \n");

    printf("Enter  ");
    scanf("%d", &graf);

//вопросы
    printf("\n Kolicestvo versin? \n");
    scanf("%d", &Kol_Ver);
    printf(" Kolicestvo sveazei? \n");
    scanf("%d", &Kol_Sveaz);


    if (graf > 3) {
        graf = graf % 3;
    }

    switch (graf) {

//Матрица смежности
    case 1:
     //   printf("Monday");

        printf("\n Matrica smejnosti - vesti cisla: \n");
    for ( i=1; i<=Kol_Ver; i++)
    {
    for ( j=1; j<=Kol_Ver; j++)
        scanf("%d", &Mat_Smej[i][j]);
    }


//Matrica smejnosti (vivod)

    printf("\n Matrica smejnosti vivod: \n");
    printf("\n");
    printf("   |");
    for ( i=1; i<=Kol_Ver; i++)
    if ( i<10 ) printf(" X%d |", i);
       else printf(" X%d |", i);
    printf("\n");
    for ( j=1; j<=Kol_Ver; j++)
    printf("------");
    printf("\n");
    for ( i=1; i<=Kol_Ver; i++)
    {
    if ( i<10 ) printf("X%d |", i);
       else printf("X%d |", i);
    for ( j=1; j<=Kol_Ver; j++)
        printf("  %d |", Mat_Smej[i][j]);
    printf("\n");
    for ( j=1; j<=Kol_Ver; j++)
    printf("------");
    printf("\n");
    }
    for ( j=0; j<=Kol_Ver; j++)
    printf("   |");
    printf("\n");
        break;

//Матрица инцидентности
    case 2:
      //  printf("Tuesday");

        printf("\n Matrica incidentnosti - vesti cisla: \n");
    for ( i=1; i<=Kol_Sveaz; i++)
    {
    for ( j=1; j<=Kol_Ver; j++)
        scanf("%d", &Mat_Inc[i][j]);
    }


//Matrica incidentnosti (vivod)

    printf("\n Matrica incidentnosti vivod: \n");
    printf("\n");
    printf("   |");
    for ( i=1; i<=Kol_Ver; i++)
    if ( i<10 ) printf(" X%d |", i);
       else printf(" X%d |", i);
    printf("\n");
    for ( j=1; j<=Kol_Ver; j++)
        printf("------");
        printf("\n");
    for ( i=1; i<=Kol_Sveaz; i++)
    {
    if ( i<10 ) printf("U%d |", i);
       else printf("U%d |", i);
    for ( j=1; j<=Kol_Ver; j++)
        if ( Mat_Inc[i][j]<0 ) printf(" %d |", Mat_Inc[i][j]);
           else printf("  %d | ", Mat_Inc[i][j]);
    printf("\n");
     for ( j=1; j<=Kol_Ver; j++)
    printf("------");
    printf("\n");
    }
     for ( j=0; j<=Kol_Ver; j++)
    printf("   |");
    printf("\n");
        break;

//Список
    case 3:
      //  printf("Wednesday");

        printf("\n Spisok cisla - vesti cisla: \n");
    for ( i=1; i<=Kol_Ver; i++)
    {
    for ( j=1; j<=20; j++)
        {
        scanf("%d", &Spisok[i][j]);
        if ( Spisok[i][j]==0 ) break;
        }
    }

//Spisok (vivod)

    printf("\n Spisok vivod: \n");
    printf("\n");
    for ( i=1; i<=Kol_Ver; i++)
    {
    if ( i<10 ) printf(" %d |", i);
       else printf(" %d |", i);
    j=1;
    while(Spisok[i][j]!=0)
    {
    printf(" %d,", Spisok[i][j]);
    j++;
    }
    printf(" 0\n");
    for ( j=1; j<=Kol_Ver; j++)
    printf("-----");
    printf("\n");
    }
    printf("\n");
        break;

    default:
        printf("Error");
    }

    getch();
    return 0;
}
