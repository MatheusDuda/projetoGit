//ARQUIVO MATHEUS


// Conversor de temperatura com funções
#include <stdio.h>


int ImprimirMenu();
float HzParaKHz(float A);
float HzParaMHz(float A);
float HzParaGHz(float A);

float KHzParaHz(float A);
float KHzParaMHz(float A);
float KHzParaGHz(float A);

float MHzParaHz(float A);
float MHzParaKHz(float A);
float MHzParaGHz(float A);

float GHzParaHz(float A);
float GHzParaKHz(float A);
float GHzParaMHz(float A);

int main(){
	float frequencia; char opcao = ImprimirMenu();
	
	while(opcao<1 || opcao>13){
		printf("\n --- Escolha uma opcao valida!! ---\n\n");
		opcao = ImprimirMenu();
	}
	
	if (opcao != 13){
		printf(" Informe o valor da frequencia: ");
		scanf("%f", &frequencia);
	}
		
	switch (opcao){
		case 1:
			printf("\n Valor em KHz: %f", HzParaKHz(frequencia));
			break;
		case 2:
			printf("\n Valor em MHz: %f", HzParaMHz(frequencia));
			break;
		case 3:
			printf("\n Valor em GHz: %f", HzParaGHz(frequencia));
			break;
		case 4:
			printf("\n Valor em Hz: %f", KHzParaHz(frequencia));
			break;
		case 5:
			printf("\n Valor em MHz: %f", KHzParaMHz(frequencia));
			break;
		case 6:
			printf("\n Valor em GHz: %f", KHzParaGHz(frequencia));
			break;
		case 7:
			printf("\n Valor em Hz: %f", MHzParaHz(frequencia));
			break;
		case 8:
			printf("\n Valor em KHz: %f", MHzParaKHz(frequencia));
			break;
		case 9:
			printf("\n Valor em GHz: %f", MHzParaGHz(frequencia));
			break;
		case 10:
			printf("\n Valor em Hz: %f", GHzParaHz(frequencia));
			break;
		case 11:
			printf("\n Valor em KHz: %f", GHzParaKHz(frequencia));
			break;
		case 12:
			printf("\n Valor em MHz: %f", GHzParaMHz(frequencia));
			break;
		case 13:
			printf("\n Obrigado por usar o conversor! Encerrando... ");
			break;			
	}	
}

int ImprimirMenu(){
	printf( ">>>> CONVERSOR DE TEMPERATURAS <<<<\n" );
	printf("\n  01) Hertz para QuiloHertz");
	printf("\n  02) Hertz para MegaHertz");
	printf("\n  03) Hertz para GigaHertz");
	printf("\n  04) QuiloHertz para Hertz");
	printf("\n  05) QuiloHertz para MegaHertz");
	printf("\n  06) QuiloHertz para GigaHertz");
	printf("\n  07) MegaHertz para Hertz");
	printf("\n  08) MegaHertz para QuiloHertz");
	printf("\n  09) MegaHertz para GigaHertz");
	printf("\n  10) GigaHertz para Hertz");
	printf("\n  11) GigaHertz para QuiloHertz");
	printf("\n  12) GigaHertz para MegaHertz");
	printf("\n  13) Sair\n\n");
	int Resposta;
	printf("\n Digite a opcao desejada: ");
	scanf("%i", &Resposta);
	return(Resposta);	
}

float HzParaKHz(float A){
	float resultado = A/1000;
	return(resultado);
}

float HzParaMHz(float A){
	float resultado = A/1000000;
	return(resultado);
}

float HzParaGHz(float A){
	float resultado = A/1000000000;
	return(resultado);
}

float KHzParaHz(float A){
	float resultado = A*1000;
	return(resultado);
}

float KHzParaMHz(float A){
	float resultado = A/1000;
	return(resultado);
}
	
float KHzParaGHz(float A){
	float resultado = A/1000000;
	return(resultado);
}

float MHzParaHz(float A){
	float resultado = A*1000000;
	return(resultado);
}

float MHzParaKHz(float A){
	float resultado = A*1000;
	return(resultado);
}

float MHzParaGHz(float A){
	float resultado = A/1000;
	return(resultado);
}

float GHzParaHz(float A){
	float resultado = A*1000000000;
	return(resultado);
}

float GHzParaKHz(float A){
	float resultado = A*1000000;
	return(resultado);
}

float GHzParaMHz(float A){
	float resultado = A*1000;
	return(resultado);
}
