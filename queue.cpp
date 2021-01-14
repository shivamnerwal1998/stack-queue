#include<iostream>
#include<stack>


using namespace std ;

typedef struct Queue{

    stack <int > s1,s2 ;
    int num ;

}Queue ;

void enqueue(Queue *q , int num)
{
    q->s1.push(num);
}

void dequeue(Queue *q)
{
    if(  q->s1.empty() )
    {
        cout <<"\n Queue is empty   \n" ;
        return ;
    }
    for(int i = q->s1.size() ; i > 0 ; i-- )
    {
        q->s2.push( q->s1.top() ) ;
        q->s1.pop() ;
    }
    if( q->s2.empty() )
    {
        cout <<endl << "stack is empty " << endl ;
        return  ;
    }
    q->s2.pop() ;
    for( int i = q->s2.size() ; i >0 ; i-- )
    {
        q->s1.push(q->s2.top()) ;
        q->s2.pop() ;
    }


}
void printQueue(Queue q )
{
    for( int i = q.s1.size() ; i > 0 ; i-- ){
        q.s2.push(q.s1.top()) ;
        q.s1.pop() ;
    }

    for( int i = q.s2.size() ; i>0 ; i-- ){
        cout << q.s2.top() << endl ;
        q.s2.pop();
    }

}

int main()
{
    Queue q ;
    enqueue( &q , 1 ) ;
    enqueue( &q , 2 ) ;
    enqueue( &q , 3 ) ;
    enqueue( &q , 4 ) ;
    printQueue(q) ;
    cout << q.s1.size() ;


    return 0 ;
}
