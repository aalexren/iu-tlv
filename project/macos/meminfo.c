#include <stdio.h>
#include <stdlib.h>
#include <sys/sysinfo.h>

int main()
{
    struct sysinfo info;

    if (sysinfo(&info) != 0) {
        perror("sysinfo");
        exit(1);
    }

    printf("Physical memory: %llu bytes\n", (unsigned long long)info.totalram * (unsigned long long)info.mem_unit);

    return 0;
}


