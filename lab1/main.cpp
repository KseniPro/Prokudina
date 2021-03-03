//тут будет код программы
//Уже просит программа ввести данные, правда, у меня похоже ошибка с памятью, поскольку с сигментацией проблема, или ядро сброшено.
#include <stdio.h>
 void InputArray(int array[10])
 {

     for (int i = 0; i < 10; i++)
     {
         {
             printf("input [%d] element\n", i);
             scanf("%d", &array[i]);
         }
     }
 }
 void Pointer (int array[10])
 {
     int *ptrthirdelement = &array[3];
     int *ptrsixthelement = &array[6];
     printf("Address of the third element equals\n");
     printf("%x\n", ptrthirdelement);
     printf("Address of the sixth element equals\n");
     printf("%x\n", ptrsixthelement);
 }

 void Calculate(int array[10])
 {
     int *ptrthirdelement = &array[3];
     int *ptrsixthelement = &array[6];
     while (*ptrthirdelement < *ptrsixthelement)
     {
         printf("Address of the first element equals\n");
         printf("%x\n", &ptrthirdelement);
         printf("Element value equals\n");
         printf("%x\n", *ptrthirdelement);
         int *ptrthirdelement = &array[3];
         (ptrthirdelement++);
     }
 }



 int main()
 {
     int *array[10];
         InputArray(*array);
     Pointer(*array);
     Calculate(*array);
     return 0;
 }
