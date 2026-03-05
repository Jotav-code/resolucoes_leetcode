#include<stdio.h>
#include<math.h>

int main() {
    float numero_copy = 999;
    int numero_invertido[100];
    int i = 0;
    while(numero_copy > 0){
        numero_copy = numero_copy / 10;
        // printf("%f aqui", numero_copy);
        float quebra_numero = numero_copy;
        // printf("%f eu \n", quebra_numero);
        numero_invertido[i] =  ((quebra_numero - floor(numero_copy)) * 10) + 0.00001; 
        numero_copy = trunc(numero_copy);
        i++;
    }
    int valor_final = 0;
    int k = 0;
    for(int j = i; j > 0; j--){
        valor_final += numero_invertido[k++] * pow(10 , j);
    }
    valor_final = valor_final/10;
    printf("%d",valor_final );

    for(int j = 0; j < i; j++ ){
        printf("invertido %d", numero_invertido[j]); 
    }
    
    if(valor_final == numero_original){
        return true;
    }else{
        return false;
    }
        
    
    return 0;
}
