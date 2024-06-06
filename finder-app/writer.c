#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <syslog.h>
#include <errno.h>

int main(int argc, char* argv[]){
    if(argc != 3){
        syslog(LOG_ERR, "Error: the number of arguments is not correct");
        exit(EXIT_FAILURE);
    }

    const char *file_path = argv[1];
    const char *string = argv[2];

    openlog(NULL, 0, LOG_USER);

    FILE *file = fopen(file_path, "w");
    if(file == NULL){
        syslog(LOG_ERR, "Can't open file %s", file_path);
        fclose(file);
        exit(EXIT_FAILURE);
    }

    fprintf(file, "%s", string);
    syslog(LOG_DEBUG, "Writing %s to file %s", string, file_path);

    return 0;
}
