#include <stdio.h>
 
int main() {
    long long int a,b,add,mul,sub;
    scanf("%lld%lld",&a,&b);
    add = a + b;
    mul = a * b;
    sub = a - b;
    printf("%lld + %lld = %lld\n",a,b,add);
    printf("%lld * %lld = %lld\n",a,b,mul);
    printf("%lld - %lld = %lld",a,b,sub);
    return 0;
}