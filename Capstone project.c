#include <stdio.h>
#include <stdbool.h>

struct Bus {
    bool available;
};

void initializeSeats(struct Bus bus[], int totalSeats) {
     for (int i = 0; i < totalSeats; ++i) {
        bus[i].available = true;
    }
}

void displayAvailableSeats(struct Bus bus[], int totalSeats) {
    printf("Available Seats:\n");
    for (int i = 0; i < totalSeats; ++i) {
        if (bus[i].available) {
            printf("Seat %d is available.\n", i + 1);
        } else {
            printf("Seat %d is booked.\n", i + 1);
        }
    }
}

void reserveSeat(struct Bus bus[], int seatNumber, int totalSeats) {
    if (seatNumber >= 1 && seatNumber <= totalSeats) {
        if (bus[seatNumber - 1].available) {
            bus[seatNumber - 1].available = false;
            printf("Seat %d reserved successfully.\n", seatNumber);
        } else {
            printf("Seat %d is already booked.\n", seatNumber);
        }
    } else {
        printf("Invalid seat number.\n");
    }
}

int main() {
    const int TOTAL_SEATS = 10;
    struct Bus bus[TOTAL_SEATS];
    initializeSeats(bus, TOTAL_SEATS);

    while (true) {
        printf("\n1. View Available Seats\n2. Reserve a Seat\n3. Exit\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayAvailableSeats(bus, TOTAL_SEATS);
                break;
            case 2:
                {
                    int seatNumber;
                    printf("Enter the seat number you want to reserve: ");
                    scanf("%d", &seatNumber);
                    reserveSeat(bus, seatNumber, TOTAL_SEATS);
                }
                break;
            case 3:
                printf("Thank you for using the bus reservation system. Have a nice day!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
