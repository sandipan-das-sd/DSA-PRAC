#include <stdio.h>
#include <string.h>

#define N 20

char stack[N];
int top = -1;
char r, x, y, a;

void push(char item) {
    if (top == N - 1) {
        printf("Stack is full. Can't push element.\n");
    } else {
        top = top + 1;
        stack[top] = item;
    }
}

char pop() {
    if (top == -1) {
        printf("Stack is empty. Can't pop element.\n");
        return '\0';
    } else {
        return stack[top--];
    }
}

int evalPostfix(char e[]) {
    int i;
    for (i = 0; i < strlen(e); i++) {
        if (e[i] >= 'a' && e[i] <= 'z') {
            push(e[i]);
        } else {
            x = pop();
            y = pop();
            switch (e[i]) {
                case '+':
                    r = y + x;
                    break;
                case '-':
                    r = y - x;
                    break;
                case '*':
                    r = y * x;
                    break;
                case '/':
                    r = y / x;
                    break;
                default:
                    printf("Invalid expression.\n");
                    return -1;
            }
            push(r);
        }
    }
    a = pop();
    return a;
}

int main() {
    printf("Enter the postfix expression:\n");
    char e[20];
    fgets(e, sizeof(e), stdin);
    int x = evalPostfix(e);
    printf("The result of the postfix expression is %c\n", x);
    return 0;
}
