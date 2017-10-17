# Cpp-2
Small program in C++
Write a program that calculates and prints the bill for a cellular telephone company.
The company offers two types of service: regular and premium. Its rates vary, depending on the type of service. 
The rates are computed as follows:

Regular service: $10.00 plus first 50 minutes are free. Charges for over 50 minutes are $0.20 per minute.
Premium service: $25.00 plus:
	a. For calls made from 6:00 a.m. to 6:00 p.m., the first 75 minutes are free; charges for more than 75 	minutes are $0.10 per minute.
	b. For calls made from 6:00 p.m. to 6:00 a.m., the first 100 minutes are free; charges for more than 100 minutes are $0.05 per minute.

Your program should prompt the user to enter an account number, a service code (type char),
and the number of minutes the service was used. A service code of r or R means regular service;
a service code of p or P means premium service. Treat any other character as an error.
Your program should output the account number, type of service, number of minutes the telephone service was used,
and the amount due from the user.
For the premium service, the customer may be using the service during the day and the night.
Therefore, to calculate the bill, you must ask the user to input the number of minutes the service was
used during the day and the number of minutes the service was used during the night.
