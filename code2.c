#include <stdio.h> 

//converstion functions
float celsuis_fahrenheit(float celsius){
    return (celsius * 9 / 5) + 32;
}

float fahrenheit_celsuis(float fahrenheit){
    return (fahrenheit - 32) * 5/9;
}

float celsius_kelvin(float celsius){
    return celsius + 273.15;
}

float kelvin_celsius(float kelvin){
    return kelvin - 273.15;
}

//function to categorize temps and advisory
void categorize_temp(float celsius){
    if (celsius < 0)
    {
        printf("Temp category: Freezing\n");
        printf("weather advisory: stay warm, it's freezing!");
    }

    else if (celsius >= 0 && celsius < 10)
    {
        printf("temp category: Cold\n");
        printf("weather advisory: wear a jacket.");
    }

    else if (celsius >= 10 && celsius < 25)
    {
        printf("temp category: Comfortable\n");if
        printf("weather advisory: You should feel comfortable.");
    }

    else if (celsius >= 25 && celsius < 30)
    {
        printf("temp category: hot\n");
        printf("weather advisory: It's getting warm, stay hydrated.");
    }

    else{
        printf("temp category: Extreme Heat\n");
        printf("weather advisory: Stay indoors, it's extremely hot!");
    }
    
}


int main() {
    float temp, converted_temp;
    int current_scale, target_scale;

    //input
    printf("Enter the temperature: ");
    scanf("%f", &temp);

    //select current scale
    printf("Choose the current scale (1)Celsius, (2) Fahrenehiet, (3) Kelvin: ");
    scanf("%d", &current_scale);

    // target scale
    printf("Convert to (1) Celsius, (2) Fahrenehiet, (3) Kelvin: ");
    scanf("%d", &target_scale);


    //conversion
    if(current_scale == 1 && target_scale == 2){
        converted_temp = celsuis_fahrenheit(temp);
        printf("Converted Temperature: .2f°F\n", converted_temp);}

    else if (current_scale == 1 && target_scale == 3){
    converted_temp = celsuis_kelvin(temp);
    printf("Converted Temperature: %.2f\n", converted_temp);
    }
            
    else if (current_scale == 2 && target_scale == 1){
    converted_temp = fahrenheit_celsuis(temp);
    printf("Converted Temperature: %.2f°C\n", converted_temp);
    }

    else{
        printf("invalid conversion.\n");    return 1; 
    }
    }

        //categorize advisory based on the converted temp in C
        if (target_scale == 1) {
            categorize_temp(converted_temp);
            }

            else if (target_scale == 2)
            {
                categorize_temp(fahrenheit_celsuis(converted_temp));
            }
            
            else if (target_scale == 3)
            {
                categorize_temp(kelvin_celsius(converted_temp));
            }
        }    (return) 0;    
}