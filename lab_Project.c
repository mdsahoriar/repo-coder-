#include<stdio.h>
int get_max(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    return max;
}
int get_mini(int a[],int n){
    int mini =a[0];
    for(int i=1;i<n;i++){
        if(a[i]<mini){
            mini=a[i];
        }
    }
    return mini;
}
int is_prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int count_prime(int a[],int n){
    int count =0;
    for(int i=0;i<n;i++){
    if(is_prime(a[i])){
        count++;
    }
}
    return count;
}
int is_palindrome(int n){
int original =n;
int reversed = 0;
while(n>0){
    reversed=reversed * 10 +(n%10);
    n=n/10;
}
return  original==reversed;
}
int count_palindrome(int a[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(is_palindrome(a[i])){
            count++;
        }
    }
    return count;
}
int count_divisores(int n){
    int count =0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}
int max_divisore_number(int a[],int n){
    int max_div=-1;
    int ans_num=-1;
    for(int i=0;i<n;i++){
        int divs = count_divisores (a[i]);
        if(divs>max_div||(divs==max_div&&a[i]>ans_num)){
            max_div=divs;
            ans_num=a[i];
        }
    }
    return ans_num;
}
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("The maximum number : %d\n",get_max(a,n));
printf("The minimum number : %d\n",get_mini(a,n));
printf("The number of prime numbers : %d\n",count_prime(a,n));
printf("The number of palindrome numbers : %d\n",count_palindrome(a,n));
printf("The number that has the maximum number of divisors : %d\n",max_divisore_number(a,n));

}

