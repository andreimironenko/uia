/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y23
 */

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_uia_family_dm_TimestampDM816XTimer__include
#define ti_uia_family_dm_TimestampDM816XTimer__include

#ifndef __nested__
#define __nested__
#define ti_uia_family_dm_TimestampDM816XTimer__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_uia_family_dm_TimestampDM816XTimer___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/uia/family/dm/package/package.defs.h>

#include <xdc/runtime/IGateProvider.h>
#include <ti/uia/runtime/IUIATimestampProvider.h>
#include <xdc/runtime/Types.h>
#include <ti/uia/family/dm/package/TimestampDM816XTimer_Module_GateProxy.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* TimerBaseAdrs */
enum ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs {
    ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer4 = 0x48044000,
    ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer5 = 0x48046000,
    ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer6 = 0x48048000,
    ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer7 = 0x4804A000,
    ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer4 = 0x08044000,
    ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer5 = 0x08046000,
    ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer6 = 0x08048000,
    ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer7 = 0x0804A000
};
typedef enum ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs;

/* TimerInstance */
enum ti_uia_family_dm_TimestampDM816XTimer_TimerInstance {
    ti_uia_family_dm_TimestampDM816XTimer_TimerInstance_UserConfigured = 0,
    ti_uia_family_dm_TimestampDM816XTimer_TimerInstance_Timer4 = 4,
    ti_uia_family_dm_TimestampDM816XTimer_TimerInstance_Timer5 = 5,
    ti_uia_family_dm_TimestampDM816XTimer_TimerInstance_Timer6 = 6,
    ti_uia_family_dm_TimestampDM816XTimer_TimerInstance_Timer7 = 7
};
typedef enum ti_uia_family_dm_TimestampDM816XTimer_TimerInstance ti_uia_family_dm_TimestampDM816XTimer_TimerInstance;

/* PrcmClkMuxBaseAdrs */
enum ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs {
    ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer4 = 0x4818039C,
    ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer5 = 0x481803A0,
    ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer6 = 0x481803A4,
    ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer7 = 0x481803A8
};
typedef enum ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs;

/* TiocpCfg */
struct ti_uia_family_dm_TimestampDM816XTimer_TiocpCfg {
    xdc_Bits8 idlemode;
    xdc_Bits8 emufree;
    xdc_Bits8 softreset;
};

/* Tier */
struct ti_uia_family_dm_TimestampDM816XTimer_Tier {
    xdc_Bits8 mat_it_ena;
    xdc_Bits8 ovf_it_ena;
    xdc_Bits8 tcar_it_ena;
};

/* Twer */
struct ti_uia_family_dm_TimestampDM816XTimer_Twer {
    xdc_Bits8 mat_wup_ena;
    xdc_Bits8 ovf_wup_ena;
    xdc_Bits8 tcar_wup_ena;
};

/* Tclr */
struct ti_uia_family_dm_TimestampDM816XTimer_Tclr {
    xdc_Bits32 ptv;
    xdc_Bits8 pre;
    xdc_Bits8 ce;
    xdc_Bits8 scpwm;
    xdc_Bits16 tcm;
    xdc_Bits16 trg;
    xdc_Bits8 pt;
    xdc_Bits8 captmode;
    xdc_Bits8 gpocfg;
};

/* Tsicr */
struct ti_uia_family_dm_TimestampDM816XTimer_Tsicr {
    xdc_Bits8 sft;
    xdc_Bits8 posted;
};


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_uia_family_dm_TimestampDM816XTimer_Module__diagsEnabled;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__diagsEnabled ti_uia_family_dm_TimestampDM816XTimer_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_uia_family_dm_TimestampDM816XTimer_Module__diagsIncluded;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__diagsIncluded ti_uia_family_dm_TimestampDM816XTimer_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_uia_family_dm_TimestampDM816XTimer_Module__diagsMask;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__diagsMask ti_uia_family_dm_TimestampDM816XTimer_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_uia_family_dm_TimestampDM816XTimer_Module__gateObj;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__gateObj ti_uia_family_dm_TimestampDM816XTimer_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_uia_family_dm_TimestampDM816XTimer_Module__gatePrms;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__gatePrms ti_uia_family_dm_TimestampDM816XTimer_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_uia_family_dm_TimestampDM816XTimer_Module__id;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__id ti_uia_family_dm_TimestampDM816XTimer_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerDefined;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerDefined ti_uia_family_dm_TimestampDM816XTimer_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerObj;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerObj ti_uia_family_dm_TimestampDM816XTimer_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn0;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn0 ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn1;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn1 ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn2;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn2 ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn4;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn4 ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn8;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn8 ti_uia_family_dm_TimestampDM816XTimer_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_uia_family_dm_TimestampDM816XTimer_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Module__startupDoneFxn ti_uia_family_dm_TimestampDM816XTimer_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_uia_family_dm_TimestampDM816XTimer_Object__count;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Object__count ti_uia_family_dm_TimestampDM816XTimer_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_uia_family_dm_TimestampDM816XTimer_Object__heap;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Object__heap ti_uia_family_dm_TimestampDM816XTimer_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_uia_family_dm_TimestampDM816XTimer_Object__sizeof;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Object__sizeof ti_uia_family_dm_TimestampDM816XTimer_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_uia_family_dm_TimestampDM816XTimer_Object__table;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_Object__table ti_uia_family_dm_TimestampDM816XTimer_Object__table__C;

