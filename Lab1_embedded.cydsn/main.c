/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

int main()
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    /* CyGlobalIntEnable; */ /* Uncomment this line to enable global interrupts. */
    for(;;)
    {
        PWM_Start();
        //PWM_Enable();
        //Pin_LED_Write(~Pin_LED_Read()); //Toggle Pin State To change LED's
        //CyDelay(1000); //System Delay
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
