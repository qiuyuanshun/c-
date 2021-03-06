 ///---------------------------------------///
 /// @file is the queue.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-08 09:53:18
 ///------------------------------------------///
#include <iostream>
using namespace std
#define MaxSize 10

template <class T>
class CStack
{
private:
    T data[MaxSize];
    int top;
public:
    CStack():top(-1)

    {
    }
    void Push(void);
    void Pop(void);
    bool ifEmpty()
    {
        if(top == -1)
            return true;
        else
            return false;
    }
    bool ifFull()
    {
        if(top == MaxSize-1)
            return true;
        else
            return false;
    }
    T getTop(void)
    {
        if(ifEmpty())
        {
            cout<<"栈为空，不能取栈顶!"<<endl;
            return -1;
        }
        return this->data[top];
    }
};

template <class T>
void CStack<T>::Push(void)
{
    if(ifFull())
    {
        cout<<"栈已满,不能入栈!"<<endl;
        return ;
    }
    T a;
    cin>>a;
    this->data[++top] = a;
    cout<<"元素"<<a<<"入栈!"<<endl;
}

template <class T>
void CStack<T>::Pop(void)
{
    if(ifEmpty())
    {
        cout<<"栈为空，不能出栈!"<<endl;
        return ;
    }
    T temp = this->data[top--];
    cout<<"元素"<<temp<<"出栈!"<<endl;
}

void main()
{
    CStack<int> s1; //可以自己更换
    int i;
    do
    {
        cout<<"\t===============================\n";
        cout<<"\t*********顺序栈类模板**********\n";
        cout<<"\t           1.入栈              \n";
        cout<<"\t           2.出栈              \n";
        cout<<"\t           3.取栈顶            \n";
        cout<<"\t           0.退出              \n";
        cout<<"\t*******************************\n";
        cout<<"\t===============================\n";
        do
        {
            cout<<"\tplease input your operator:";
            cin>>i;
            system("cls");
        }while(i!=1 && i!=2 && i!=3 && i!=0);
        switch(i)
        {
        case 1:
            s1.Push();
            system("pause");
            system("cls");
            break;
        case 2:
            s1.Pop();
            system("pause");
            system("cls");
            break;
        case 3:
            if(-1 == s1.getTop())
            {
                system("pause");
                system("cls");
                break;
            }
            else
                cout<<"栈顶元素为:"<<s1.getTop()<<endl;
            system("pause");
            system("cls");
            break;
        }
    }while(i != 0);
}

