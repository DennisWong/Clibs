void trimPrefix(char *str) 
{
    int i, j;
    int blank = 0;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            blank++;
        }
    }
    for (i = 0; i < blank; i++) {
        for (j = 0; j < strlen(str); j++) {
            str[j] = str[j+1];
        }
    }
}

void trimSuffix(char *str) 
{
    int i, j;
    int blank;
    for (i = strlen(str); i >= 0; i--) {
        if (str[i] == ' ') {
            blank++;
            str[i] = '\0';
        }
    }
}
