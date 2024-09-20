#include <stdio.h>

void    one_plus_one(){
    int two = 1 + 1;
}

int main(void){
    // this is the main

    char str_printf1[] = "printf(";
    char str_printf2[] = "#include <stdio.h>%c%cvoid    one_plus_one(){%c    int two = 1 + 1;%c}%c%cint main(void){%c    // this is the main%c%c    char str_printf1[] = %c%s%c;%c    char str_printf2[] = %c%s%c;%c    char str_printf3[] = %c%s%c;%c    %s%c%s%c%s%c    return (0);%c}%c//this is the EOF";
    char str_printf3[] = ", 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, str_printf1, 34, 10, 34, str_printf2, 34, 10, 34, str_printf3, 34, 10, str_printf1, 34, str_printf2, 34, str_printf3, 10, 10, 10);";
    printf("#include <stdio.h>%c%cvoid    one_plus_one(){%c    int two = 1 + 1;%c}%c%cint main(void){%c    // this is the main%c%c    char str_printf1[] = %c%s%c;%c    char str_printf2[] = %c%s%c;%c    char str_printf3[] = %c%s%c;%c    %s%c%s%c%s%c    return (0);%c}%c//this is the EOF", 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, str_printf1, 34, 10, 34, str_printf2, 34, 10, 34, str_printf3, 34, 10, str_printf1, 34, str_printf2, 34, str_printf3, 10, 10, 10);
    return (0);
}
//this is the EOF