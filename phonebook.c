#include <stdio.h>
#include <cs50.h>
#include <string.h>


// int main(void){

//     string names[] = {"Cartman","Eric"};
//     string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};


//     for(int i = 0; i < 2; i++){

//         if(strcmp(names[i], "Eric")==0){

//         printf("Found: %s\n", numbers[i]);
//         return 0;
//         }
//     }
//     printf("Not found :(\n");
//     return 1;
// }

/**
That code up there is good for silly small application
where you are the one person who uses it,

if things get bigger or multiple users, or collaborators

this way of finding name and number is not efficient

therefore, we go down to the advance code of this piece
 where we invent our own data type and combine them into
 one data type
*/

typedef struct
{
    string name;
    string number;
}
person;
// 👆this is how data type is combined into one


int main(void){

    person people[2];

    people[0].name = "Cartman";
    people[0].number = "+1-617-495-1000";

    people[1].name = "Eric";
    people[1].number = "+1-949-468-2750";

    for(int i = 0; i < 2; i++){

        if(strcmp(people[i].name, "Eric")==0){

            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found :(\n");
    return 1;

}