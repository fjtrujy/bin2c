/*
    main.c	- Main program file.
*/

#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int result;
    FILE *OutputFile;
    unsigned int i, FilesAffected;
    char filename[11];
    struct FileEntry *file;
	char *folder = "roms";

    printf("PlayStation 2 ROM image generator v1.12\n"
           "Compiled on " __DATE__ " - " __TIME__ "\n"
           "---------------------------------------\n\n");

#ifdef __MINGW32__
                mkdir(folder);
#else
                mkdir(folder, 0755);
#endif
                chdir(folder);

    return result;
}
