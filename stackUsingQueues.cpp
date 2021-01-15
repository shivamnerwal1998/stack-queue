#include<iostream>
#include<stack>
#include<queue>
using namespace std ;

typedef struct Stack{
    queue <int> q1,q2 ;
}Stack ;

void sPush(Stack *s,int data)
{
    s->q1.push(data) ;
}
void sPop(Stack *s)
{
    if( s->q1.empty() )
    {
        cout <<"\n stack ic empty" ;
        return ;
    }
    for(int i = s->q1.size() ; i > 0 ; i-- ){
        if( s->q1.size() == 1 )
        {
            s->q1.pop();
            continue;
        }
        s->q2.push(s->q1.front()) ;
        s->q1.pop();
    }
    for( int i = s->q2.size() ; i>0 ; i-- )
    {
        s->q1.push(s->q2.front()) ;
        s->q2.pop() ;
    }

}
int main()
{
    Stack s ;
    sPush(&s,1);
    sPush(&s,2);
    sPush(&s,3);
    sPush(&s,4);
    sPush(&s,5);
    sPop(&s);
    sPop(&s);
    sPush(&s,100) ;
    sPop(&s) ;
    cout<<"\nback:"<<s.q1.back() ;
    cout<<"\nfront:"<<s.q1.front() ;
    cout<<"\nsize :"<<s.q1.size() ;
}

