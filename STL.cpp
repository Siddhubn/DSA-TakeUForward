#include<iostream>
#include<string>
using namespace std;
/*
void pairs(){
    pair<int,int> p={1,3};
    cout<<"First element:"<<p.first<<" Second Element:"<<p.second<<endl;
    pair<string,string> friends={"Siddharth","Sid"};
    cout<<"First friend name:"<<friends.first<<" Second friend name:"<<friends.second<<endl;
    pair<int,int> student_marks[]={{1,68},{2,90},{3,75}};
    cout<<"Marks of 3rd student:"<<student_marks[2].second<<endl;
}*/

void pairs_ps(int n){
    /* Imagine you are organizing a college coding competition. Each participant registers with their name and score.
    After all registrations, you need to display the final scoreboard in the order they registered
    and determine the highest and lowest scores. */
    pair<string,int> participants[n];
    cout<<endl<<"\n| Scores for College Coding Competition |"<<endl;
    cout<<"Participant Registration:"<<endl;
    cout<<"Please enter the participant's details:\n"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Please enter Participant name:";
        cin>>participants[i].first;
        cout<<"Please enter Participant's score:";
        cin>>participants[i].second;
        cout<<"\n";
    }
    cout<<endl<<endl<<"Participants  |  Scores"<<endl;
    for(int i=0;i<n;i++){
        cout<<participants[i].first<<" | "<<participants[i].second<<endl;
    }
    int max=participants[0].second;
    string winner=participants[0].first;
    for(int i=0;i<n;i++){
        if(participants[i].second>max){
            max=participants[i].second;
            winner=participants[i].first;
        }
    }
    cout<<endl<<"Winner Name: "<<winner<<" Highest Score: "<<max;
}

void vectors(){
    
}

int main(){
    int n;
    cout<<endl<<"Please enter number of participants:";
    cin>>n;
    pairs_ps(n);
    return 0;
}