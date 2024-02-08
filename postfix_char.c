#include <stdio.h>
#include <string.h>

#define N 20

char stack[N];
int top = -1;

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
    char x, y;
    for (i = 0; i < strlen(e); i++) {
        if (e[i] >= 'a' && e[i] <= 'z') {
            push(e[i]);
        } else {
            if (top < 1) {
                printf("Invalid expression.\n");
                return -1;
            }
            x = pop();
            y = pop();
            switch (e[i]) {
                case '+':
                    push(y + x);
                    break;
                case '-':
                    push(y - x);
                    break;
                case '*':
                    push(y * x);
                    break;
                case '/':
                    push(y / x);
                    break;
                default:
                    printf("Invalid expression.\n");
                    return -1;
            }
        }
    }
    return pop();
}

int main() {
    printf("Enter the postfix expression:\n");
    char e[20];
    fgets(e, sizeof(e), stdin);
    int result = evalPostfix(e);
    if (result != -1) {
        printf("The result of the postfix expression is %d\n", result);
    }
    return 0;
}
