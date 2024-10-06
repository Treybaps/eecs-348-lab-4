#include <stdio.h> 

  

// Conversion functions  

float celsuis_fahrenheit(float celsius) {  

    return (celsius * 9 / 5) + 32;  

} 

  

float fahrenheit_celsuis(float fahrenheit) {  

    return (fahrenheit - 32) * 5 / 9;  

} 

  

float celsuis_kelvin(float celsius) {  

    return celsius + 273.15;  

} 

  

float kelvin_celsius(float kelvin) {  

    return kelvin - 273.15;  

} 

  

// Function to categorize temperature and give advisory  

void categorize_temp(float celsius) {  

    if (celsius < 0) {  

        printf("Temp category: Freezing\n");  

        printf("Weather advisory: Stay warm, it's freezing!\n");  

    }  

    else if (celsius >= 0 && celsius < 10) {  

        printf("Temp category: Cold\n");  

        printf("Weather advisory: Wear a jacket.\n");  

    }  

    else if (celsius >= 10 && celsius < 25) {  

        printf("Temp category: Comfortable\n");  

        printf("Weather advisory: You should feel comfortable.\n");  

    }  

    else if (celsius >= 25 && celsius < 30) {  

        printf("Temp category: Hot\n");  

        printf("Weather advisory: It's getting warm, stay hydrated.\n");  

    }  

    else {  

        printf("Temp category: Extreme Heat\n");  

        printf("Weather advisory: Stay indoors, it's extremely hot!\n");  

    }  

} 

  

int main() {  

    float temp, converted_temp;  

    int current_scale, target_scale; 

  

    // Input the temperature  

    printf("Enter the temperature: ");  

    scanf("%f", &temp); 

  

    // Select the current scale  

    printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");  

    scanf("%d", &current_scale); 

  

    // Select the target scale  

    printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");  

    scanf("%d", &target_scale); 

  

    // Conversion  

    if (current_scale == 1 && target_scale == 2) {  

        converted_temp = celsuis_fahrenheit(temp);  

        printf("Converted Temperature: %.2f°F\n", converted_temp); 

    }  

    else if (current_scale == 1 && target_scale == 3) {  

        converted_temp = celsuis_kelvin(temp);  

        printf("Converted Temperature: %.2fK\n", converted_temp);  

    }  

    else if (current_scale == 2 && target_scale == 1) {  

        converted_temp = fahrenheit_celsuis(temp);  

        printf("Converted Temperature: %.2f°C\n", converted_temp);  

    }  

    else if (current_scale == 2 && target_scale == 3) {  

        converted_temp = celsuis_kelvin(fahrenheit_celsuis(temp));  

        printf("Converted Temperature: %.2fK\n", converted_temp);  

    }  

    else if (current_scale == 3 && target_scale == 1) {  

        converted_temp = kelvin_celsius(temp);  

        printf("Converted Temperature: %.2f°C\n", converted_temp);  

    }  

    else if (current_scale == 3 && target_scale == 2) {  

        converted_temp = celsuis_fahrenheit(kelvin_celsius(temp));  

        printf("Converted Temperature: %.2f°F\n", converted_temp);  

    }  

    else {  

        printf("Invalid conversion.\n");  

        return 1;   

    } 

  

    // Categorize temperature based on Celsius 

    if (target_scale == 1) {  

        categorize_temp(converted_temp);  

    }  

    else if (target_scale == 2) {  

        categorize_temp(fahrenheit_celsuis(converted_temp));  

    }  

    else if (target_scale == 3) {  

        categorize_temp(kelvin_celsius(converted_temp));  

    } 

  

    return 0;   

} 

 