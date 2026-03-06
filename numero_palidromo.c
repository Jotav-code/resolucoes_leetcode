bool isPalindrome(int x){
    int numero_original = x ;
    int numero_copy = x;
    int numero_invertido[100];
    int i = 0;
    while(numero_copy > 0){
        numero_invertido[i] = numero_copy % 10 ; 
        numero_copy = numero_copy /10;
        i++;
    }
    double valor_final = 0;
    int k = 0;
    for(int j = i; j > 0; j--){
        valor_final += numero_invertido[k++] * pow(10 , j);
    }
    valor_final = valor_final/10;
    // printf("%d",valor_final );

    for(int j = 0; j < i; j++ ){
        printf(" %d ", numero_invertido[j]); 
    }
    if(valor_final == numero_original){
        return true;
    }else{
        return false;
    }
        
    
    return 0;
}
