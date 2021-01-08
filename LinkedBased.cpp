#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#define E_Type int
using namespace std;

struct Stack
{
    E_Type element;
    Stack* next;
    Stack* top=NULL;
};

void push(Stack* s,E_Type ele);
void pop(Stack* s);
void display(Stack* s);
bool Empty();

int main()
{
    Stack stk;
    push(&stk,5);
    push(&stk,5);
    push(&stk,5);
    pop(&stk);
    pop(&stk);
    pop(&stk);
    push(&stk,5);
    display(&stk);
    return 0;
}

void push(Stack* s,E_Type ele)
{
    Stack* nw= new Stack;
    nw->element=ele;
    nw->next=s->top;
    s->top=nw;
}

void pop(Stack* s)
{
    Stack* point=s->top;
    s->top=point->next;
}

void display(Stack* s)
{

    if(s->top!=NULL)
    {
        Stack* current=s->top;
        while(current!=NULL)
        {
            cout<<current->element<<"\n";
            current=current->next;
        }
    }
}


bool Empty(Stack* s)
{
    if(s->top==NULL)
        return 1;
    return 0;
}
