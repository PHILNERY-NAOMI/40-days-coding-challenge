#include <stdio.h>
#include <time.h>
#include <unistd.h>  // For sleep()

int main() {
    while (1) {
    	system("cls");
        time_t now;
        struct tm *currentTime;

        // Getting current system time
        time(&now);
        currentTime = localtime(&now);

       

        // formatting time and date
        printf("===== DIGITAL CLOCK =====\n\n");
        printf("Time: %02d:%02d:%02d %s\n",
               (currentTime->tm_hour % 12) == 0 ? 12 : currentTime->tm_hour % 12,
               currentTime->tm_min,
               currentTime->tm_sec,
               currentTime->tm_hour >= 12 ? "PM" : "AM");

        printf("Date: %s, %02d %s %d\n",
               (char *[]){"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}[currentTime->tm_wday],
               currentTime->tm_mday,
               (char *[]){"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}[currentTime->tm_mon],
               currentTime->tm_year + 1900);

        fflush(stdout);  
        sleep(1);        
    }

    return 0;
}
