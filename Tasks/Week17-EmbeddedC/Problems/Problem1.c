#include <stdio.h>
#include <stdint.h>

#define SET_BIT(reg,bit)		(reg|=(1<<bit))
#define TOGGLE_BIT(reg,bit)		(reg^=(1<<bit))
#define CLEAR_BIT(reg,bit)		(reg&=~(1<<bit))

int main(){
    
}