/* timerNumber */
#define ti_uia_family_dm_TimestampDM816XTimer_timerNumber (ti_uia_family_dm_TimestampDM816XTimer_timerNumber__C)
typedef ti_uia_family_dm_TimestampDM816XTimer_TimerInstance CT__ti_uia_family_dm_TimestampDM816XTimer_timerNumber;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_timerNumber ti_uia_family_dm_TimestampDM816XTimer_timerNumber__C;

/* timerBaseAdrs */
#define ti_uia_family_dm_TimestampDM816XTimer_timerBaseAdrs (ti_uia_family_dm_TimestampDM816XTimer_timerBaseAdrs__C)
typedef xdc_Ptr CT__ti_uia_family_dm_TimestampDM816XTimer_timerBaseAdrs;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_timerBaseAdrs ti_uia_family_dm_TimestampDM816XTimer_timerBaseAdrs__C;

/* prcmClkMuxBaseAdrs */
#define ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxBaseAdrs (ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxBaseAdrs__C)
typedef xdc_Ptr CT__ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxBaseAdrs;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxBaseAdrs ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxBaseAdrs__C;

/* prcmClkMuxInitValue */
#ifdef ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxInitValue__D
#define ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxInitValue (ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxInitValue__D)
#else
#define ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxInitValue (ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxInitValue__C)
typedef xdc_Int CT__ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxInitValue;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxInitValue ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxInitValue__C;
#endif

/* autoStart */
#ifdef ti_uia_family_dm_TimestampDM816XTimer_autoStart__D
#define ti_uia_family_dm_TimestampDM816XTimer_autoStart (ti_uia_family_dm_TimestampDM816XTimer_autoStart__D)
#else
#define ti_uia_family_dm_TimestampDM816XTimer_autoStart (ti_uia_family_dm_TimestampDM816XTimer_autoStart__C)
typedef xdc_Bool CT__ti_uia_family_dm_TimestampDM816XTimer_autoStart;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_autoStart ti_uia_family_dm_TimestampDM816XTimer_autoStart__C;
#endif

/* maxTimerClockFreq */
#define ti_uia_family_dm_TimestampDM816XTimer_maxTimerClockFreq (ti_uia_family_dm_TimestampDM816XTimer_maxTimerClockFreq__C)
typedef xdc_runtime_Types_FreqHz CT__ti_uia_family_dm_TimestampDM816XTimer_maxTimerClockFreq;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_maxTimerClockFreq ti_uia_family_dm_TimestampDM816XTimer_maxTimerClockFreq__C;

/* maxBusClockFreq */
#define ti_uia_family_dm_TimestampDM816XTimer_maxBusClockFreq (ti_uia_family_dm_TimestampDM816XTimer_maxBusClockFreq__C)
typedef xdc_runtime_Types_FreqHz CT__ti_uia_family_dm_TimestampDM816XTimer_maxBusClockFreq;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_maxBusClockFreq ti_uia_family_dm_TimestampDM816XTimer_maxBusClockFreq__C;

/* tiocpCfg */
#define ti_uia_family_dm_TimestampDM816XTimer_tiocpCfg (ti_uia_family_dm_TimestampDM816XTimer_tiocpCfg__C)
typedef ti_uia_family_dm_TimestampDM816XTimer_TiocpCfg CT__ti_uia_family_dm_TimestampDM816XTimer_tiocpCfg;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_tiocpCfg ti_uia_family_dm_TimestampDM816XTimer_tiocpCfg__C;

