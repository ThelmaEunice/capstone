#include <stdio.h>
#include <string.h>

#define USERNAME "Eunice"
#define PASSWORD "Thelma"

struct Bus {
    char route[50];
    char schedule[50];
    int totalSeats;
    int bookedSeats;
    char passengerNames[50][50];  // Array to store passenger names
};

void displayBusInfo(struct Bus bus) {
    printf("Route: %s\n", bus.route);
    printf("Schedule: %s\n", bus.schedule);
    printf("Total Seats: %d\n", bus.totalSeats);
    printf("Booked Seats: %d\n", bus.bookedSeats);
    printf("Available Seats: %d\n", bus.totalSeats - bus.bookedSeats);
    printf("\n");
}

int main() {
    char inputUsername[50];
    char inputPassword[50];

    printf("Welcome to the Bus Information and Booking System\n");

    printf("Please log in.\n");
    printf("Username: ");
    scanf("%s", inputUsername);
    printf("Password: ");
    scanf("%s", inputPassword);

    if (strcmp(inputUsername, USERNAME) == 0 && strcmp(inputPassword, PASSWORD) == 0) {
        printf("Login successful!\n");

        struct Bus bus1, bus2, bus3;

        strcpy(bus1.route, "thika road");
        strcpy(bus1.schedule, "10:00 AM");
        bus1.totalSeats = 50;
        bus1.bookedSeats = 0;

        strcpy(bus2.route, "ng'ong road");
        strcpy(bus2.schedule, "2:00 PM");
        bus2.totalSeats = 40;
        bus2.bookedSeats = 0;

        strcpy(bus3.route, "Kenyatta Road");
        strcpy(bus3.schedule, "6:00 PM");
        bus3.totalSeats = 40;
        bus3.bookedSeats = 0;

        int choice;
        int busChoice;
        int seatsToBook;
        char passengerName[50];

        do {
            printf("Choose an option:\n");
            printf("1. View Bus Information\n");
            printf("2. Make a Booking\n");
            printf("3. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Select a bus to view:\n");
                    printf("1. Bus 1\n");
                    printf("2. Bus 2\n");
                    printf("3. Bus 3\n");
                    printf("Enter your choice: ");
                    scanf("%d", &busChoice);

                    if (busChoice == 1) {
                        displayBusInfo(bus1);
                    } else if (busChoice == 2) {
                        displayBusInfo(bus2);
                    } else if (busChoice == 3) {
                        displayBusInfo(bus3);
                    } else {
                        printf("Invalid choice.\n");
                    }
                    break;

                case 2:
                    printf("Select a bus to make a booking:\n");
                    printf("1. Bus 1\n");
                    printf("2. Bus 2\n");
                    printf("3. Bus 3\n");
                    printf("Enter your choice: ");
                    scanf("%d", &busChoice);

                    printf("Enter the passenger name: ");
                    scanf("%s", passengerName);

                    printf("Enter the number of seats to book: ");
                    scanf("%d", &seatsToBook);

                    if (busChoice == 1) {
                        if (seatsToBook <= bus1.totalSeats - bus1.bookedSeats) {
                            for (int i = 0; i < seatsToBook; i++) {
                                strcpy(bus1.passengerNames[bus1.bookedSeats + i], passengerName);
                            }
                            bus1.bookedSeats += seatsToBook;
                            printf("Booking successful for Bus 1.\n");
                        } else {
                            printf("Booking failed. Not enough available seats on Bus 1.\n");
                        }
                    } else if (busChoice == 2) {
                        if (seatsToBook <= bus2.totalSeats - bus2.bookedSeats) {
                            for (int i = 0; i < seatsToBook; i++) {
                                strcpy(bus2.passengerNames[bus2.bookedSeats + i], passengerName);
                            }
                            bus2.bookedSeats += seatsToBook;
                            printf("Booking successful for Bus 2.\n");
                        } else {
                            printf("Booking failed. Not enough available seats on Bus 2.\n");
                        }
                    } else if (busChoice == 3) {
                        if (seatsToBook <= bus3.totalSeats - bus3.bookedSeats) {
                            for (int i = 0; i < seatsToBook; i++) {
                                strcpy(bus3.passengerNames[bus3.bookedSeats + i], passengerName);
                            }
                            bus3.bookedSeats += seatsToBook;
                            printf("Booking successful for Bus 3.\n");
                        } else {
                            printf("Booking failed. Not enough available seats on Bus 3.\n");
                    }
                    } else {
                        printf("Invalid choice.\n");
                    }
                    break;

                case 3:
                    printf("Exiting program.\n");
                    break;

                default:
                    printf("Invalid choice. Please try again.\n");
            }

        } while (choice != 3);
    } else {
        printf("Login failed. Invalid username or password.\n");
    }

    return 0;
}
