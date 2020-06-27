#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

#define configUSE_PREEMPTION                    1
//#define configUSE_PORT_OPTIMISED_TASK_SELECTION 0
//#define configUSE_TICKLESS_IDLE                 0
#define configCPU_CLOCK_HZ                      80000000
#define configTICK_RATE_HZ                      1000
#define configMAX_PRIORITIES                    5
#define configMINIMAL_STACK_SIZE                16
#define configMAX_TASK_NAME_LEN                 15
#define configUSE_16_BIT_TICKS                  0
#define configIDLE_SHOULD_YIELD                 1
//#define configUSE_TASK_NOTIFICATIONS            1
//#define configUSE_MUTEXES                       1
//#define configUSE_RECURSIVE_MUTEXES             1
//#define configUSE_COUNTING_SEMAPHORES           0
//#define configUSE_ALTERNATIVE_API               0 /* Deprecated! */
//#define configQUEUE_REGISTRY_SIZE               0
//#define configUSE_QUEUE_SETS                    0
//#define configUSE_TIME_SLICING                  1
//#define configUSE_NEWLIB_REENTRANT              0
//#define configENABLE_BACKWARD_COMPATIBILITY     0
//#define configNUM_THREAD_LOCAL_STORAGE_POINTERS 5
//#define configSTACK_DEPTH_TYPE                  uint16_t
//#define configMESSAGE_BUFFER_LENGTH_TYPE        size_t

/* Определения, связанные с выделением памяти. */
//#define configSUPPORT_STATIC_ALLOCATION         0
//#define configSUPPORT_DYNAMIC_ALLOCATION        1
#define configTOTAL_HEAP_SIZE                   (30 * 1024)
//#define configAPPLICATION_ALLOCATED_HEAP        0

/* Определения, связанные с функцией крючка. */
#define configUSE_IDLE_HOOK                     0
#define configUSE_TICK_HOOK                     0
//#define configCHECK_FOR_STACK_OVERFLOW          2
//#define configUSE_MALLOC_FAILED_HOOK            0
//#define configUSE_DAEMON_TASK_STARTUP_HOOK      0

/* Статистика времени выполнения и задачи, собирающая связанные определения. */
//#define configGENERATE_RUN_TIME_STATS           1
#define configUSE_TRACE_FACILITY                0
//#define configUSE_STATS_FORMATTING_FUNCTIONS    1

/* Связанные рутины определения. */
#define configUSE_CO_ROUTINES                   0
#define configMAX_CO_ROUTINE_PRIORITIES         2

/* Определения, связанные с программным таймером. */
//#define configUSE_TIMERS                        0
//#define configTIMER_TASK_PRIORITY               3
//#define configTIMER_QUEUE_LENGTH                10
//#define configTIMER_TASK_STACK_DEPTH            configMINIMAL_STACK_SIZE

/* Настройка поведения вложенности прерываний. */
#define configKERNEL_INTERRUPT_PRIORITY         0xFF
#define configMAX_SYSCALL_INTERRUPT_PRIORITY    0xBF
//#define configMAX_API_CALL_INTERRUPT_PRIORITY   [dependent on processor and application]
#define configLIBRARY_KERNEL_INTERRUPT_PRIORITY 0x0F

/* Определить, чтобы ловить ошибки во время разработки. */
//#define configASSERT( ( x ) ) if( ( x ) == 0 ) vAssertCalled( __FILE__, __LINE__ )

/* Спецификации FreeRTOS MPU. */
//#define configINCLUDE_APPLICATION_DEFINED_PRIVILEGED_FUNCTIONS 0

/* Необязательные функции - большинство компоновщиков в любом случае удаляют неиспользуемые функции. */ 
#define INCLUDE_vTaskPrioritySet                1 //
#define INCLUDE_uxTaskPriorityGet               1 //
#define INCLUDE_vTaskDelete                     1 //
#define INCLUDE_vTaskSuspend                    1 //
#define INCLUDE_xResumeFromISR                  0
#define INCLUDE_vTaskDelayUntil                 1 //
#define INCLUDE_vTaskDelay                      1 //
#define INCLUDE_xTaskGetSchedulerState          1
#define INCLUDE_xTaskGetCurrentTaskHandle       1 //
#define INCLUDE_uxTaskGetStackHighWaterMark     0
#define INCLUDE_xTaskGetIdleTaskHandle          0
#define INCLUDE_eTaskGetState                   0
#define INCLUDE_xEventGroupSetBitFromISR        0
#define INCLUDE_xTimerPendFunctionCall          0
#define INCLUDE_xTaskAbortDelay                 0
#define INCLUDE_xTaskGetHandle                  0
#define INCLUDE_xTaskResumeFromISR              0

/* Сюда может быть включен заголовочный файл, который определяет макрос трассировки. */

#endif /* FREERTOS_CONFIG_H */
