void trimPrefixBlank(char *str) 
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

void trimSuffixBlank(char *str) 
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

char **strfields(const char *str, char *delim, int *rlen)
{
    char *str_cpy = strdup(str);
    char *token;
    char **fields = NULL;
    int cnt = 0;
    int len = strlen(str);

    while ((token = strsep(&str_cpy, delim)) != NULL) {
        fields = (char **)realloc(fields, sizeof(char *) * (cnt + 1)); 
        fields[cnt] = strdup(token);
        cnt++;
    }
    
    *rlen = cnt;
    return fields;
} 
