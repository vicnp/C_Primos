#include "primos_header.h"

int aux(int n,int j, int i){
 	if(j>n/2||i>1){
        if(i==1)return 1;
        else return 0;
 }else{
     if(n%j==0){  
     	i=j; 
     }
    return aux(n,j+1,i);
  }  
}                 
	                				     
int prime(int x){
	return aux(x,1,0);
}

int get_nun(){
	int num =0;
	printf("Digite um número: \n");
	scanf("%d", &num);
	setbuf(stdin, NULL);
	return (num);
}

void loop(int numb){
	int x;
	for(x = 2; x<= numb; x++){
		if(prime(x) == 1){
			printf("%d -- Primo \n",x);
		}else{
			printf("%d -- Composto \n", x);
		}
 	 }
}

void replay(){
	int aux;
	printf("\n Obrigado por usar, gostaria de testar outro numero ? \n 1 = SIM 0 = NÃO\n");
	scanf("%d", &aux);
	if(aux == 1){
		system("clear");
		main();
	}else{
		exit(0);
	}
}
