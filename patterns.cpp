#include <iostream>
using namespace std;

void pattern1(int n)
{
    int i, j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    int i, j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 0; j <= 2 * n - i; j++)
        {
            cout << "*";
        }
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        for (j = 1; j < 2 * n - (2 * i + 1) - 1; j++)
        {
            cout << "*";
        }
        for (j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10a(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10b(int n)
{
    for (int i = 0; i <= (2 * n - 1); i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n){
    int spaces=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
    cout<<endl;
    spaces-=2;
    }
}

void pattern13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num+=1;
        }cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //characters
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern19(int n){
    int iniS=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;
    }
    int endS=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=endS;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        endS-=2;
        cout<<endl;
    }
}

void pattern20(int n){
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
}

void pattern21(int n){
    for(int i=1;i<=n;i++){
        if(i==1 || i==n ){
            for(int j=1;j<=n-1;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int j=0;j<n-3;j++){
                cout<<" ";
            }
            cout<<"*";
        }
    cout<<endl;
    }
}

void pattern21b(int n){
    if(n%2==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0||i==n-1||j==0||j==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Please enter a even number !";
    }
}

void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            cout<<n-(min(min(top,down),min(right,left)));
        }cout<<endl;
    }
}

int main()
{
    int patternchoice, testcase;
    cout << "Please Choose Pattern Number:";
    cin >> patternchoice;
    cout << endl
         << "Please enter number of test cases:";
    cin >> testcase;
    switch (patternchoice)
    {
    case 1:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl
                 << "Please enter n value:";
            cin >> n;
            pattern1(n);
        }
        break;

    case 2:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl
                 << "Please enter n value:";
            cin >> n;
            pattern2(n);
        }
        break;

    case 3:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl
                 << "Please enter n value:";
            cin >> n;
            pattern3(n);
        }
        break;

    case 4:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl
                 << "Please enter n value:";
            cin >> n;
            pattern4(n);
        }
        break;

    case 5:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl
                 << "Please enter n value:";
            cin >> n;
            pattern5(n);
        }
        break;

    case 6:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl
                 << "Please enter n value:";
            cin >> n;
            pattern6(n);
        }
        break;

    case 7:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl
                 << "Please enter n value:";
            cin >> n;
            pattern7(n);
        }
        break;
    case 8:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl
                 << "Please enter n value:";
            cin >> n;
            pattern8(n);
        }
        break;
    case 9:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl
                 << "Please enter n value:";
            cin >> n;
            pattern9(n);
        }
        break;
    case 10:
        for (int i = 0; i < testcase; i++)
        {
            int n,choice;
            cout << endl
                 << "Please enter n value:";
            cin >> n;
            cout<<endl<<"Please choose pattern a or b:";
            if(choice=='a') pattern10a(n);
            else if(choice=='b') pattern10b(n);
            else cout<<"You have entered a wrong choice !";
        }
        break;
    case 11:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << "Please enter n value:";
            cin >> n;
            pattern11(n);
        }
        break;
    case 12:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << "Please enter n value:";
            cin >> n;
            pattern12(n);
        }
        break;
    case 13:
        for(int i=0;i<testcase;i++){
            int n;
            cout<<"Please enter n value:";
            cin>>n;
            pattern13(n);
        }
        break;
    case 14:
        for(int i=0;i<testcase;i++){
            int n;
            cout<<"Please enter n value:";
            cin>>n;
            pattern14(n);
        }
        break;
    case 15:
        for(int i=0;i<testcase;i++){
            int n;
            cout<<"Please enter n value:";
            cin>>n;
            pattern15(n);
        }
        break;
    case 16:
        for(int i=0;i<testcase;i++){
            int n;
            cout<<"Please enter n value:";
            cin>>n;
            pattern16(n);
        }
        break;
    case 17:
        for(int i=0;i<testcase;i++){
            int n;
            cout<<"Please enter n value:";
            cin>>n;
            pattern17(n);
        }
        break;
    case 18:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout<< "Please enter n value:";
            cin >> n;
            pattern18(n);
        }
        break;
    case 19:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl<< "Please enter n value:";
            cin >> n;
            pattern19(n);
        }
        break;
    case 20:
        for (int i = 0; i < testcase; i++)
        {
            int n;
            cout << endl<< "Please enter n value:";
            cin >> n;
            pattern20(n);
        }
        break;
    case 21:
        for (int i = 0; i < testcase; i++)
        {
            int n,choice;
            cout << endl<< "Please enter n value:";
            cin >> n;
            cout<<endl<<"Please choose pattern a or b:";
            if(choice=='a') pattern21(n);
            else if(choice=='b') pattern21b(n);
            else cout<<"You have entered a wrong choice !";
        }
        break;
    case 22:
        for (int i = 0; i < testcase; i++)
            {
                int n;
                cout << endl<< "Please enter n value:";
                cin >> n;
                pattern22(n);
            }
        break;
    default:
        cout << "Pattern choice not available, Please Try Again!";
        break;
    }
}