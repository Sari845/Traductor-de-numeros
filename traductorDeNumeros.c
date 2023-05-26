#include<stdio.h>
#include<math.h>

int dec_bin(int);
int dec_oct(int);
int dec_hex(int);

#define DEC_BIN 1
#define DEC_OCT 2
#define DEC_HEX 3
#define BIN_DEC 4
#define BIN_OCT 5
#define BIN_HEX 6
#define OCT_DEC 7
#define OCT_BIN 8
#define OCT_HEX 9
#define HEX_DEC 10
#define HEX_BIN 11
#define HEX_OCT 12

int main(void){

    int val;
    int tipo;
    int menu;

    printf("Ingrese el tipo de valor a traducir: (1 = dec a binario || 2 = dec a octal || 3 = dec a hex || 4 = binario a dec || 5 = binario a octal || 6 = binario a hex || 7 = octal a decimal || 8 = octal a binario || 9 = octal a hex || 10 = hex a dec || 11 = hex a binario || 12 = hex a octal)");
    scanf("%d", &tipo);
    printf("Ingrese un valor para traducir:");
    scanf("%d", &val);
    menu = tipo;
    printf("%d", menu);

    switch(menu){
        case DEC_BIN:
            dec_bin(val);
            break;

        case DEC_OCT:
            dec_oct(val);
            break;

        case DEC_HEX:
            dec_hex(val);
            break;

        case BIN_DEC:
            bin_dec(val);
            break;

        case BIN_OCT:
            bin_oct(val);
            break;
    }
}

int dec_bin(int val){
    int i, f;
    int objeto[50];
    for ( i = 0; i < 100; i++) {
        objeto[i] = val % 2;
        val = val / 2;

        if (val == 1/2) {
            f = i;
            //printf("%d", f);
            i = 101;
        }

    }
    printf("Su valor en binario es:");
    for ( f; f > -1; f--) {
        printf("%d", objeto[f]);
    }
    printf("\n\n");
}

int dec_oct(int val){
    int i, f;
    int objeto[50];
    for ( i = 0; i < 100; i++) {
        objeto[i] = val % 8;
        val = val / 8;

        if (val == 1/2) {
            f = i;
            //printf("%d", f);
            i = 101;
        }

    }
    printf("Su valor en octal es:");
    for ( f; f > -1; f--) {
        printf("%d", objeto[f]);
    }
    printf("\n\n");
}

int dec_hex(int val){
    int i, f;
    char objeto[50];

    for(i=0; i<100;i++){
        objeto[i] = val % 16;
        val = val / 16;

        if (val < 16) {
            f = i+1;
            objeto[f] = val;
            //printf("%d", f);
            i = 101;
        }

    }
    printf("Su valor en hexadecimal es:");
    for ( f; f > -1; f--) {
        if (objeto[f]==10){
            objeto[f]='A';
            printf("%c", objeto[f]);
        }
        else if (objeto[f]==11){
            objeto[f]='B';
            printf("%c", objeto[f]);
        }
        else if (objeto[f]==12){
            objeto[f]='C';
            printf("%c", objeto[f]);
        }
        else if (objeto[f]==13){
            objeto[f]='D';
            printf("%c", objeto[f]);
        }
        else if (objeto[f]==14){
            objeto[f]='E';
            printf("%c", objeto[f]);
        }
        else if (objeto[f]==15){
            objeto[f]='F';
            printf("%c", objeto[f]);
        }
        else printf("%d", objeto[f]);

    }
    printf("\n\n");
}

void bin_dec(int x){
double decimal, residuo, i = 0;
    while(x!=0){
        residuo=x%10;
        x=x/10;
        decimal=decimal+residuo*(pow(2,i));
        i++;
}
    printf("El valor en decimal es %.2f", decimal);
}

void bin_oct(int n){
 int grupo, decimal, octal, posicion = 0;
    while (n != 0) {
        grupo = n % 1000;  // Obtiene el ultimo grupo de tres digitos
        n = n / 1000;  // Elimina el ultimo grupo de tres digitos

        while (grupo != 0) {
            int digito = grupo % 10;  // Obtiene el ultimo digito del grupo
            grupo = grupo / 10;  // Elimina el ultimo digito del grupo

            decimal += digito * pow(2, potencia); // Se calcula el valor decimal del digiyo actual multiplicandolo por la potencia correspondiente de 2
            potencia++;
        }
        octal += decimal * pow(10, posicion);
        posicion++;
    }
    printf("El valor en octal es: %d\n", octal);
}