/* tier */
#define ti_uia_family_dm_TimestampDM816XTimer_tier (ti_uia_family_dm_TimestampDM816XTimer_tier__C)
typedef ti_uia_family_dm_TimestampDM816XTimer_Tier CT__ti_uia_family_dm_TimestampDM816XTimer_tier;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_tier ti_uia_family_dm_TimestampDM816XTimer_tier__C;

/* twer */
#define ti_uia_family_dm_TimestampDM816XTimer_twer (ti_uia_family_dm_TimestampDM816XTimer_twer__C)
typedef ti_uia_family_dm_TimestampDM816XTimer_Twer CT__ti_uia_family_dm_TimestampDM816XTimer_twer;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_twer ti_uia_family_dm_TimestampDM816XTimer_twer__C;

/* tclr */
#define ti_uia_family_dm_TimestampDM816XTimer_tclr (ti_uia_family_dm_TimestampDM816XTimer_tclr__C)
typedef ti_uia_family_dm_TimestampDM816XTimer_Tclr CT__ti_uia_family_dm_TimestampDM816XTimer_tclr;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_tclr ti_uia_family_dm_TimestampDM816XTimer_tclr__C;

/* tsicr */
#define ti_uia_family_dm_TimestampDM816XTimer_tsicr (ti_uia_family_dm_TimestampDM816XTimer_tsicr__C)
typedef ti_uia_family_dm_TimestampDM816XTimer_Tsicr CT__ti_uia_family_dm_TimestampDM816XTimer_tsicr;
__extern __FAR__ const CT__ti_uia_family_dm_TimestampDM816XTimer_tsicr ti_uia_family_dm_TimestampDM816XTimer_tsicr__C;


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_uia_family_dm_TimestampDM816XTimer_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Bits32 (*get32)(void);
    xdc_Void (*get64)(xdc_runtime_Types_Timestamp64*);
    xdc_Void (*getFreq)(xdc_runtime_Types_FreqHz*);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_uia_family_dm_TimestampDM816XTimer_Fxns__ ti_uia_family_dm_TimestampDM816XTimer_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_uia_family_dm_TimestampDM816XTimer_Module_startup ti_uia_family_dm_TimestampDM816XTimer_Module_startup__E
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_Module_startup__E, "ti_uia_family_dm_TimestampDM816XTimer_Module_startup")
__extern xdc_Int ti_uia_family_dm_TimestampDM816XTimer_Module_startup__E( xdc_Int state );
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_Module_startup__F, "ti_uia_family_dm_TimestampDM816XTimer_Module_startup")
__extern xdc_Int ti_uia_family_dm_TimestampDM816XTimer_Module_startup__F( xdc_Int state );
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_Module_startup__R, "ti_uia_family_dm_TimestampDM816XTimer_Module_startup")
__extern xdc_Int ti_uia_family_dm_TimestampDM816XTimer_Module_startup__R( xdc_Int state );

/* Module__startupDone__S */
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_Module__startupDone__S, "ti_uia_family_dm_TimestampDM816XTimer_Module__startupDone")
__extern xdc_Bool ti_uia_family_dm_TimestampDM816XTimer_Module__startupDone__S( void );

/* get32__E */
#define ti_uia_family_dm_TimestampDM816XTimer_get32 ti_uia_family_dm_TimestampDM816XTimer_get32__E
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_get32__E, "ti_uia_family_dm_TimestampDM816XTimer_get32")
__extern xdc_Bits32 ti_uia_family_dm_TimestampDM816XTimer_get32__E( void );
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_get32__F, "ti_uia_family_dm_TimestampDM816XTimer_get32")
__extern xdc_Bits32 ti_uia_family_dm_TimestampDM816XTimer_get32__F( void );
__extern xdc_Bits32 ti_uia_family_dm_TimestampDM816XTimer_get32__R( void );

/* get64__E */
#define ti_uia_family_dm_TimestampDM816XTimer_get64 ti_uia_family_dm_TimestampDM816XTimer_get64__E
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_get64__E, "ti_uia_family_dm_TimestampDM816XTimer_get64")
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_get64__E( xdc_runtime_Types_Timestamp64* result );
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_get64__F, "ti_uia_family_dm_TimestampDM816XTimer_get64")
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_get64__F( xdc_runtime_Types_Timestamp64* result );
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_get64__R( xdc_runtime_Types_Timestamp64* result );

