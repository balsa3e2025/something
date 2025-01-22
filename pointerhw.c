#include <stdio.h>
// pointer playground and other testing grounds. DO NOT COMPILE UNLESS YOU'RE ME! 
// IF NOT PC WILL PROCEED TO EXPLODE
int main(){
    printf("basically a pointer playground\n");
    int randominteger = 42; // because yes
    int* randomintegershomeaddress = &randominteger;
    printf("randominteger's value is %d.\n", randominteger);
    printf("and his house address is %p.\n", randomintegershomeaddress);
    printf("assign randominteger a new (or old) value: ");
    scanf("%d", &randominteger);
    printf("randominteger's value has become %d.\n", randominteger);
    printf("and his house address is %p.\n", randomintegershomeaddress);
    printf("for some damn reason, his house address is the same.\n");
    printf("so apparently, I have learnt that even if you change, your house stays the same.\n");
    printf("ok bye I guess.\n");
    return 0;
}