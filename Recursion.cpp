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
void sum_of_first_n_numbers_param(int i,int sum){
    if(i<1) {
        cout<<sum; 
        return;}
    sum_of_first_n_numbers_param(i-1,sum+i);
}

int sum_of_first_n_numbers_func(int n){
    if(n==0) return 0;
    return n+sum_of_first_n_numbers_func(n-1);
}

void factorial_param(int i,int fact){
    if(i<1){
        cout<<fact;
        return;
    }
    factorial_param(i-1,fact*i);
}

int factorial_func(int n){
    if(n==0) return 1;
    return n*factorial_func(n-1);
}

/*Lecture 4 : Problems on Functional Recursion*/
void reverse_an_array_2_pointers(int l,int r,int arr[]){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    reverse_an_array_2_pointers(l+1,r-1,arr);
}

void reverse_an_array_1_pointer(int i,int n,int arr[]){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse_an_array_1_pointer(i+1,n,arr);
}

bool check_string_palindrome(int i,string &s){
    if(i>s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    check_string_palindrome(i+1,s);
}

//Lecture 5: Multiple Recursion Calls
int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int fibonacci_2(int n){
    if(n<=1) return 1;
    int last=fibonacci_2(n-1);
    int slast=fibonacci_2(n-2);
    return last+slast;
}

//Lecture 6: Recursion on Subsequences


int main(){
    cout<<fibonacci_2(4);
    return 0;
}