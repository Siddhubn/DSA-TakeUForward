#include<bits/stdc++.h>
using namespace std;
void pattern1(int n) {
    int i,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    int i,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}

void pattern3(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
    cout<<endl;
    }
}

void pattern4(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        //space
        for(int j=0;j<n-i-1;j++){0

            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    
}

int main(){
    int patternchoice,testcase;
    cout<<"Please Choose Pattern Number:";
    cin>>patternchoice;
    cout<<endl<<"Please enter number of test cases:";
    cin>>testcase;
    switch (patternchoice)
    {
        case 1:
            for(int i=0;i<testcase;i++)
            {
                int n;
                cout<<endl<<"Please enter n value:";
                cin>>n;
                pattern1(n);
            }
            break;
        
        case 2:
            for(int i=0;i<testcase;i++)
            {
                int n;
                cout<<endl<<"Please enter n value:";
                cin>>n;
                pattern2(n);
            }
            break;

        case 3:
            for(int i=0;i<testcase;i++)
            {
                int n;
                cout<<endl<<"Please enter n value:";
                cin>>n;
                pattern3(n);
            }
            break;

        case 4:
            for(int i=0;i<testcase;i++){
                int n;
                cout<<endl<<"Please enter n value:";
                cin>>n;
                pattern4(n);
            }
            break;

        case 5:
            for(int i=0;i<testcase;i++){
                int n;
                cout<<endl<<"Please enter n value:";
                cin>>n;
                pattern5(n);
            }
            break;

        case 6:
            for(int i=0;i<testcase;i++){
                int n;
                cout<<endl<<"Please enter n value:";
                cin>>n;
                pattern6(n);
            }
            break;

        case 7:
            for(int i=0;i<testcase;i++){
                int n;
                cout<<endl<<"Please enter n value:";
                cin>>n;
                pattern7(n);
            }
            break;
        case 8:
            for(int i=0;i<testcase;i++){
                int n;
                cout<<endl<<"Please enter n value:";
                cin>>n;
                pattern8(n);
            }
            break;
        default:
            cout<<"Pattern choice not available, Please Try Again!";
            break;
    }
    }