#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >=5000){
        printf("Cox's Bazar Jabo");
        if(tk >= 10000){
            printf("Saint Martin Jabo\n");
        }
        else{
            printf("Cox's Bazar Teke Ferot Chole jabo\n");
        }
    }
    else{
        printf("Kothao Jabona\n");
    }

    return 0;
}