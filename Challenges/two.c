#include<stdio.h>
#include<string.h>

int main(void)
{

        int value;
        char password[32];

        fwrite("Password : ",1,10,stdout);
        scanf("GALEX%s",password);
        value=strcmp(password,"NanoS");

        if (value == 0)
        {
                printf ("--- Correct ---\n");
        }
        if ((value < 0) || (value > 0))
        {
                printf ("--- Incorrect ---\n");
        }

        return 0;
}
