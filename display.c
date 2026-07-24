#include <stdio.h>
#include <string.h>
#include "display.h"
#include "reports.h"

void initializeSystem(void) {
    const char *movieTitles[NUM_MOVIES] = {
        "Jurassic World Rebirth [English]",
        "Dhurandhar: The Revenge [Hindi]",
        "Neera [Sinhala]"
    };
    const char *showtimesList[NUM_SHOWTIMES] = {"10:30 AM", "06:30 PM"};

    for (int i = 0; i < NUM_MOVIES; i++) {
        movies[i].id = i + 1;
        strcpy(movies[i].title, movieTitles[i]);

        for (int j = 0; j < NUM_SHOWTIMES; j++) {
            strcpy(movies[i].showtimes[j].time, showtimesList[j]);
            movies[i].showtimes[j].ticketsSold = 0;
            movies[i].showtimes[j].totalRevenue = 0.0f;

            for (int r = 0; r < ROWS; r++) {
                for (int c = 0; c < COLS; c++) {
                    movies[i].showtimes[j].seats[r][c].isBooked = 0;
                    movies[i].showtimes[j].seats[r][c].pricePaid = 0.0f;
                    movies[i].showtimes[j].seats[r][c].isStudent = 0;
                    movies[i].showtimes[j].seats[r][c].isSenior = 0;
                    strcpy(movies[i].showtimes[j].seats[r][c].customerName, "");
                }
            }
        }
    }
}

void displayShowtimes(void) {
    printf("\n=========================================\n");
    printf("         ---- AVAILABLE SHOWTIMES ----     \n");
    printf("=========================================\n");
    for (int i = 0; i < NUM_MOVIES; i++) {
        printf("\n[%d] %s\n", movies[i].id, movies[i].title);
        for (int j = 0; j < NUM_SHOWTIMES; j++) {
            printf("    Showtime %d: %s\n", j + 1, movies[i].showtimes[j].time);
        }
    }
    printf("-----------------------------------------\n");
}

