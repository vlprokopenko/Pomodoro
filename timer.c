#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int time_to_wait = 1;
int second;
int minute = 0;
int hour = 0;
int pomodoro_count = 0;
bool rest;

int main();

void check_for_pomodoro() {
  if (minute == 25) {
    pomodoro_count++;
    printf("Pomodoro count:" + pomodoro_count);
    printf(". Take a break! You have 5 minutes.");
    sleep(300);
  }
  if (pomodoro_count == 4) {
    pomodoro_count++;
    printf("Pomodoro count:" + pomodoro_count);
    printf(". Take a break! You have 20 minutes. (4 Pomodori)");
    sleep(1200);
    pomodoro_count = 0;
  } else {
    main();
  }
}

int main() {
    while (true) {
        if (second == 60) {
            minute++;
            second = 0;
            printf("Minute: ");
            printf("%d\n", minute);
        }
        if (minute == 60) {
            hour++;
            second = 0;
            minute = 0;
            printf("Hour: ");
            printf("%d", hour);
        }
        sleep(time_to_wait);
        second++;
        printf("%d\n", second);
        check_for_pomodoro();
    }
    return 0;
}
