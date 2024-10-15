#include<stdio.h>
#include<string.h>

void checkPass(const char* password);

int main(int argc, char* argv[])
{
        if (argc != 2)
        {
                printf ("Usage : %s <password>\n", argv[0]);
                return 1;
        }

        char* password = argv[1];
        checkPass(password);

        return 0;
}

void checkPass (const char* password)
{
        if (!strcmp(password, "heisenberg"))
        {
        printf ("YouAreGoddamnRight");
        }
        else if (!strcmp(password, "nano"))
        {
        printf ("What!!!Nano is your text editor??");
        }
        else if (!strcmp(password, "p@ssw0rd"))
        {
        printf ("FLAG{Reverse_Engineering}");
        }
        else
        {
        printf ("NOT AUTHORIZED");
        }
}
