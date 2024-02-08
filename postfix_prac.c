// #include<stdio.h>
// #include<string.h>

// #define N 20

// int stack[N];
// int top = -1;
// int r, x, y, a;

// void push(int item) {
//     if (top == N - 1) {
//         printf("Stack is full\n");
//     } else {
//         top = top + 1;
//         stack[top] = item;
//     }
// }

// int pop() {
//     if (top == -1) {
//         printf("Stack is empty, no element to pop\n");
//         return -1;
//     } else {
//         return stack[top--];
//     }
// }

// int evalPostfix(char e[]) {
//     int i;
//     for (i = 0; i < strlen(e); i++) {
//         if (e[i] >= '0' && e[i] <= '9') {
//             push(e[i] - '0');
//         } else {
//             x = pop();
//             y = pop();
//             switch (e[i]) {
//                 case '+':
//                     r = y + x;
//                     break;
//                 case '-':
//                     r = y - x;
//                     break;
//                 case '*':
//                     r = y * x;
//                     break;
//                 case '/':
//                     r = y / x;
//                     break;
//             }
//             push(r); // Add semicolon here
//         }
//     }
//     a = pop();
//     return a;
// }

// int main(){
//     int x;
//     char e[30];
//     printf("Enter postfix expression:\n");
//     gets(e);
//     x = evalPostfix(e); // Pass the character array e
//     printf("Postfix evaluation is: %d\n", x);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
#define N 20
int top=-1;
int stack[N];
int r,x,y,a;
void push(int item){
    if(top==N-1){
        printf("Stack is fyll.Can't push element:-\n");
       
    }
    else
    {
        top=top+1;
        stack[top]=item;

    }
    

}
int  pop(){
        if(top ==-1){
            printf("Stack is empty.Can't pop element");
             return -1;
        }
        else
        {
            
            return stack[top--];
        }
    }
int evalPostfix(char e[]){
    int i;
    for(i=0;i<strlen(e);i++){
        if(e[i]>='0' && e[i]<='9'){
            push(e[i]-'0');
        }
        else
        {
            x=pop();
            y=pop();
            switch (e[i])
            {
            case '+':
                r=y+x;
                    break;
                        case '-':
                            r=y-x;
                                 break;
                                    case '*':
                                        r=y*x;
                                             break;
                                                case '/':
                                                    r=y/x;
                                                         break;

            default:
            printf("Invalid expression\n");
                break;
                
            }
            push(r);
        }
    }
    a=pop();
    return a;
}
int main(){
    printf("Enter the postfix expression:-\n");
    char e[20];
    fgets(e, sizeof(e), stdin);
    x=evalPostfix(e);
    printf("The postfix expression is %d",x);
    return 0;
}

