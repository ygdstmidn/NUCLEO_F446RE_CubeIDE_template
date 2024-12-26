// main code here!!

#ifdef __cplusplus
extern "C"
{
#endif

#include "main.h"

    extern UART_HandleTypeDef huart2;

    void user_setup(void)
    {
        setbuf(stdout, NULL);
        printf("Hello World!!\n");
    }

    void user_loop(void)
    {
        const uint32_t now = HAL_GetTick();
        static uint32_t pre = now;

        if (now - pre >= 1000)
        {
            printf("now,%lu\n", now);
            pre = now;
        }
    }

    int _write(int file, char *ptr, int len)
    {
        HAL_UART_Transmit(&huart2, (uint8_t *)ptr, len, 10);
        return len;
    }

#ifdef __cplusplus
}
#endif
