
#include <stdio.h>

    unsigned char asciipic_txt[] = {
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x5f,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f,
  0x5f, 0x5f, 0x5f, 0x20, 0x0a, 0x2f, 0x20, 0x5f, 0x5f, 0x5f, 0x7c, 0x7c,
  0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x5f, 0x20, 0x5c, 0x7c,
  0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x7c, 0x20, 0x20, 0x5f, 0x20, 0x5c, 0x20,
  0x20, 0x20, 0x20, 0x2f, 0x20, 0x5f, 0x5f, 0x5f, 0x7c, 0x0a, 0x5c, 0x5f,
  0x5f, 0x5f, 0x20, 0x5c, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20,
  0x7c, 0x5f, 0x29, 0x20, 0x7c, 0x20, 0x20, 0x5f, 0x7c, 0x20, 0x7c, 0x20,
  0x7c, 0x5f, 0x29, 0x20, 0x7c, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x20,
  0x20, 0x20, 0x0a, 0x20, 0x5f, 0x5f, 0x5f, 0x29, 0x20, 0x7c, 0x20, 0x7c,
  0x5f, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x5f, 0x5f, 0x2f, 0x7c, 0x20, 0x7c,
  0x5f, 0x5f, 0x5f, 0x7c, 0x20, 0x20, 0x5f, 0x20, 0x3c, 0x20, 0x20, 0x20,
  0x7c, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x20, 0x0a, 0x7c, 0x5f, 0x5f, 0x5f,
  0x5f, 0x2f, 0x20, 0x5c, 0x5f, 0x5f, 0x5f, 0x2f, 0x7c, 0x5f, 0x7c, 0x20,
  0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x7c, 0x5f, 0x7c, 0x20,
  0x5c, 0x5f, 0x5c, 0x5f, 0x5f, 0x5f, 0x5c, 0x5f, 0x5f, 0x5f, 0x5f, 0x7c,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x0a
};
unsigned int asciipic_txt_len = 246;
// definging funtion 
int logo(); int mem(); int malloc(); int free();
// main funtion 
int main(void)
{
    logo();

    return 0;
	
}

int logo ()
{
printf("%s\n", asciipic_txt);

return 0;
}
// Mem read and right 
int mem()
{
 int * userInputBuffer = malloc(sizeof(int) * BUFFER_SIZE);
    int userInput;
    int counter = 0;
    int reallocCounter = 1;

    while ((scanf(" %d", &userInput)) == 1)
    {
        if ((counter % BUFFER_SIZE) == 0)
        {
            userInputBuffer = realloc(userInputBuffer, (reallocCounter++ + 1) * BUFFER_SIZE * sizeof(int));
        }
        userInputBuffer[counter++] = userInput;
    }

    for (int i = 0; i < counter; i++)
    {
        printf("User input #%d: %d\n", i + 1, userInputBuffer[i]);
    }

    free(userInputBuffer);
    return 0;
}
}