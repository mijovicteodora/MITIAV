/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_CtSaSpeedometer_Type.h
 *        Config:  C:/nit-au-03/projekat/AUTOSAR_Exercises/templateAFS/MyECU.dpa
 *     SW-C Type:  CtSaSpeedometer
 *  Generated at:  Sat Feb 10 21:16:26 2024
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application types header file for SW-C <CtSaSpeedometer> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSASPEEDOMETER_TYPE_H
# define _RTE_CTSASPEEDOMETER_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"



/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_BatteryManagerModeDeclarationGroup
#  define RTE_MODETYPE_BatteryManagerModeDeclarationGroup
typedef uint8 Rte_ModeType_BatteryManagerModeDeclarationGroup;
# endif

# ifndef RTE_MODE_BatteryManagerModeDeclarationGroup_BATTERY_HIGH
#  define RTE_MODE_BatteryManagerModeDeclarationGroup_BATTERY_HIGH (0U)
# endif
# ifndef RTE_MODE_BatteryManagerModeDeclarationGroup_BATTERY_LOW
#  define RTE_MODE_BatteryManagerModeDeclarationGroup_BATTERY_LOW (1U)
# endif
# ifndef RTE_MODE_BatteryManagerModeDeclarationGroup_BATTERY_MEDIUM
#  define RTE_MODE_BatteryManagerModeDeclarationGroup_BATTERY_MEDIUM (2U)
# endif
# ifndef RTE_TRANSITION_BatteryManagerModeDeclarationGroup
#  define RTE_TRANSITION_BatteryManagerModeDeclarationGroup (3U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSASPEEDOMETER_TYPE_H */
