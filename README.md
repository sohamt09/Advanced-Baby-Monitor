# Advanced-Baby-Monitor
This project aims for designing an advanced baby monitor.It works upon the concept of embedded system in conjunction with internet.An external heating supply is provided for the baby.if the temperature increases over certain limit then a constant notification will be sent over to the admin.A fan is also attached to it which starts instantly over the limited temperature.It is also equipped with other safety measure.A baby’s cry can be detected which is indicated by a buzzer.If the baby’s surrounding is encapsulated with smoke then a led glows.The entire data gets sent to the cloud server (Blynk in this case) via node mcu with internet connection.This overall system is meant for advance monitoring of a baby without any live presence of anyone.

## WORKING

IN THE AUOMATIC MODE OPERATION, DHT-11 IS USED TO MEASURE TEMPERATURE. MQ-6 IS USED TO MEASURE GAS CONTENT. RK-3103 IS USED TO MEASURE DECIBEL LEVEL OF SOUND.

FOR DHT-11:
TEMPERATURE VALUE	ACTION TAKEN
GREATER THAN 28 CELSIUS	FAN TURNS ON, E-MAIL AND NOTIFICATION ALERT
LESS THAN OR EQUAL TO 28 CELSIUS	FAN TURNS OFF


FOR MQ-6:
CONCENTRATION OF GAS	ACTION TAKEN
GREATER THAN OR EQUAL TO 250	BUZZER/LED GOES ON
LESS THAN 250	BUZZER/LED GOES OFF

FOR RK-3103
    
DECIBEL VALUE OF SOUND	ACTION TAKEN
GREATER THAN OR EQUAL TO 950	BUZZER/LED GOES ON
LESS THAN 950	BUZZER/LED GOES OFF

## IMPLEMENTATION

THE SYSTEM IS DESIGNED FOR THESE MAIN PURPOSES:
TO PROVIDE UTMOST CARE TO THE INFANTS
TO REDUCE MANPOWER

THE ABOVE PURPOSES HAVE BEEN IMPLEMENTED BY:
AUTOMATIC ACTION TAKEN BY THE SENSORS

WHENEVER THE TEMPERATURE GOES BEYOND THE OPTIMAL RANGE, THE COOLING FAN AUTOMATICALLY TURNS ON AND AGAIN AUTOMATICALLY TURNS OFF WHEN THE OPTIMAL TEMPERATURE IS RECEIVED. ALSO AN E-MAIL AND NOTIFICATION IS SENT CONTINUOUSLY. IF THE E-MAIL AND NOTIFICATION CONTINUES FOR A LONG TIME THEN THE EQUPIMENT REQUIRES SERVICING.

AGAIN, WHENEVER THE CONCENTRATION OF GAS GOES BEYOND THE SAFE VALUE, THE BUZZER TURNS ON AND IT TURNS OFF ONLY WHEN THE CONCENTRATION OF GAS DECREASES.

AGAIN, WHEN AN INFANT CRIES ANOTHER BUZZER GOES ON TILL IT IS ATTENDED TO. IN CASE OF TEMPERATURE ISSUES, THE CARE IS TAKEN BY THE TEMPERATURE SENSOR. 

## FUTURE SCOPE

APART FROM WHAT HAS BEEN PROPOSED, SEVERAL MODIFICATIONS CAN BE BROUGHT SUCH AS USE OF A HEATING PAD IN CASE OF A VERY COOL TEMPERATURE. ALSO A CAMERA MODULE CAN ALSO BE ATTACHED TO KEEP A TRACK OF THE BABY’S MOVEMENTS. IT AIMS AT PROVIDING UTMOST CARE AND SO THAT IN CASE OF ANY EMERGENCY INSTANTANEOUS ACTION CAN BE TAKEN. IT CAN BE USED TO REDUCE THE DEATHS OF PREMATURE INFANTS CAUSED DUE TO LACK OF ATTENTION OR DUE TO HUMAN ERROR.IN FUTURE, THE ADVANCED BABY MONITOR CAN BE USED TO IMPLEMENT AUTOMATIC CRADLING IN TIMES WHEN THE BABY WAKES UP OR IF THE BABY WEEPS. IT CAN BE USED TO HELP PARENTS TEACH THEIR CHILDREN TO SELF SOOTHE. ANOTHER FEATURE THAT CAN BE IMPLEMENTED IS SPOUTLING WHICH IS A SMALL ANKLE BRACELET WORN BY THE INFANT THAT MONITORS FACTORS LIKE THE HEARTBEAT ETC. HAVING A VIDEO CAMERA WITH IMAGE PROCESSING, IT CAN BE USED FOR SECURITY PURPOSES TO DETERMINE IF THERE ARE ANY INTRUDERS.