/* getFreq__E */
#define ti_uia_family_dm_TimestampDM816XTimer_getFreq ti_uia_family_dm_TimestampDM816XTimer_getFreq__E
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_getFreq__E, "ti_uia_family_dm_TimestampDM816XTimer_getFreq")
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_getFreq__E( xdc_runtime_Types_FreqHz* freq );
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_getFreq__F, "ti_uia_family_dm_TimestampDM816XTimer_getFreq")
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_getFreq__F( xdc_runtime_Types_FreqHz* freq );
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_getFreq__R( xdc_runtime_Types_FreqHz* freq );

/* setMSW__E */
#define ti_uia_family_dm_TimestampDM816XTimer_setMSW ti_uia_family_dm_TimestampDM816XTimer_setMSW__E
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_setMSW__E, "ti_uia_family_dm_TimestampDM816XTimer_setMSW")
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_setMSW__E( xdc_Int value );
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_setMSW__F, "ti_uia_family_dm_TimestampDM816XTimer_setMSW")
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_setMSW__F( xdc_Int value );
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_setMSW__R( xdc_Int value );

/* start__I */
#define ti_uia_family_dm_TimestampDM816XTimer_start ti_uia_family_dm_TimestampDM816XTimer_start__I
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_start__I, "ti_uia_family_dm_TimestampDM816XTimer_start")
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_start__I( void );

/* stop__I */
#define ti_uia_family_dm_TimestampDM816XTimer_stop ti_uia_family_dm_TimestampDM816XTimer_stop__I
xdc__CODESECT(ti_uia_family_dm_TimestampDM816XTimer_stop__I, "ti_uia_family_dm_TimestampDM816XTimer_stop")
__extern xdc_Void ti_uia_family_dm_TimestampDM816XTimer_stop__I( void );


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_uia_runtime_IUIATimestampProvider_Module ti_uia_family_dm_TimestampDM816XTimer_Module_upCast( void )
{
    return (ti_uia_runtime_IUIATimestampProvider_Module)&ti_uia_family_dm_TimestampDM816XTimer_Module__FXNS__C;
}

/* Module_to_ti_uia_runtime_IUIATimestampProvider */
#define ti_uia_family_dm_TimestampDM816XTimer_Module_to_ti_uia_runtime_IUIATimestampProvider ti_uia_family_dm_TimestampDM816XTimer_Module_upCast

/* Module_upCast2 */
static inline xdc_runtime_ITimestampProvider_Module ti_uia_family_dm_TimestampDM816XTimer_Module_upCast2( void )
{
    return (xdc_runtime_ITimestampProvider_Module)&ti_uia_family_dm_TimestampDM816XTimer_Module__FXNS__C;
}

/* Module_to_xdc_runtime_ITimestampProvider */
#define ti_uia_family_dm_TimestampDM816XTimer_Module_to_xdc_runtime_ITimestampProvider ti_uia_family_dm_TimestampDM816XTimer_Module_upCast2

/* Module_upCast3 */
static inline xdc_runtime_ITimestampClient_Module ti_uia_family_dm_TimestampDM816XTimer_Module_upCast3( void )
{
    return (xdc_runtime_ITimestampClient_Module)&ti_uia_family_dm_TimestampDM816XTimer_Module__FXNS__C;
}

/* Module_to_xdc_runtime_ITimestampClient */
#define ti_uia_family_dm_TimestampDM816XTimer_Module_to_xdc_runtime_ITimestampClient ti_uia_family_dm_TimestampDM816XTimer_Module_upCast3


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_uia_family_dm_TimestampDM816XTimer_Module_startupDone() ti_uia_family_dm_TimestampDM816XTimer_Module__startupDone__S()

/* Object_heap */
#define ti_uia_family_dm_TimestampDM816XTimer_Object_heap() ti_uia_family_dm_TimestampDM816XTimer_Object__heap__C

/* Module_heap */
#define ti_uia_family_dm_TimestampDM816XTimer_Module_heap() ti_uia_family_dm_TimestampDM816XTimer_Object__heap__C

