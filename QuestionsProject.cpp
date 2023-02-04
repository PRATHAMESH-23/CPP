#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Question
{   
    
    char que[100];
    char op1[100],op2[100],op3[100],op4[100];
    char ans[100];

    public:
    static int qid;

    void getQuestions(char qus[])
    {
        strcpy(que,qus);
    }

    void getOptions(char o1[],char o2[],char o3[],char o4[])
    {
        strcpy(op1,o1);
        strcpy(op2,o2);
        strcpy(op3,o3);
        strcpy(op4,o4);
    }

    void getAnswer(char as[])
    {
        strcpy(ans,as);
    }


    void showData();
    void solveQue();
    int checkAns(char uans[]);

};

void Question::showData()
{
    cout<<"ID:"<<++qid<<endl;
    cout<<"Question:"<<que<<endl;
    cout<<"Options:"<<"\n1) "<<op1<<"\n2) "<<op2<<"\n3) "<<op3<<"\n4) "<<op4<<endl;
    cout<<"Answer:"<<ans<<endl;
} 

void Question::solveQue()
{
    cout<<que<<"\n1) "<<op1<<"\n2) "<<op2<<"\n3) "<<op3<<"\n4) "<<op4<<endl;
}   

int Question::checkAns(char uans[])
{
    int r=strcmpi(ans,uans);
    return r;
}

int Question::qid=0;
int main()
{
    
    int i,n,ch,res=0;
    char c;
    char qus[100],o1[100],o2[100],o3[100],o4[100],as[100];

    cout<<"Enter the total no of questions:\n";
    cin>>n;

    Question *qe;
    qe=(Question*)malloc(sizeof(Question) * n);

    do
    {
    
    cout<<"Enter your choice:1)Create Questions 2)View all Questions with options and answer 3)Solve the questions 4)Show Final Result\n";
    cin>>ch;

    switch(ch)
    {
        case 1:
        {
            _flushall();
            for(int i=0;i<n;i++)
            {   cout<<"Enter the question:\n";
                gets(qus);
                qe[i].getQuestions(qus);

                cout<<"Enter the Options:\n";
                gets(o1);
                gets(o2);
                gets(o3);
                gets(o4);
                qe[i].getOptions(o1,o2,o3,o4);
                
                cout<<"Enter the ans for given question:\n";
                gets(as);
                qe[i].getAnswer(as);
            }

              break;
        }

        case 2:
        {
            cout<<"Show All Questions:\n";
            for(int i=0;i<n;i++)
            {
                qe[i].showData();
            }

            break;
        }

         case 3:
        {  _flushall();

         for(int i=0;i<n;i++)
        {
            qe[i].solveQue();
            cout<<"Enter your answer: ";
            char uans[100];
            gets(uans);

            int r=qe[i].checkAns(uans);

            if(r==0)
            {
                cout<<"Answer is Correct\n";
                res++;
            }

            else{
                cout<<"Answer is Wrong!!\n";
            }

        }

          break;
        }

         case 4:
        {
            cout<<"Your Final Result:"<<res<<"/"<<n<<endl;
            break;
        }

        default:
        {
            cout<<"Enter the correct choice!!";
        }

    }

    cout<<"Do you Want to Continue=y/n:";
    cin>>c;

    if(c=='n')
    {
        cout<<"Thanks..Visit our portal again!!!!!!!";
    }
    } while(c=='Y'||c=='y');

}