//
// Created by jul20 on 09-05-2021.
//
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

char *substring(char *string, int position, int length)
{
    char *p;
    int c;

    p = malloc(length+1);

    if (p == NULL)
    {
        printf("Unable to allocate memory.\n");
        exit(1);
    }

    for (c = 0; c < length; c++)
    {
        *(p+c) = *(string+position-1);
        string++;
    }

    *(p+c) = '\0';

    return p;
}
void hehea() {

    /*char *c1[5][1] ={"QD","QD","QD","QD","QD"};
    char *c2[6][1] ={"DD","QD","QD","QD","QD","QD"};
    char *c3[7][1] ={"SD","QD","QD","QD","QD","QD"};
    char *c4[8][1] ={"FD","QD","QD","QD","QD","QD"};
    char *c5[9][1] ={"GD","QD","QD","QD","QD","QD"};
    char *c6[10][1] ={"MD","QD","QD","QD","QD","QD"};
    char *c7[11][1] ={"MD","QD","QD","QD","QD","QD"};*/

    char *c1[10][1] = {"11"};
    char *c2[6][1] = {"21", "22", "23", "24", "25", "26"};
    char *c3[7][1] = {"31", "32", "33", "34", "35", "36", "37"};
    char *c4[8][1] = {"41", "42", "43", "44", "45", "46", "47", "48"};
    char *c5[9][1] = {"51", "52", "53", "54", "55", "56", "57", "58", "59"};
    char *c6[10][1] = {"61", "62", "63", "64", "65", "66", "67", "68", "69", "70"};
    char *c7[11][1] = {"71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81"};

    /*int sizeofc = sizeof c6/8;
    printf("\n %d",sizeofc);*/

    for (int i = 0; i < 5; i++) {
        printf("\n %s \t %s \t %s \t %s \t %s \t %s\t %s", c1[i][0], c2[i][0], c3[i][0], c4[i][0], c5[i][0], c6[i][0],
               c7[i][0]);
        //if(i == 4){break;}
    }


    char string[100], *p, *p2;
    gets(string);
    if (strcmp(string, "jep") != 0) {

        p = substring(string, 1, 2);
        printf("Required substring is \"%s\"\n", p);

        p2 = substring(string, 5, 2);
        printf("Required substring is \"%s\"\n", p2);


        for (int i = 0; i < 10; i++) {
            if (!strcmp(c1[i][0], p)) {
                printf("godkendt");
            }
        }
        for (int i = 0; i < 10; i++) {
            if (!strcmp(c1[i][0], p2)) {
                printf("godkendt");
                //p2 = c1[i];
                // Do your stuff
            }
            //c2[0][0] =c7[0][0];
            /*for(int i = 0; i < 5; i++){
                printf("\n %s \t %s \t %s \t %s \t %s \t %s\t %s",c1[i][0],c2[i][0],c3[i][0],c4[i][0],c5[i][0],c6[i][0],c7[i][0]);
                //if(i == 4){break;}
            }*/
        }

        /* printf("\n %s \t %s \t %s \t %s \t %s \t %s",c1[0][0],c2[0][0],c3[0][0],c4[0][0],c5[0][0],c6[0][0]);
         printf("\n \t %s \t %s \t %s \t %s \t %s \t ",c2[1][0],c3[1][0],c4[1][0],c5[1][0],c6[1][0]);
         printf("\n \t %s \t %s \t %s \t %s \t %s \t ",c2[2][0],c3[2][0],c4[2][0],c5[2][0],c6[2][0]);
         printf("\n \t %s \t %s \t %s \t %s \t %s \t ",c2[3][0],c3[3][0],c4[3][0],c5[3][0],c6[3][0]);
         printf("\n \t %s \t %s \t %s \t %s \t %s \t ",c2[4][0],c3[4][0],c4[4][0],c5[4][0],c6[4][0]);
         printf("\n \t %s \t %s \t %s \t %s \t %s \t ",c2[5][0],c3[5][0],c4[5][0],c5[5][0],c6[5][0]);
         printf("\n \t %s \t %s \t %s \t %s \t ",c3[6][0],c4[6][0],c5[6][0],c6[6][0]);*/

        /*printf("\n %s \t %s \t %s \t %s \t %s \t %s",c1[2][0],c2[2][0],c3[2][0],c4[2][0],c5[2][0],c6[2][0]);
        printf("\n %s \t %s \t %s \t %s \t %s \t %s",c1[3][0],c2[3][0],c3[3][0],c4[3][0],c5[3][0],c6[3][0]);
        printf("\n %s \t %s \t %s \t %s \t %s \t %s",c1[4][0],c2[4][0],c3[4][0],c4[4][0],c5[4][0],c6[4][0]);*/


        //return 0;
    }

}