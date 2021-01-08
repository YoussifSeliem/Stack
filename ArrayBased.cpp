#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define iso ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Stack_Type int

using namespace std;
struct STACK
{
    Stack_Type Stack_elements[100000];
    int TOP=-1;
};

void PUSH(STACK* stk,int val);
void top(STACK* stk);
void POP(STACK* stk);
bool EMPTY(STACK* stk);
bool FULL(STACK* stk);
int StSize(STACK* stk);
void SWAP(STACK* stk);
void Dis_elements(STACK* stk);

int main()
{
    STACK stk;
    PUSH(&stk,5);
    PUSH(&stk,8);
    SWAP(&stk);
    Dis_elements(&stk);
    return 0;
}

void PUSH(STACK* stk,int val)
{
    if(!FULL(stk))
    {
        stk->TOP++;
        stk->Stack_elements[stk->TOP]=val;
    }
}

void top(STACK* stk)
{
    if(!EMPTY(stk))
        cout<<stk->Stack_elements[stk->TOP]<<"\n";
}

void POP(STACK* stk)
{
    if(!EMPTY(stk))
        stk->TOP--;
}

bool EMPTY(STACK* stk)
{
    if(stk->TOP==-1)
        return 1;
    return 0;
}


bool FULL(STACK* stk)
{
    if(stk->TOP<99999)
        return 0;
    return 1;
}

int StSize(STACK* stk)
{
    return stk->TOP+1;
}

void SWAP(STACK* stk)
{
    if(StSize(stk)<=1)
        return;
    stk->Stack_elements[stk->TOP]=stk->Stack_elements[stk->TOP]+stk->Stack_elements[stk->TOP-1];
    stk->Stack_elements[stk->TOP-1]=stk->Stack_elements[stk->TOP]-stk->Stack_elements[stk->TOP-1];
    stk->Stack_elements[stk->TOP]=stk->Stack_elements[stk->TOP]-stk->Stack_elements[stk->TOP-1];
}
void Dis_elements(STACK* stk)
{
        for(int i=stk->TOP; i>-1; i--)
            cout<<stk->Stack_elements[i]<<" ";
        cout<<"\n";
}

