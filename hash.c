#include <stdio.h>

int main(void){
    unsigned long long last , a1, b1, x1, n1, c1, d1, m1, cont1= 0, cont2 = 0;
    unsigned int qinput, ini = 0;

    scanf("%d", &qinput);

    while(ini < qinput){
       
       
        scanf("%llu %llu %llu %llu %llu %llu %llu", &a1, &b1, &x1, &n1, &c1, &d1, &m1);
       cont2 = 0;
        while(cont2 <= n1){


            last = (a1 * ( x1 + cont2)+b1)%m1;
           
            if(last <= d1 && last >= c1){
                
                cont1++;
            }

            cont2++;
        }
        
        printf("%llu\n", cont1);
        
        cont1 = 0;
        
        ini++;    
    }
    
    return 0;
}