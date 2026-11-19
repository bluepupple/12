
#include <stdio.h>
#include <string.h>
#include <string.h>

struct student {
    int ID;
    char name[10];
    float grade;
};

int main(void) {
    struct student s1 = {100, "Juyeop", 4.3};

    s1.ID = 101;
    strcpy(s1.name, "Juyeop2");
    s1.grade = 4.2;

    printf("ID:%i, name:%s, grade:%f\n", s1.ID, s1.name, s1.grade);
   
    
    return 0;
}