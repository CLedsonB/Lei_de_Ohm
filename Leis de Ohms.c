#include <stdio.h> //putchar(toupper(ch)); -> maiuscula
#include <locale.h>
#include <math.h>

float tensao();
float potencia();
float resistencia();
float corrente();
int linha();

linha()
{
	int i;
	putchar('\n');
	printf("\t\t\t");
	for(i=1;i<=30;i++)
		putchar ('*');
	putchar('\n');
}
	
	
float tensao()
	{
	float u1, u2, r, p, i, u3;
	printf("Ohms(R) =  "); scanf("%f", &r);
	printf("\nWatts(P) = "); scanf("%f", &p);
	printf("\nAmpéres(I) = "); scanf("%f", &i);
	u1=r*i;
	u2=p/i;
	u3=p*r;
	printf("\n\n\tTESTANDO AS FORMÚLAS POSSIVEÍS...");

	printf("\n\nTensão(Volts) = %.2f  para U= R*I", u1);
	printf("\nTensão(Volts) = %.2f  para U= P/I", u2);
	printf("\nTensão(Volts) = %.2f  para U= RAIZ P*R",pow(u3, 0.5));
}
float potencia()
	{
	float p1, p2, p3, r, u, i;
	printf("Ohms(R) =  "); scanf("%f", &r);
	printf("\nTensão(U) = "); scanf("%f", &u);
	printf("\nAmpéres(I) = "); scanf("%f", &i);
	p1=i*u;
	p2=pow(i,2)*r;
	p3=pow(u,2)/r;
	printf("\n\n\tTESTANDO AS FORMÚLAS POSSIVEÍS...");

	printf("\n\nPotência(Watts) = %.2f  para P= I*U" , p1);
	printf("\nPotência(Watts) = %.2f  para P= R*I^2", p2);
	printf("\nPotência(Watts) = %.2f  para P=U^2/R",p3);		
}
		
float corrente()
	{
	float i1, i2, i3, r, u, p;
	printf("Ohms(R) =  "); scanf("%f", &r);
	printf("\nTensão(U) = "); scanf("%f", &u);
	printf("\nPotência(P) = "); scanf("%f", &p);
	i1=u/r;
	i2=p/u;
	i3=p/r;

	printf("\n\n\tTESTANDO AS FORMÚLAS POSSIVEÍS...");
	printf("\n\nCorrente(Ampéres) = %.2f  para I= U/R " , i1);
	printf("\nCorrente(Ampéres) = %.2f  para I= P/U ", i2);
	printf("\nCorrente(Ampéres) = %.2f  para I= RAIZ P/R",pow(i3, 0.5));
}
float resistencia()
	{
	float r1, r2, r3, p, u, i;
	printf("Potência(P) =  "); scanf("%f", &p);
	printf("\nTensão(U) = "); scanf("%f", &u);
	printf("\nAmpéres(I) = "); scanf("%f", &i);
	r1=u/i;
	r2=pow(u,2)/p;
	r3=p/pow(i,2);
	printf("\n\n\tTESTANDO AS FORMÚLAS POSSIVEÍS...");
	printf("\n\nResistência = %.2f  para R= U/I" , r1);
	printf("\nResistência = %.2f  para R= U^2/P", r2);
	printf("\nResistência = %.2f  para R=P/I^2",r3);
}

int main(){
	setlocale(LC_ALL, "");	
	short int a; char b;
		do{
			printf("Sendo\n1 = Potência\n2 = Tensão\n3 = Corrente\n4 = Resistência\n");
			printf("Digite umas das opções: "); scanf("%d", &a);
			printf("DIGITE SOMENTE OS VALORES DE UNIDADE QUE VOCÊ TEM, PARA OS VALORES DESCONHECIDOS DIGITE ZERO\n");
			switch(a)
				{
				case 1: system("color 01"); potencia(); linha(); break;
		
				case 2: system("color 06"); tensao(); linha(); break;

				case 3: system("color 0f"); corrente(); linha(); break;
			
				case 4: system("color 04"); resistencia(); linha(); break;
		
				default:
					system("color 17");
					printf("\n\n\t\tERROR 404");
				}
		printf("\nDeseja Recalcular? "); getchar(); scanf("%c", &b);
		}
	while(b!='n' && b!='N');
	//ENQUANTO O CARACTERE INSERIDO FOR DIFERENTE DE N, ELE CONTINUARÁ EXECUTANDO.
	return 0;
	}
