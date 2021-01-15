#include<iostream>
#define MAX 10
using namespace std ;

struct Stack
{
    int *data;
    int top ;

};
typedef struct Stack Stack ;

void pushA(Stack *s1 , int info ,int top2 )
{
    if( (s1->top)+1 == top2 )
    {
        cout <<"\nStack is Full \n" ;
        return ;
    }

    (s1->top)++ ;
    s1->data[s1->top] = info ;

}
void pushB(Stack *s2 , int info ,int top1 )
{
    if( (s2->top)-1 == top1 )
    {
        cout <<"\nStack is Full \n" ;
        return ;
    }
    (s2->top)-- ;
    s2->data[s2->top] = info ;

}

void popA(Stack *s1)
{
    if(s1->top == -1)
    {
        cout <<"\n Stack Underflow" ;
        return ;
    }
    --(s1->top) ;

}
void popB(Stack *s2)
{
    if( s2->top == MAX )
    {
        cout <<"\n Stack Underflow " ;
        return ;
    }
    ++(s2->top) ;

}

void peek(Stack s)
{
    cout <<"\n element on top :"<<s.data[s.top] ;

}




int main()
{
    Stack s1,s2 ;
    int arr[MAX] ;

    // creating empty stack s1
    s1.top = -1 ;
    s1.data = arr ;

    // creating empty stack s2
    s2.top = MAX ;
    s2.data = arr ;

    pushA(&s1 , 1 , s2.top) ;
    pushA(&s1 , 2 , s2.top) ;
    pushA(&s1 , 3 , s2.top) ;
    pushA(&s1 , 4 , s2.top) ;
    pushA(&s1 , 5 , s2.top) ;
    pushA(&s1 , 6 , s2.top) ;
    peek(s1) ;
    popA(&s1);
    peek(s1) ;

    pushB(&s2 , 100 ,s1.top) ;
    pushB(&s2 , 200 ,s1.top) ;
    pushB(&s2 , 300 ,s1.top) ;
    pushB(&s2 , 400 ,s1.top) ;
    peek(s2) ;
    popB(&s2) ;
    peek(s2) ;




}
