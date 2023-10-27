TITLE: Shopping Cart 

AIM: You must have done online shopping and may be aware of the small shopping cart icon. Write a program to implement that. Display a menu of 20 items with rates. 
Customers will select items from this list one by one and quantity to buy. Once the customer checks out, 
you should display the complete list of items purchased, their individual rates, the amount for each item and finally, the total bill amount. 
Please note that there can be a discount on a few items which will be displayed on the menu (discount may depend on the quantity).
All similar items should be added together for billing.

ALGORITHM: 
1. Include necessary header files:
   - iostream
   - vector
   - string
   - iomanip
   - sstream

2. Define a struct called `Item` with members `name` of type `string` and `price` of type `double`.

3. Create a class called `ShoppingCart` with a private vector `items` of type `Item`.

4. Implement the following member functions within the `ShoppingCart` class:
   - `addItem(Item item)`: Adds the provided item to the shopping cart and prints the name and price of the added item.
   - `removeItem(int index)`: Removes the item at the given index from the shopping cart and prints the name and price of the removed item.
   - `displayItems()`: Displays the items in the cart with their names and prices, along with proper formatting.
   - `calculateTotalBill()`: Calculates the total bill for all the items in the cart and returns a formatted string with the details.

5. In the `main()` function:
   - Create an instance of the `ShoppingCart` class named `cart`.
   - Initialize a vector `menu` with a list of predefined items.
   - Use a `while` loop to continuously display a menu and handle user choices.
   - Inside the loop, provide options for the user to add an item, remove an item, display items, calculate the total bill, or exit the program.
   - Perform appropriate actions based on the user's choice, including input validation.
     
6. End the program by returning 0 from the `main()` function.

OUTPUT: ![image](https://github.com/tashwitab/Mini--Project/assets/142425346/4b857c3f-8f4a-4a5d-8182-2a132a53a2b3)
![image](https://github.com/tashwitab/Mini--Project/assets/142425346/3001acc3-e048-4986-b678-1b35c6777632)
![image](https://github.com/tashwitab/Mini--Project/assets/142425346/b7f52cc8-cd93-47bc-8637-19a113786d6c)
![image](https://github.com/tashwitab/Mini--Project/assets/142425346/60265fad-ffe0-4794-8f62-8a0e4055de07)


CONCLUSION: 
In conclusion, the C++ shopping cart project provided a basic implementation of a shopping cart system with essential functionalities, 
including adding items to the cart, deleting items from the cart, displaying items in the cart, and calculating the total amount.
The project utilized key concepts such as data structures (specifically vectors), loops, conditional statements, and user input/output operations.
Overall, this code exemplifies how C++ can be used to create a functional and interactive shopping cart application,
demonstrating the basics of object-oriented programming and input/output handling.
It serves as a solid foundation for more complex implementations, such as integrating a persistent storage system, expanding the functionality to support multiple users,
or incorporating additional features like discounts or promotions.
