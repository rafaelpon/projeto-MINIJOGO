#include <stdio.h>	
#include <stdlib.h>

main()
{
int op;
int volt=2;
int ini;
char res;
int ale;
int numero;
int i;
int volt2;
int tent=0;
char nome[40]; 
char nome2[40];
int ale1;
int dado1;
int dado2;
int volt3;
int vez;
int total1;
int total2;
int pts1;
int pts2;
int volt4;




while(volt ==2) {
system("color 2F");
	
printf ("-------------------------------------------------------------------------------\n");	
printf ("d8888b. d88888b .88b  d88.      db    db d888888b d8b   db d8888b.  .d88b.  db \n");
printf ("88   8D 88'     88'YbdP 88      88    88    88'   888o  88 88   8D .8P  Y8. 88 \n");
printf ("88oooY' 88ooooo 88  88  88      Y8    8P    88    88V8o 88 88   88 88    88 YP \n");
printf ("88   b. 88      88  88  88       8b  d8'    88    88 V8o88 88   88 88    88    \n");
printf ("88   8D 88.     88  88  88        8bd8'    .88.   88  V888 88  .8D  8b  d8' db \n");
printf ("Y8888P' Y88888P YP  YP  YP         YP    Y888888P VP   V8P Y8888D'   Y88P'  YP	\n");
printf ("-------------------------------------------------------------------------------\n\n");		
	

	srand(time(NULL));


	
	
	

printf("                       ESCOLHA UM PARA JOGAR\n                       1-PERGUNTAS E RESPOSTAS\n                       2-ADVINHE O NUMERO\n                       3-OLHO DE COBRA\n                       4-SAIR. \n");
scanf("%d", &ini);	
getchar();system("cls");
system("color F");

 switch(ini){
 	case 1:{//perguntas e respostas	
 	
 	printf ("PERGUNTAS E RESPOSTAS\nSerao 3 perguntas, somente uma alternativa e a correta!");		
 	printf ("\n\nPressione \"enter\" para continuar...\n");
 	
 	getchar();system("cls");
 		volt=1;
while(volt ==1) { 
//=========================================================================================================================================   	
	printf("1) Andando por uma rua, um homem conta dez arvores a sua direita. Na volta,  \n");
	printf("conta dez arvores a sua esquerda. Quantas arvores ele viu no total?     \n");
	printf("a) 20 \nb) 5 \nc) 10\n");
	scanf("%c", &res);
	
	if(res == 'c'||'C'){ 
	system("color A");
	printf("RESPOSTA CERTA!!\n");
	printf ("Pressione \"enter\" para continuar...\n");
	getchar();
	getchar();
	}
	
 else{
	printf("RESPOSTA errada!!\n A resposta correta e c\n");
       system("color C");
       printf ("Pressione \"enter\" para continuar...\n");
       getchar();
	   getchar();
	   }
 //=========================================================================================================================================                         
   system("cls");
   system("color F");
printf("2) Se eu multiplicar esse numero por qualquer outro, a resposta sera sempre a mesma. Qual o numero?  \n");
    
	printf("a) 1 \nb) 0 \nc) 10\n");
	scanf("%c", &res);
	
	if(res == 'b'||'B')
	
	{
	printf("RESPOSTA CERTA!!\n"); 
	system("color A");   
	printf ("Pressione \"enter\" ra continuar...\n");
	getchar();getchar();
}
	else{
	printf("RESPOSTA errada!!\n A resposta correta e b\n" );
	   system("color C");  printf ("Pressione \"enter\" para continuar...\n");
       getchar();getchar();
}


//=========================================================================================================================================   
   system("cls");
   system("color F");
   printf("3) Voce tem 7 velas e 2 delas se apagam. Quantas velas ficam? \n");

	printf("a) 5 \nb) 0 \nc) 7\n");
	scanf("%c", &res);
	
	if(res == 'c' || 'C')
	
	{
	printf("RESPOSTA CERTA!!\n");
	printf ("Pressione \"enter\" para continuar...\n");
	system("color A");  
	getchar();getchar();
}
	
	else{
	printf("RESPOSTA errada!!\n A resposta correta e c\n");
	   system("color C");  printf ("Pressione \"enter\" para continuar...\n");
       getchar();getchar();
	   
	   }
//=========================================================================================================================================   
   system("cls");
   system("color F");
      volt=0;
printf ("-------------------------------------------------------------------------------\n");

printf ("FIM \n OBRIGADO POR JOGAR\n 1-JOGAR NOVAMENTE\n 2- VOLTAR AO MENU\n");
scanf("%i", &volt);

getchar();system("cls");
}

 		
 		
 		
		break;
	 }
 	
 	case 2:{//advinhe o numero
 		volt = 1;
 		while(volt==1) {
		volt=1;
		while(volt ==1) {
			ale = rand() % 1000;
			printf("Sorteando numero entre 1 e 1000...\n");
			printf("Tente adivinhar o numero!\nVoce tem 5 tentativas\n");

			for(i=0; i < 5; i++) {
				tent++;
				printf("Tentativa %d:\n", tent);
				scanf("%d", &numero);


				if(numero>ale)
					printf("-----O nunero e menor\n\n");
				else if(numero<ale)
					printf("-----O nunero e maior\n\n");
				else if(numero = ale) {
					printf("Parabens! Voce acertou o numero (%d)\n", ale);
					i=5;
				}

			}

			printf ("-------------------------------------------------------------------------------\n");
			printf("FIM DE JOGO\nO Valor era %d\n", ale);
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Pressione \"enter\" para continuar...\n");

		
			getchar();
			getchar();

			system("cls");
			printf ("-------------------------------------------------------------------------------\n");

			printf ("OBRIGADO POR JOGAR\n 1-JOGAR NOVAMENTE\n 2- VOLTAR AO MENU\n");
			scanf("%i", &volt);

			getchar();
			system("cls");
		}

}

 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
		break;
	 }
 	
 	case 3:{// olho de cobra
 	printf ("OLHO DE COBRA\nO computador vai jogar dois dados e a soma dos valores e adicionado para a pontuacao do jogador\nO jogador pode escolher jogar os dados novamente ou finalizar seu turno\n\n");
 	printf ("Ao finalizar o turno, o jogador salva todos os pontos que ganhou, e passa a vez\n");
    printf ("Ao jogar, a soma desses novos valores sera acrescentado a sua pontuacao, porem o jogador tem dois riscos!\n\n  1)Se em um dado cair o valor 1, o jogador perde todos os pontos no turno e perde sua vez.\n\n  2)Se os dois dados cairem 1, o jogador perde todos os pontos que ganhou durante o jogo, voltando para zero, e perde sua vez.\n");
 	
 	
 	
 	printf ("\n\nPressione \"enter\" para continuar...\n");
 	
 	getchar();system("cls");
 	
 		volt=1;
while(volt==1){


	printf ("\nNOME DO JOGADOR 1: ");
	scanf("%s",&nome);
	printf ("\nNOME DO JOGADOR 2: ");
	scanf("%s",&nome2);
	system("cls");
	printf ("\nSEJA BEM VINDO %s e %s\n",nome,nome2);
	
	    srand(time(NULL));
        ale1 = rand() % 2 +1;
        
        if(ale1==1){
        	vez =1;
            printf ("O %s comeca\n",nome);
        }
        else if(ale1==2){
        	vez=2;
            printf ("O %s comeca\n",nome2);
            
           
        }
        total1=0;
        total2=0;
        pts1=0,
        pts2=0;
	   
	   
	   //sorteio
	   //===================================================================================================
	   
	   volt=3;
	    while(volt ==3){
		
		if(vez==1)
			printf("\nVez de %s\n",nome);
		else if(vez==2)
		printf("\nVez de %s\n",nome2);
		
		
		//=================================================================================================
		
		printf("1-Jogar dados?\n");
		printf("2-Finalizar turno?\n");
		scanf("%d",&volt2);
        switch(volt2){
		
		case 1:{
			dado1= rand() % 5 +1;
            dado2= rand() % 5 +1;
	
			
			printf("Dado 1 =  %d\n",dado1);
	   	   	printf("Dado 2 =  %d\n",dado2);
	   	   	pts1= dado1+dado2;
	   	   	pts2= dado1+dado2;
	   	   	getchar();
	   	   
			if(dado1<2 && dado2<2){	// dois 1
	   	   		    if(vez==1){
  		   	 	   	    vez = 2;
						printf("%s perdeu seu total de pontos\n",nome);
  				  	    total1 = 0;
						getchar();system("cls");
					}else if(vez==2){
						vez = 1;
						printf("%s perdeu seu total de pontos\n",nome2);
		   				total2 = 0;
						getchar();system("cls");
			        }
			  }else if(dado1<2||dado2<2){ // um 1
				    if(vez==1){
				    	vez = 2;
						printf("%s perdeu sua vez e nao pontuou\n",nome);
			  			pts1 = 0;
			  			getchar();system("cls");
					}else if(vez==2){
						vez = 1;
						printf("%s perdeu sua vez e nao pontuou\n",nome2);
			  			pts1 = 0;     
						getchar();system("cls");    
			}
			}else{
				 if(vez==1){
				 	    total1 += pts1;
				        if((total1+pts1)<50){
						
						printf("%s pontua + %d\n",nome,pts1);
						printf("Total de pontos %s:%d\n",nome,total1);	
					}else{
						printf("%s ganhou o jogo!!!\n",nome);
						printf ("Pressione \"enter\" para continuar...\n");
			            getchar();
						system("cls");
			            printf ("-------------------------------------------------------------------------------\n");
						printf("OBRIGADO POR JOGAR\n 1-JOGAR NOVAMENTE\n 2- VOLTAR AO MENU\n");
						scanf("%d",&volt);
						getchar();
			            system("cls");
					}	
			}else if(vez==2){
				    total2 += pts2;
 	   				if((total2+pts2)<50){
						
 	   					printf("%s pontua + %d\n",nome2,pts2);
						printf("Total de pontos %s:%d\n",nome2,total2);	
					}else{
						printf("%s ganhou o jogo!!!\n",nome2);
						printf ("Pressione \"enter\" para continuar...\n");

		
			            
			            getchar();
						system("cls");
			            printf ("-------------------------------------------------------------------------------\n");
						printf("OBRIGADO POR JOGAR\n 1-JOGAR NOVAMENTE\n 2- VOLTAR AO MENU\n");
						scanf("%d",&volt);
						getchar();
			            system("cls");
						}
 	   			
			}	
			}
			break;
  	    }
			
			case 2:
			if(vez==1){
				pts1 += total1;
				vez = 2;
					system("cls");
			}else{
				pts2 += total2;
				vez = 1;
					system("cls");
			}
		
			break;
		}
	}
			
			
			
}
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
		break;
	 }
 	
 	case 4:{
 		exit(0);
		break;
	 }
 }





			
			
			
			
			
			
			
			
			
}
}
                                                
