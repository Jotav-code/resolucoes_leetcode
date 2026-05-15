class Solution {
public:

    int processarLetra(char s){
        switch (s){
            case 'I':
                return 1;
            break;

            case 'V':
                return 5;
            break;

            case 'X':
                return 10;
            break;

            case 'L':
                return 50;
            break;
        }
        return 0;
    }
    int romanToInt(string s) {

        int soma = 0;
        int tamanho = s.size();
        int ultimoValor = 0;
        for (int i = tamanho - 1; i >= 0; i-2){
            int valor = processarLetra(s[i]);

            if(valor < )      
        }
        return soma;
    }
};
