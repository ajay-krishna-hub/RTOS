#include<Arduino.h>
int count1= 0;
int count2= 0;

void task1(void *parameters)
{
  for(;;)
  Serial.print("Task 1 counter: \n");
  Serial.println(count1++);
  Serial.print("\n");
  vTaskDelay(1000/portTICK_PERIOD_MS);
}

void task2(void *parameters)
{
  for(;;)
  Serial.print("Task 2 counter: ");
  Serial.println(count2++);
  Serial.print("\n");
  vTaskDelay(1000/portTICK_PERIOD_MS);
}

void setup()
{
  Serial.begin(9600);
  xTaskCreate
  (
    task1,
    "Task 1",
    1024,
    NULL,
    1,
    NULL
  );

  xTaskCreate
  (
    task2,
    "Task 2",
    1024,
    NULL,
    1,
    NULL
  );
}

void loop(){}
