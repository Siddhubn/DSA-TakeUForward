#include<bits/stdc++.h>
using namespace std;

/*Lecture1 - Recursion Tree, StackOverFlow*/
int cnt=1;
int recursion_tree(){
    if(cnt==11) return 0;
    cout<<cnt<<endl;
    cnt=cnt+1;
    recursion_tree();    
}

/*Lecture 2 - name_print,print_n_numbers,reverse,backtrack,backtrack_reverse*/
void names_print(int i, int n){
    if(i>n) return;
    cout<<"Siddharth"<<endl;
    names_print(i+1,n);
}

void print_n_numbers(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    print_n_numbers(i+1,n);
}

void print_n_numbers_reverse(int i,int n){
    if(i<1) return;
    cout<<i<<" ";
    print_n_numbers_reverse(i-1,n);
}

void print_n_numbers_backtrack(int i,int n){
    if(i<1) return;
    print_n_numbers_backtrack(i-1,n);
    cout<<i<<" ";
}

void print_n_numbers_backtrack_reverse(int i,int n){
    if(i>n) return;
    print_n_numbers_backtrack_reverse(i+1,n);
    cout<<i<<" ";
}

/*Lecture 3 - */
void sum_of_first_n_numbers(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
}

int main(){
    sum_of_first_n_numbers(5);
}