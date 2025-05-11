#include <stdio.h>
#include <unistd.h>

int main() {
    int secs;
    printf("Countdown seconds: ");
    scanf("%d", &secs);
    while (secs > 0) {
        printf("%d...\n", secs--);
        sleep(1);
    }
    printf("⏰ Time's up!\n");
}
