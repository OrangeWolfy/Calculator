#include<stdio.h>

int main(){
    int n1, n2, b, res;
    char op;

    printf("Calculator\n");
    printf("Enter your operation: ");
    scanf("%d %c %d", &n1, &op, &n2);
    switch(op){
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
        case 'x':
            res = n1 * n2;
            break;
        case '/':
            if(n2 != 0)
                res = n1 / n2;
            else printf("Cannot divide by 0\n");
            break;
        default:
            printf("Invalid operation\n");
            return 1;
            break;
    }
    printf("%d %c %d = %d\n", n1, op, n2, res);
    return 0;
}

