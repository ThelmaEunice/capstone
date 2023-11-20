# Bus Information and Booking System

Welcome to the Bus Information and Booking System! This console-based application allows users to view bus information and make bookings for available seats.

## Features

- **User Authentication:** The system starts by asking the user to log in with a predefined username and password.

- **Bus Information:** View details about available buses, including routes, schedules, total seats, booked seats, and available seats.

- **Booking System:** Make bookings for available seats on a selected bus by entering passenger names and the number of seats to book.

## Usage

1. **Log In:**
   - Enter the predefined username and password when prompted.

2. **Menu Options:**
   - Choose from the following options:
     - 1. View Bus Information
     - 2. Make a Booking
     - 3. Exit

3. **View Bus Information (Option 1):**
   - Select a bus to view its details.

4. **Make a Booking (Option 2):**
   - Select a bus, enter passenger names, and specify the number of seats to book.

5. **Exit (Option 3):**
   - Terminate the program.

## Bus Information

- **Bus 1:**
  - Route: Thika Road
  - Schedule: 10:00 AM
  - Total Seats: 50
  - Booked Seats: 0

- **Bus 2:**
  - Route: Ng'ong Road
  - Schedule: 2:00 PM
  - Total Seats: 40
  - Booked Seats: 0

- **Bus 3:**
  - Route: Kenyatta Road
  - Schedule: 6:00 PM
  - Total Seats: 40
  - Booked Seats: 0

## Building and Running

To compile and run the program, use a C compiler such as GCC:

```bash
gcc capstone.c -o bus_system
./bus_system
# capstone
