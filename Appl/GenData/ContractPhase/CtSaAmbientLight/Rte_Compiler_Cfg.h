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
 *          File:  Rte_Compiler_Cfg.h
 *        Config:  C:/nit-au-03/projekat/AUTOSAR_Exercises/templateAFS/MyECU.dpa
 *     SW-C Type:  CtSaAmbientLight
 *  Generated at:  Sat Feb 10 21:16:24 2024
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  RTE Compiler Abstraction header file (Contract Phase)
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_COMPILER_CFG_H
# define _RTE_COMPILER_CFG_H

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * RTE specific defines
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_CODE
 *********************************************************************************************************************/

/* used for code */
# define RTE_CODE

/* used for all global or static variables that are not initialized by the startup code of the compiler */
# define RTE_VAR_NOINIT

/* used for global or static constants */
# define RTE_CONST

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * SW-C specific defines
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_CTSAAMBIENTLIGHT_APPL
 *********************************************************************************************************************/

/* used for references on application variables */
# define RTE_CTSAAMBIENTLIGHT_APPL_VAR

/* used for references on application data (constants or variables) */
# define RTE_CTSAAMBIENTLIGHT_APPL_DATA

/* used for references on application functions */
# define RTE_CTSAAMBIENTLIGHT_APPL_CODE

/* used for references on application constants */
# define RTE_CTSAAMBIENTLIGHT_APPL_CONST

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: CtSaAmbientLight_CODE
 *********************************************************************************************************************/

/* used for SWC specific code */
# define CtSaAmbientLight_CODE

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: CtSaAmbientLight_CONST
 *********************************************************************************************************************/

/* used for global or static SWC specific constants */
# define CtSaAmbientLight_CONST

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!     << Start of compiler abstraction implementation >>       DO NOT CHANGE THIS COMMENT!
 * Symbol: CtSaAmbientLight_VAR
 *********************************************************************************************************************/

/* used for all global or static SWC specific variables that are not initialized by the startup code of the compiler */
# define CtSaAmbientLight_VAR_NOINIT

/* used for global or static SWC specific variables that are initialized by the startup code of the compiler */
# define CtSaAmbientLight_VAR_INIT

/* used for global or static SWC specific variables that are initialized with zero by the startup code of the compiler */
# define CtSaAmbientLight_VAR_ZERO_INIT

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!      << End of compiler abstraction implementation >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#endif /* _RTE_COMPILER_CFG_H */
