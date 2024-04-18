#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Tao gioi han do dai cua thong tin thong tin
#define MAX_DESTINATION 50
#define MAX_AIRLINE 50
#define MAX_TIME 10
#define MAX_FLIGHT_STATUS 50
#define MAX_PASSENGER_INFO 100
#define MAX_SEAT_NUMBER 50
#define MAX_EMAIL 50


// Dinh nghia cac dac tinh cua tung loai thong tin theo y/c de bai


// Dinh nghia thong tin ve chuyen bay
typedef struct 
{
    char destination[MAX_DESTINATION];
    char departure[MAX_DESTINATION];
    char takeoff_time[MAX_TIME];
    char landing_time[MAX_TIME];
    char airline[MAX_AIRLINE];
    char flight_time[MAX_TIME];
    char status[MAX_FLIGHT_STATUS];
} Flight;

// Dinh nghia thong tin ve ve'
typedef struct 
{
    char buyer_info[MAX_PASSENGER_INFO];
    char booking_time[MAX_TIME];
    float price;
    char class[MAX_AIRLINE];
    int flight_number;
    int seat_number;
} Ticket;

//Dinh nghia thong tin ve khach hang
typedef struct 
{
    char passport_number[MAX_PASSENGER_INFO];
    char passenger_name[MAX_PASSENGER_INFO];
    char phone[MAX_PASSENGER_INFO];
    char email[MAX_EMAIL];
} Customer;

// Dinh nghia thong tin ve cho ngoi
typedef struct 
{
    int seat_number;
    char flight_number;
    char status[MAX_FLIGHT_STATUS];
} Seat;


// Cac ham lay thong tin tu nguoi dung


// Lay thong tin ve chuyen bay
void create_flight(Flight *flight) 
{
    printf("Enter destination: ");
    scanf("%s", flight->destination);
    printf("Enter departure: ");
    scanf("%s", flight->departure);
    printf("Enter takeoff time: ");
    scanf("%s", flight->takeoff_time);
    printf("Enter landing time: ");
    scanf("%s", flight->landing_time);
    printf("Enter airline: ");
    scanf("%s", flight->airline);
    printf("Enter flight time: ");
    scanf("%s", flight->flight_time);
    printf("Enter status: ");
    scanf("%s", flight->status);
}

// Lay thong tin ve ve'
void create_ticket(Ticket *ticket) 
{
    printf("Enter buyer info: ");
    scanf("%s", ticket->buyer_info);
    printf("Enter booking time: ");
    scanf("%s", ticket->booking_time);
    printf("Enter price: ");
    scanf("%f", &ticket->price);
    printf("Enter class: ");
    scanf("%s", ticket->class);
    printf("Enter flight number: ");
    scanf("%d", &ticket->flight_number);
    printf("Enter seat number: ");
    scanf("%d", &ticket->seat_number);
}

// Lay thong tin ve khach hang
void create_customer(Customer *customer) 
{
    printf("Enter passport number: ");
    scanf("%s", customer->passport_number);
    printf("Enter passenger name: ");
    scanf("%s", customer->passenger_name);
    printf("Enter phone: ");
    scanf("%s", customer->phone);
    printf("Enter email (if any): ");
    scanf("%s", customer->email);
}

// Lay thong tin ve cho ngoi
void create_seat(Seat *seat) 
{
    printf("Enter seat number: ");
    scanf("%d", &seat->seat_number);
    printf("Enter flight: ");
    scanf("%s", &seat->flight_number);
    printf("Enter status: ");
    scanf("%s", &seat->status);
}


// Ham main :>>>


int main() 
{
    Flight flight;
    Ticket ticket;
    Customer customer;
    Seat seat;

    create_flight(&flight);
    create_ticket(&ticket);
    create_customer(&customer);
    create_seat(&seat);

// In ra cac thong tin cua nguoi dung (se chuyen thanh function rieng sau)
    printf("\nFlight information:\n");
    printf("Destination: %s\n", flight.destination);
    printf("Departure: %s\n", flight.departure);
    printf("Takeoff time: %s\n", flight.takeoff_time);
    printf("Landing time: %s\n", flight.landing_time);
    printf("Airline: %s\n",flight.airline);
    printf("Status: %s\n",flight.status);
    
    printf("\nTicket information:\n");
    printf("Buyer: %s\n", ticket.buyer_info);
    printf("Booking time: %s\n", ticket.booking_time);
    printf("Price: %s\n", ticket.price );
    printf("Class: %s\n", flight.landing_time);
    printf("Flight number: %s\n",flight.airline);
    printf("Seat number: %s\n",flight.status);
    
    printf("\nCustomer information:\n");
    printf("Passport number: %s\n", customer.passport_number);
    printf("Passenger name: %s\n", customer.passenger_name);
    printf("Phone: %s\n", customer.phone);
    printf("Email: %s\n", customer.email); 
    
    printf("\nSeat information:\n");
    printf("Seat number: %s\n", customer.passport_number);
    printf("Flight: %s\n", customer.passenger_name);
    printf("Status: %s\n", customer.phone);
    
    return 0;
}