/* Module_id */
static inline CT__ti_uia_family_dm_TimestampDM816XTimer_Module__id ti_uia_family_dm_TimestampDM816XTimer_Module_id( void ) 
{
    return ti_uia_family_dm_TimestampDM816XTimer_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_uia_family_dm_TimestampDM816XTimer_Module_hasMask( void ) 
{
    return ti_uia_family_dm_TimestampDM816XTimer_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_uia_family_dm_TimestampDM816XTimer_Module_getMask( void ) 
{
    return ti_uia_family_dm_TimestampDM816XTimer_Module__diagsMask__C != NULL ? *ti_uia_family_dm_TimestampDM816XTimer_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_uia_family_dm_TimestampDM816XTimer_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_uia_family_dm_TimestampDM816XTimer_Module__diagsMask__C != NULL) *ti_uia_family_dm_TimestampDM816XTimer_Module__diagsMask__C = mask;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_uia_family_dm_TimestampDM816XTimer__top__
#undef __nested__
#endif

#endif /* ti_uia_family_dm_TimestampDM816XTimer__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_uia_family_dm_TimestampDM816XTimer__internalaccess))

#ifndef ti_uia_family_dm_TimestampDM816XTimer__include_state
#define ti_uia_family_dm_TimestampDM816XTimer__include_state

/* Module_State */
struct ti_uia_family_dm_TimestampDM816XTimer_Module_State {
    xdc_Int timerMSW;
    xdc_Ptr timerBaseAdrs;
};

/* Module__state__V */
extern struct ti_uia_family_dm_TimestampDM816XTimer_Module_State__ ti_uia_family_dm_TimestampDM816XTimer_Module__state__V;

#endif /* ti_uia_family_dm_TimestampDM816XTimer__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_uia_family_dm_TimestampDM816XTimer__nolocalnames)

#ifndef ti_uia_family_dm_TimestampDM816XTimer__localnames__done
#define ti_uia_family_dm_TimestampDM816XTimer__localnames__done

/* module prefix */
#define TimestampDM816XTimer_TimerBaseAdrs ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs
#define TimestampDM816XTimer_TimerInstance ti_uia_family_dm_TimestampDM816XTimer_TimerInstance
#define TimestampDM816XTimer_PrcmClkMuxBaseAdrs ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs
#define TimestampDM816XTimer_TiocpCfg ti_uia_family_dm_TimestampDM816XTimer_TiocpCfg
#define TimestampDM816XTimer_Tier ti_uia_family_dm_TimestampDM816XTimer_Tier
#define TimestampDM816XTimer_Twer ti_uia_family_dm_TimestampDM816XTimer_Twer
#define TimestampDM816XTimer_Tclr ti_uia_family_dm_TimestampDM816XTimer_Tclr
#define TimestampDM816XTimer_Tsicr ti_uia_family_dm_TimestampDM816XTimer_Tsicr
#define TimestampDM816XTimer_Module_State ti_uia_family_dm_TimestampDM816XTimer_Module_State
#define TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer4 ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer4
#define TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer5 ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer5
#define TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer6 ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer6
#define TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer7 ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_ARM_Timer7
#define TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer4 ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer4
#define TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer5 ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer5
#define TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer6 ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer6
#define TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer7 ti_uia_family_dm_TimestampDM816XTimer_TimerBaseAdrs_C6000_Timer7
#define TimestampDM816XTimer_TimerInstance_UserConfigured ti_uia_family_dm_TimestampDM816XTimer_TimerInstance_UserConfigured
#define TimestampDM816XTimer_TimerInstance_Timer4 ti_uia_family_dm_TimestampDM816XTimer_TimerInstance_Timer4
#define TimestampDM816XTimer_TimerInstance_Timer5 ti_uia_family_dm_TimestampDM816XTimer_TimerInstance_Timer5
#define TimestampDM816XTimer_TimerInstance_Timer6 ti_uia_family_dm_TimestampDM816XTimer_TimerInstance_Timer6
#define TimestampDM816XTimer_TimerInstance_Timer7 ti_uia_family_dm_TimestampDM816XTimer_TimerInstance_Timer7
#define TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer4 ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer4
#define TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer5 ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer5
#define TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer6 ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer6
#define TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer7 ti_uia_family_dm_TimestampDM816XTimer_PrcmClkMuxBaseAdrs_Timer7
#define TimestampDM816XTimer_timerNumber ti_uia_family_dm_TimestampDM816XTimer_timerNumber
#define TimestampDM816XTimer_timerBaseAdrs ti_uia_family_dm_TimestampDM816XTimer_timerBaseAdrs
#define TimestampDM816XTimer_prcmClkMuxBaseAdrs ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxBaseAdrs
#define TimestampDM816XTimer_prcmClkMuxInitValue ti_uia_family_dm_TimestampDM816XTimer_prcmClkMuxInitValue
#define TimestampDM816XTimer_autoStart ti_uia_family_dm_TimestampDM816XTimer_autoStart
#define TimestampDM816XTimer_maxTimerClockFreq ti_uia_family_dm_TimestampDM816XTimer_maxTimerClockFreq
#define TimestampDM816XTimer_maxBusClockFreq ti_uia_family_dm_TimestampDM816XTimer_maxBusClockFreq
#define TimestampDM816XTimer_tiocpCfg ti_uia_family_dm_TimestampDM816XTimer_tiocpCfg
#define TimestampDM816XTimer_tier ti_uia_family_dm_TimestampDM816XTimer_tier
#define TimestampDM816XTimer_twer ti_uia_family_dm_TimestampDM816XTimer_twer
#define TimestampDM816XTimer_tclr ti_uia_family_dm_TimestampDM816XTimer_tclr
#define TimestampDM816XTimer_tsicr ti_uia_family_dm_TimestampDM816XTimer_tsicr
#define TimestampDM816XTimer_get32 ti_uia_family_dm_TimestampDM816XTimer_get32
#define TimestampDM816XTimer_get64 ti_uia_family_dm_TimestampDM816XTimer_get64
#define TimestampDM816XTimer_getFreq ti_uia_family_dm_TimestampDM816XTimer_getFreq
#define TimestampDM816XTimer_setMSW ti_uia_family_dm_TimestampDM816XTimer_setMSW
#define TimestampDM816XTimer_Module_name ti_uia_family_dm_TimestampDM816XTimer_Module_name
#define TimestampDM816XTimer_Module_id ti_uia_family_dm_TimestampDM816XTimer_Module_id
#define TimestampDM816XTimer_Module_startup ti_uia_family_dm_TimestampDM816XTimer_Module_startup
#define TimestampDM816XTimer_Module_startupDone ti_uia_family_dm_TimestampDM816XTimer_Module_startupDone
#define TimestampDM816XTimer_Module_hasMask ti_uia_family_dm_TimestampDM816XTimer_Module_hasMask
#define TimestampDM816XTimer_Module_getMask ti_uia_family_dm_TimestampDM816XTimer_Module_getMask
#define TimestampDM816XTimer_Module_setMask ti_uia_family_dm_TimestampDM816XTimer_Module_setMask
#define TimestampDM816XTimer_Object_heap ti_uia_family_dm_TimestampDM816XTimer_Object_heap
#define TimestampDM816XTimer_Module_heap ti_uia_family_dm_TimestampDM816XTimer_Module_heap
#define TimestampDM816XTimer_Module_upCast ti_uia_family_dm_TimestampDM816XTimer_Module_upCast
#define TimestampDM816XTimer_Module_to_ti_uia_runtime_IUIATimestampProvider ti_uia_family_dm_TimestampDM816XTimer_Module_to_ti_uia_runtime_IUIATimestampProvider
#define TimestampDM816XTimer_Module_upCast2 ti_uia_family_dm_TimestampDM816XTimer_Module_upCast2
#define TimestampDM816XTimer_Module_to_xdc_runtime_ITimestampProvider ti_uia_family_dm_TimestampDM816XTimer_Module_to_xdc_runtime_ITimestampProvider
#define TimestampDM816XTimer_Module_upCast3 ti_uia_family_dm_TimestampDM816XTimer_Module_upCast3
#define TimestampDM816XTimer_Module_to_xdc_runtime_ITimestampClient ti_uia_family_dm_TimestampDM816XTimer_Module_to_xdc_runtime_ITimestampClient

/* proxies */
#include <ti/uia/family/dm/package/TimestampDM816XTimer_Module_GateProxy.h>

#endif /* ti_uia_family_dm_TimestampDM816XTimer__localnames__done */
#endif
/*
 *  @(#) ti.uia.family.dm; 1, 0, 0, 0,1; 7-13-2012 11:12:15; /db/vtree/library/trees/uia/uia-d14/src/ xlibrary

 */

