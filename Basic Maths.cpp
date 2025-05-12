#include<bits\stdc++.h>

using namespace std;
void digit_extraction(int n){
    cout<<"Digit Extraction:"<<endl;
    while(n>0){
        int lastdigit=n%10;
        cout<<lastdigit<<endl;
        n=n/10;
    }
}

void count_digit_1(int n){
    cout<<"Count on Number of Digits:"<<endl;
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
}

void count_digit_2(int n){
    cout<<"Count on number of Digits:"<<endl;
    int count=(int)(log10(n)+1);
    cout<<count<<endl;
}

void reverse_number(int n){
    cout<<"Reverse of the digit:"<<endl;
    int rev_num=0;
    while(n>0){
        int lastdigit=n%10;
        rev_num=(rev_num*10)+lastdigit;
        n=n/10;
    }
    cout<<rev_num<<endl;
}

void check_palindrome(int n){
    cout<<"Palindrome Check:"<<endl;
    int rev_num=0;
    int original=n;
    while(n>0){
        int lastdigit=n%10;
        rev_num=(rev_num*10)+lastdigit;
        n=n/10;
    }
    if(rev_num==original) cout<<"It is a Palindrome."<<endl;
    else cout<<"It is not a Palindrome"<<endl;
}

void armstrong(int n){
    cout<<"Armstrong check:"<<endl;
    int sum=0;
    int original=n;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(original==sum) cout<<"Is Armstrong number"<<endl;
    else cout<<"Not an Armstrong number"<<endl;
}

void print_divisors1(int n){
    cout<<"Print Divisors of: "<<n<<endl;
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}

void print_divisors2(int n){
    cout<<"Print Divisors of: "<<n<<endl;
    vector<int> divs;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            divs.push_back(i);
            if(n/i!=i){
                divs.push_back(n/i);
            }
        }
    }
    sort(divs.begin(),divs.end());
    for(auto it:divs){
        cout<<it<<" "; 
    }
    cout<<endl;
}

void prime_number_check1(int n){
    cout<<"Prime Number Check for: "<<n<<endl;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count+=1;
        }}
        if (count==2) {
            cout<<n<<" is a prime number."<<endl;
        }
        else {
            cout<<"is not a prime number."<<endl;
        }
}

void prime_number_check2(int n){
    cout<<"Prime Number check for: "<<n<<endl;
    int count=0;
    for(int i=1;i<=sqrt(n);i++){ //can use i*i<n
        if(n%i==0){
            count+=1;
            if((n/i)!=i) count+=1;            
        }
    }
    if(count==2) cout<<n<<" is a Prime Number."<<endl;
    else cout<<"is not a Prime Number."<<endl;
}

void gcd_or_hcf1(int n1,int n2){
    int gcd=0;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0) gcd=i;
    }
    cout<<"GCD Value: "<<gcd<<endl;
}

void gcd_or_hcf2(int n1,int n2){
    int gcd=0;
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            cout<<"GCD Value: "<<i<<endl;
            break;
        }
    }
}

void euclidean_algorithm2(int n1,int n2){
    while(n1>0 && n2>0){
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;
    }
    if(n1==0) cout<<"GCD value: "<<n2<<endl;
    else cout<<"GCD value: "<<n1<<endl;
}

int main(){
    digit_extraction(7789);
    count_digit_1(7799);
    count_digit_2(799789);
    reverse_number(7789);
    check_palindrome(131);
    armstrong(371);
    print_divisors2(36);
    prime_number_check2(7);
    gcd_or_hcf2(20,40);
    euclidean_algorithm2(20,45);
}