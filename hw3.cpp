#include <iostream> 

using namespace std;


int main ()
{
    //Establish variables
    double temp = 0.0;
    char temperature = ' ';
    
    //Prompt user for information
    cout << "What is your temperature?: ";
    cin >> temp;
    cout << "If Celsius, please input 'C'; If Fahrenheit, please input 'F': ";
    cin >> temperature;
    temperature = toupper( temperature );
    
    //Primitive way to create space
    cout << "" << endl;
    
    //Determine Fahrenheit to Celsius temperature and then output information about water at that temperature
    if ( temperature == 'F' )
    {
       temp = ( temp - 32 ) * (5.0 / 9.0);
            if ( temp >= 100 )
            {
               cout << "The temperature in Celsius is " << temp << "." << endl;
               cout << "At this temperature water is boiling." << endl;
               }
            else if ( temp < 100 && temp > 0 )
            {
                 cout << "The temperature in Celsius is " << temp << "." << endl;
                 cout << "At this temperature water is liquid." << endl;
                 }
            else if ( temp <= 0 )
            {
                 cout << "The temperature in Celsius is " << temp << "." << endl;
                 cout << "At this temperature water is frozen." << endl;
                 }

}

    //Determine celsius to Fahrenheit temperature and then output information about water at that temperature
    if ( temperature == 'C' )
    {
       temp = ( 1.8 * temp ) + 32;
            if ( temp >= 212 )
            {
                 cout << "The temperature in Fahrenheit is " << temp << "." << endl;
                 cout << "At this temperature water is boiling." << endl;
                 }
            else if ( temp < 212 && temp > 32 )
            {
                 cout << "The temperature in Fahrenheit is " << temp << "." <<endl;
                 cout << "At this temperature water is liquid." << endl;
                 }
            else if ( temp <= 32 )
            {
                 cout << "The temperature in Fahrenheit is " << temp << "." << endl;
                 cout << "At this temperature water is frozen." << endl;
                 }
                 
}

     //If anything other than C or F is input, output error message.
     if ( temperature != 'C' && temperature != 'F' )
        cout << "Input error." << endl;
  
    return 0;

}
