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
 *          File:  Rte_Hook.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Header file containing definitions for VFB tracing
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Names of available VFB-Trace-Hooks
 **********************************************************************************************************************
 *
 *  Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Return
 *  Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Start
 *  Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Return
 *  Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Start
 *  Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Return
 *  Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Start
 *  Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Return
 *  Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Start
 *  Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Return
 *  Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Start
 *  Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return
 *  Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start
 *  Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return
 *  Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start
 *  Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return
 *  Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start
 *  Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return
 *  Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start
 *  Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return
 *  Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start
 *  Rte_CallHook_Dcm_Dcm_DcmClearDTC_Return
 *  Rte_CallHook_Dcm_Dcm_DcmClearDTC_Start
 *  Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Return
 *  Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Start
 *  Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Return
 *  Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Start
 *  Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Return
 *  Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Start
 *  Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return
 *  Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start
 *  Rte_ComHook_sig_AmbientLightBrightness_In_SigRx
 *  Rte_ComHook_sig_CurrentSpeedSlider_In_SigRx
 *  Rte_ComHook_sig_DoorLock_Out_SigTx
 *  Rte_ComHook_sig_LeftHAngle_Out_SigTx
 *  Rte_ComHook_sig_LeftLightLength_Out_SigTx
 *  Rte_ComHook_sig_RightHAngle_Out_SigTx
 *  Rte_ComHook_sig_RightLightLength_Out_SigTx
 *  Rte_ComHook_sig_SteeringWheelPosition_In_SigRx
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start
 *  Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Return
 *  Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Start
 *  Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Return
 *  Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Start
 *  Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Return
 *  Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Start
 *  Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Return
 *  Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Start
 *  Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Return
 *  Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Start
 *  Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Return
 *  Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Start
 *  Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Return
 *  Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Start
 *  Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Return
 *  Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Start
 *  Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Return
 *  Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Start
 *  Rte_Runnable_BswM_BswM_MainFunction_Return
 *  Rte_Runnable_BswM_BswM_MainFunction_Start
 *  Rte_Runnable_ComM_ComM_MainFunction_0_Return
 *  Rte_Runnable_ComM_ComM_MainFunction_0_Start
 *  Rte_Runnable_ComM_GetCurrentComMode_Return
 *  Rte_Runnable_ComM_GetCurrentComMode_Start
 *  Rte_Runnable_ComM_GetInhibitionStatus_Return
 *  Rte_Runnable_ComM_GetInhibitionStatus_Start
 *  Rte_Runnable_ComM_GetMaxComMode_Return
 *  Rte_Runnable_ComM_GetMaxComMode_Start
 *  Rte_Runnable_ComM_GetRequestedComMode_Return
 *  Rte_Runnable_ComM_GetRequestedComMode_Start
 *  Rte_Runnable_ComM_LimitChannelToNoComMode_Return
 *  Rte_Runnable_ComM_LimitChannelToNoComMode_Start
 *  Rte_Runnable_ComM_LimitECUToNoComMode_Return
 *  Rte_Runnable_ComM_LimitECUToNoComMode_Start
 *  Rte_Runnable_ComM_PreventWakeUp_Return
 *  Rte_Runnable_ComM_PreventWakeUp_Start
 *  Rte_Runnable_ComM_ReadInhibitCounter_Return
 *  Rte_Runnable_ComM_ReadInhibitCounter_Start
 *  Rte_Runnable_ComM_RequestComMode_Return
 *  Rte_Runnable_ComM_RequestComMode_Start
 *  Rte_Runnable_ComM_ResetInhibitCounter_Return
 *  Rte_Runnable_ComM_ResetInhibitCounter_Start
 *  Rte_Runnable_ComM_SetECUGroupClassification_Return
 *  Rte_Runnable_ComM_SetECUGroupClassification_Start
 *  Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return
 *  Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start
 *  Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return
 *  Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start
 *  Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return
 *  Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start
 *  Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return
 *  Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start
 *  Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return
 *  Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start
 *  Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Return
 *  Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Start
 *  Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Return
 *  Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Start
 *  Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Return
 *  Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Start
 *  Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Return
 *  Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Start
 *  Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Return
 *  Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Start
 *  Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Return
 *  Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Start
 *  Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Return
 *  Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Start
 *  Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return
 *  Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start
 *  Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Return
 *  Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Start
 *  Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Return
 *  Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Start
 *  Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Return
 *  Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Start
 *  Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Return
 *  Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Start
 *  Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Return
 *  Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Start
 *  Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Return
 *  Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Start
 *  Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Return
 *  Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Start
 *  Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Return
 *  Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Start
 *  Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Return
 *  Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Start
 *  Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Return
 *  Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Start
 *  Rte_Runnable_Dcm_Dcm_MainFunction_Return
 *  Rte_Runnable_Dcm_Dcm_MainFunction_Start
 *  Rte_Runnable_Dcm_GetActiveProtocol_Return
 *  Rte_Runnable_Dcm_GetActiveProtocol_Start
 *  Rte_Runnable_Dcm_GetSecurityLevel_Return
 *  Rte_Runnable_Dcm_GetSecurityLevel_Start
 *  Rte_Runnable_Dcm_GetSesCtrlType_Return
 *  Rte_Runnable_Dcm_GetSesCtrlType_Start
 *  Rte_Runnable_Dcm_ResetToDefaultSession_Return
 *  Rte_Runnable_Dcm_ResetToDefaultSession_Start
 *  Rte_Runnable_Dcm_SetActiveDiagnostic_Return
 *  Rte_Runnable_Dcm_SetActiveDiagnostic_Start
 *  Rte_Runnable_Dem_ClearDTC_Return
 *  Rte_Runnable_Dem_ClearDTC_Start
 *  Rte_Runnable_Dem_DcmClearDTC_Return
 *  Rte_Runnable_Dem_DcmClearDTC_Start
 *  Rte_Runnable_Dem_DcmEnableDTCSetting_Return
 *  Rte_Runnable_Dem_DcmEnableDTCSetting_Start
 *  Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return
 *  Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start
 *  Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return
 *  Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start
 *  Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return
 *  Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start
 *  Rte_Runnable_Dem_Dem_MainFunction_Return
 *  Rte_Runnable_Dem_Dem_MainFunction_Start
 *  Rte_Runnable_Dem_GetDTCOfEvent_Return
 *  Rte_Runnable_Dem_GetDTCOfEvent_Start
 *  Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return
 *  Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start
 *  Rte_Runnable_Dem_GetDebouncingOfEvent_Return
 *  Rte_Runnable_Dem_GetDebouncingOfEvent_Start
 *  Rte_Runnable_Dem_GetEventEnableCondition_Return
 *  Rte_Runnable_Dem_GetEventEnableCondition_Start
 *  Rte_Runnable_Dem_GetEventExtendedDataRecord_Return
 *  Rte_Runnable_Dem_GetEventExtendedDataRecord_Start
 *  Rte_Runnable_Dem_GetEventFailed_Return
 *  Rte_Runnable_Dem_GetEventFailed_Start
 *  Rte_Runnable_Dem_GetEventFreezeFrameData_Return
 *  Rte_Runnable_Dem_GetEventFreezeFrameData_Start
 *  Rte_Runnable_Dem_GetEventMemoryOverflow_Return
 *  Rte_Runnable_Dem_GetEventMemoryOverflow_Start
 *  Rte_Runnable_Dem_GetEventStatus_Return
 *  Rte_Runnable_Dem_GetEventStatus_Start
 *  Rte_Runnable_Dem_GetEventTested_Return
 *  Rte_Runnable_Dem_GetEventTested_Start
 *  Rte_Runnable_Dem_GetFaultDetectionCounter_Return
 *  Rte_Runnable_Dem_GetFaultDetectionCounter_Start
 *  Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return
 *  Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start
 *  Rte_Runnable_Dem_PostRunRequested_Return
 *  Rte_Runnable_Dem_PostRunRequested_Start
 *  Rte_Runnable_Dem_ResetEventDebounceStatus_Return
 *  Rte_Runnable_Dem_ResetEventDebounceStatus_Start
 *  Rte_Runnable_Dem_ResetEventStatus_Return
 *  Rte_Runnable_Dem_ResetEventStatus_Start
 *  Rte_Runnable_Dem_SetEventStatus_Return
 *  Rte_Runnable_Dem_SetEventStatus_Start
 *  Rte_Runnable_Dem_SetOperationCycleState_Return
 *  Rte_Runnable_Dem_SetOperationCycleState_Start
 *  Rte_Runnable_EcuM_EcuM_MainFunction_Return
 *  Rte_Runnable_EcuM_EcuM_MainFunction_Start
 *  Rte_Runnable_EcuM_GetBootTarget_Return
 *  Rte_Runnable_EcuM_GetBootTarget_Start
 *  Rte_Runnable_EcuM_GetLastShutdownTarget_Return
 *  Rte_Runnable_EcuM_GetLastShutdownTarget_Start
 *  Rte_Runnable_EcuM_GetShutdownCause_Return
 *  Rte_Runnable_EcuM_GetShutdownCause_Start
 *  Rte_Runnable_EcuM_GetShutdownTarget_Return
 *  Rte_Runnable_EcuM_GetShutdownTarget_Start
 *  Rte_Runnable_EcuM_SelectBootTarget_Return
 *  Rte_Runnable_EcuM_SelectBootTarget_Start
 *  Rte_Runnable_EcuM_SelectShutdownCause_Return
 *  Rte_Runnable_EcuM_SelectShutdownCause_Start
 *  Rte_Runnable_EcuM_SelectShutdownTarget_Return
 *  Rte_Runnable_EcuM_SelectShutdownTarget_Start
 *  Rte_Runnable_NvM_EraseBlock_Return
 *  Rte_Runnable_NvM_EraseBlock_Start
 *  Rte_Runnable_NvM_GetErrorStatus_Return
 *  Rte_Runnable_NvM_GetErrorStatus_Start
 *  Rte_Runnable_NvM_InvalidateNvBlock_Return
 *  Rte_Runnable_NvM_InvalidateNvBlock_Start
 *  Rte_Runnable_NvM_NvM_MainFunction_Return
 *  Rte_Runnable_NvM_NvM_MainFunction_Start
 *  Rte_Runnable_NvM_ReadBlock_Return
 *  Rte_Runnable_NvM_ReadBlock_Start
 *  Rte_Runnable_NvM_SetBlockProtection_Return
 *  Rte_Runnable_NvM_SetBlockProtection_Start
 *  Rte_Runnable_NvM_SetRamBlockStatus_Return
 *  Rte_Runnable_NvM_SetRamBlockStatus_Start
 *  Rte_Runnable_NvM_WriteBlock_Return
 *  Rte_Runnable_NvM_WriteBlock_Start
 *  Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return
 *  Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start
 *  Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return
 *  Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start
 *  Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return
 *  Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start
 *  Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Return
 *  Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Start
 *  Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return
 *  Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start
 *  Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return
 *  Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start
 *  Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return
 *  Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start
 *  Rte_Task_Activate
 *  Rte_Task_Dispatch
 *  Rte_Task_SetEvent
 *  Rte_Task_WaitEvent
 *  Rte_Task_WaitEventRet
 *  Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Return
 *  Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Start
 *  Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Return
 *  Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Start
 *  Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Return
 *  Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Start
 *  Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Return
 *  Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Start
 *  Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Return
 *  Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Start
 *  Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Return
 *  Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Start
 *  Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Return
 *  Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Start
 *  Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Return
 *  Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Start
 *  Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Return
 *  Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Start
 *  Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Return
 *  Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Start
 *
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HOOK_H
# define _RTE_HOOK_H

# include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */

# include "Rte_Type.h"
# include "Rte_Cfg.h"

# ifndef RTE_VFB_TRACE
#  define RTE_VFB_TRACE (0)
# endif

# define RTE_START_SEC_APPL_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if defined (Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Return)
#  undef Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Return(P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Return */

# if defined (Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Start)
#  undef Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Start(P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApAFSController_PpAFSSwitch_ReadChannel_Start */

# if defined (Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Return)
#  undef Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Return(P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Return */

# if defined (Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Start)
#  undef Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Start(P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApAFSController_PpHighBeam_ReadChannel_Start */

# if defined (Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Return)
#  undef Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Return(Dem_EventStatusType EventStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Return */

# if defined (Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Start)
#  undef Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Start(Dem_EventStatusType EventStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApBatteryManager_Event_DTC_0x000002_SetEventStatus_Start */

# if defined (Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Return)
#  undef Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Return(Dem_OperationCycleStateType CycleState); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Return */

# if defined (Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Start)
#  undef Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Start(Dem_OperationCycleStateType CycleState); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApBatteryManager_OpCycle_IgnitionCycle_SetOperationCycleState_Start */

# if defined (Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Return)
#  undef Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Return(P2VAR(IdtDioBatteryLevel, AUTOMATIC, RTE_CTAPBATTERYMANAGER_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Return */

# if defined (Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Start)
#  undef Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Start(P2VAR(IdtDioBatteryLevel, AUTOMATIC, RTE_CTAPBATTERYMANAGER_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApBatteryManager_PpBatteryLevelCddIoHwAb_ReadChannel_Start */

# if defined (Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return */

# if defined (Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start */

# if defined (Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return */

# if defined (Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start */

# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return */

# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start */

# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return */

# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start */

# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return */

# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start)
#  undef Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start */

# if defined (Rte_CallHook_Dcm_Dcm_DcmClearDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_Dcm_DcmClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_Dcm_DcmClearDTC_Return)
#  undef Rte_CallHook_Dcm_Dcm_DcmClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_Dcm_DcmClearDTC_Return(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_Dcm_DcmClearDTC_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_Dcm_DcmClearDTC_Return */

# if defined (Rte_CallHook_Dcm_Dcm_DcmClearDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_Dcm_DcmClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_Dcm_DcmClearDTC_Start)
#  undef Rte_CallHook_Dcm_Dcm_DcmClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_Dcm_DcmClearDTC_Start(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_Dcm_DcmClearDTC_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_Dcm_DcmClearDTC_Start */

# if defined (Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Return)
#  undef Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Return(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Return */

# if defined (Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Start)
#  undef Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Start(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_Dcm_DcmEnableDTCSetting_Start */

# if defined (Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Return)
#  undef Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Return(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Return(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Return */

# if defined (Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Start)
#  undef Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Start(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Start(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dcm_Dcm_DcmGetExtendedDataRecordByDTC_Start */

# if defined (Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Return)
#  undef Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Return(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_DEM_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Return */

# if defined (Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Start)
#  undef Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Start(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_DEM_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dem_CBReadData_BatteryValue_BatteryValue_ReadData_Start */

# if defined (Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return)
#  undef Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_DEM_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return */

# if defined (Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start)
#  undef Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_DEM_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_Dem_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start */

# if defined (Rte_ComHook_sig_AmbientLightBrightness_In_SigRx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_AmbientLightBrightness_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_AmbientLightBrightness_In_SigRx)
#  undef Rte_ComHook_sig_AmbientLightBrightness_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_AmbientLightBrightness_In_SigRx(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_AmbientLightBrightness_In_SigRx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_AmbientLightBrightness_In_SigRx */

# if defined (Rte_ComHook_sig_CurrentSpeedSlider_In_SigRx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_CurrentSpeedSlider_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_CurrentSpeedSlider_In_SigRx)
#  undef Rte_ComHook_sig_CurrentSpeedSlider_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_CurrentSpeedSlider_In_SigRx(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_CurrentSpeedSlider_In_SigRx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_CurrentSpeedSlider_In_SigRx */

# if defined (Rte_ComHook_sig_DoorLock_Out_SigTx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_DoorLock_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_DoorLock_Out_SigTx)
#  undef Rte_ComHook_sig_DoorLock_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_DoorLock_Out_SigTx(P2CONST(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_DoorLock_Out_SigTx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_DoorLock_Out_SigTx */

# if defined (Rte_ComHook_sig_LeftHAngle_Out_SigTx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_LeftHAngle_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_LeftHAngle_Out_SigTx)
#  undef Rte_ComHook_sig_LeftHAngle_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_LeftHAngle_Out_SigTx(P2CONST(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_LeftHAngle_Out_SigTx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_LeftHAngle_Out_SigTx */

# if defined (Rte_ComHook_sig_LeftLightLength_Out_SigTx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_LeftLightLength_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_LeftLightLength_Out_SigTx)
#  undef Rte_ComHook_sig_LeftLightLength_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_LeftLightLength_Out_SigTx(P2CONST(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_LeftLightLength_Out_SigTx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_LeftLightLength_Out_SigTx */

# if defined (Rte_ComHook_sig_RightHAngle_Out_SigTx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_RightHAngle_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_RightHAngle_Out_SigTx)
#  undef Rte_ComHook_sig_RightHAngle_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_RightHAngle_Out_SigTx(P2CONST(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_RightHAngle_Out_SigTx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_RightHAngle_Out_SigTx */

# if defined (Rte_ComHook_sig_RightLightLength_Out_SigTx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_RightLightLength_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_RightLightLength_Out_SigTx)
#  undef Rte_ComHook_sig_RightLightLength_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_RightLightLength_Out_SigTx(P2CONST(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_RightLightLength_Out_SigTx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_RightLightLength_Out_SigTx */

# if defined (Rte_ComHook_sig_SteeringWheelPosition_In_SigRx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_SteeringWheelPosition_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_SteeringWheelPosition_In_SigRx)
#  undef Rte_ComHook_sig_SteeringWheelPosition_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_SteeringWheelPosition_In_SigRx(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_SteeringWheelPosition_In_SigRx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_SteeringWheelPosition_In_SigRx */

# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return */

# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start */

# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return */

# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start */

# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return */

# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start */

# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return */

# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start */

# if defined (Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Return)
#  undef Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Return(P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Return */

# if defined (Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Start)
#  undef Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Start(P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApAFSController_PpAmbientLight_DeAmbientLight_Start */

# if defined (Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Return)
#  undef Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Return(P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Return */

# if defined (Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Start)
#  undef Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Start(P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApAFSController_PpSpeedometer_DeSpeedometer_Start */

# if defined (Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Return)
#  undef Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Return(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Return */

# if defined (Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Start)
#  undef Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Start(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition_Start */

# if defined (Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Return)
#  undef Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Return(P2VAR(uint8, AUTOMATIC, RTE_CTSAAMBIENTLIGHT_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Return */

# if defined (Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Start)
#  undef Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Start(P2VAR(uint8, AUTOMATIC, RTE_CTSAAMBIENTLIGHT_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaAmbientLight_PpAmbientLightIn_DeAmbientLight_Start */

# if defined (Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Return)
#  undef Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Return(P2VAR(uint8, AUTOMATIC, RTE_CTSADOORLOCK_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Return */

# if defined (Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Start)
#  undef Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Start(P2VAR(uint8, AUTOMATIC, RTE_CTSADOORLOCK_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaDoorLock_PpSpeedometerIn_DeSpeedometer_Start */

# if defined (Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Return)
#  undef Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Return(P2CONST(struct Rte_CDS_CtSaFrontlight, AUTOMATIC, RTE_CONST) self, P2VAR(uint8, AUTOMATIC, RTE_CTSAFRONTLIGHT_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Return(self, arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Return */

# if defined (Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Start)
#  undef Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Start(P2CONST(struct Rte_CDS_CtSaFrontlight, AUTOMATIC, RTE_CONST) self, P2VAR(uint8, AUTOMATIC, RTE_CTSAFRONTLIGHT_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Start(self, arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightLength_Start */

# if defined (Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Return)
#  undef Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Return(P2CONST(struct Rte_CDS_CtSaFrontlight, AUTOMATIC, RTE_CONST) self, P2VAR(sint8, AUTOMATIC, RTE_CTSAFRONTLIGHT_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Return(self, arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Return */

# if defined (Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Start)
#  undef Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Start(P2CONST(struct Rte_CDS_CtSaFrontlight, AUTOMATIC, RTE_CONST) self, P2VAR(sint8, AUTOMATIC, RTE_CTSAFRONTLIGHT_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Start(self, arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaFrontlight_PpLightPositionIn_DeLightPosition_Start */

# if defined (Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Return)
#  undef Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Return(P2VAR(uint8, AUTOMATIC, RTE_CTSASPEEDOMETER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Return */

# if defined (Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Start)
#  undef Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Start(P2VAR(uint8, AUTOMATIC, RTE_CTSASPEEDOMETER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer_Start */

# if defined (Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Return)
#  undef Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Return(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTSASTEERINGWHEEL_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Return */

# if defined (Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Start)
#  undef Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Start(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTSASTEERINGWHEEL_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition_Start */

# if defined (Rte_Runnable_BswM_BswM_MainFunction_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_BswM_BswM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_BswM_BswM_MainFunction_Return)
#  undef Rte_Runnable_BswM_BswM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_BswM_BswM_MainFunction_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_BswM_BswM_MainFunction_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_BswM_BswM_MainFunction_Return */

# if defined (Rte_Runnable_BswM_BswM_MainFunction_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_BswM_BswM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_BswM_BswM_MainFunction_Start)
#  undef Rte_Runnable_BswM_BswM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_BswM_BswM_MainFunction_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_BswM_BswM_MainFunction_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_BswM_BswM_MainFunction_Start */

# if defined (Rte_Runnable_ComM_ComM_MainFunction_0_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ComM_MainFunction_0_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ComM_MainFunction_0_Return)
#  undef Rte_Runnable_ComM_ComM_MainFunction_0_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ComM_MainFunction_0_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ComM_MainFunction_0_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ComM_MainFunction_0_Return */

# if defined (Rte_Runnable_ComM_ComM_MainFunction_0_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ComM_MainFunction_0_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ComM_MainFunction_0_Start)
#  undef Rte_Runnable_ComM_ComM_MainFunction_0_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ComM_MainFunction_0_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ComM_MainFunction_0_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ComM_MainFunction_0_Start */

# if defined (Rte_Runnable_ComM_GetCurrentComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetCurrentComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetCurrentComMode_Return)
#  undef Rte_Runnable_ComM_GetCurrentComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetCurrentComMode_Return(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetCurrentComMode_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetCurrentComMode_Return */

# if defined (Rte_Runnable_ComM_GetCurrentComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetCurrentComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetCurrentComMode_Start)
#  undef Rte_Runnable_ComM_GetCurrentComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetCurrentComMode_Start(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetCurrentComMode_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetCurrentComMode_Start */

# if defined (Rte_Runnable_ComM_GetInhibitionStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetInhibitionStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetInhibitionStatus_Return)
#  undef Rte_Runnable_ComM_GetInhibitionStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetInhibitionStatus_Return(NetworkHandleType parg0, P2VAR(ComM_InhibitionStatusType, AUTOMATIC, RTE_COMM_APPL_VAR) Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetInhibitionStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetInhibitionStatus_Return */

# if defined (Rte_Runnable_ComM_GetInhibitionStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetInhibitionStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetInhibitionStatus_Start)
#  undef Rte_Runnable_ComM_GetInhibitionStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetInhibitionStatus_Start(NetworkHandleType parg0, P2VAR(ComM_InhibitionStatusType, AUTOMATIC, RTE_COMM_APPL_VAR) Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetInhibitionStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetInhibitionStatus_Start */

# if defined (Rte_Runnable_ComM_GetMaxComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetMaxComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetMaxComMode_Return)
#  undef Rte_Runnable_ComM_GetMaxComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetMaxComMode_Return(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetMaxComMode_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetMaxComMode_Return */

# if defined (Rte_Runnable_ComM_GetMaxComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetMaxComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetMaxComMode_Start)
#  undef Rte_Runnable_ComM_GetMaxComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetMaxComMode_Start(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetMaxComMode_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetMaxComMode_Start */

# if defined (Rte_Runnable_ComM_GetRequestedComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetRequestedComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetRequestedComMode_Return)
#  undef Rte_Runnable_ComM_GetRequestedComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetRequestedComMode_Return(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetRequestedComMode_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetRequestedComMode_Return */

# if defined (Rte_Runnable_ComM_GetRequestedComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetRequestedComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetRequestedComMode_Start)
#  undef Rte_Runnable_ComM_GetRequestedComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetRequestedComMode_Start(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetRequestedComMode_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetRequestedComMode_Start */

# if defined (Rte_Runnable_ComM_LimitChannelToNoComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_LimitChannelToNoComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_LimitChannelToNoComMode_Return)
#  undef Rte_Runnable_ComM_LimitChannelToNoComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_LimitChannelToNoComMode_Return(NetworkHandleType parg0, boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_LimitChannelToNoComMode_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_LimitChannelToNoComMode_Return */

# if defined (Rte_Runnable_ComM_LimitChannelToNoComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_LimitChannelToNoComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_LimitChannelToNoComMode_Start)
#  undef Rte_Runnable_ComM_LimitChannelToNoComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_LimitChannelToNoComMode_Start(NetworkHandleType parg0, boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_LimitChannelToNoComMode_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_LimitChannelToNoComMode_Start */

# if defined (Rte_Runnable_ComM_LimitECUToNoComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_LimitECUToNoComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_LimitECUToNoComMode_Return)
#  undef Rte_Runnable_ComM_LimitECUToNoComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_LimitECUToNoComMode_Return(boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_LimitECUToNoComMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_LimitECUToNoComMode_Return */

# if defined (Rte_Runnable_ComM_LimitECUToNoComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_LimitECUToNoComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_LimitECUToNoComMode_Start)
#  undef Rte_Runnable_ComM_LimitECUToNoComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_LimitECUToNoComMode_Start(boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_LimitECUToNoComMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_LimitECUToNoComMode_Start */

# if defined (Rte_Runnable_ComM_PreventWakeUp_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_PreventWakeUp_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_PreventWakeUp_Return)
#  undef Rte_Runnable_ComM_PreventWakeUp_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_PreventWakeUp_Return(NetworkHandleType parg0, boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_PreventWakeUp_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_PreventWakeUp_Return */

# if defined (Rte_Runnable_ComM_PreventWakeUp_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_PreventWakeUp_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_PreventWakeUp_Start)
#  undef Rte_Runnable_ComM_PreventWakeUp_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_PreventWakeUp_Start(NetworkHandleType parg0, boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_PreventWakeUp_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_PreventWakeUp_Start */

# if defined (Rte_Runnable_ComM_ReadInhibitCounter_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ReadInhibitCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ReadInhibitCounter_Return)
#  undef Rte_Runnable_ComM_ReadInhibitCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ReadInhibitCounter_Return(P2VAR(uint16, AUTOMATIC, RTE_COMM_APPL_VAR) CounterValue); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ReadInhibitCounter_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ReadInhibitCounter_Return */

# if defined (Rte_Runnable_ComM_ReadInhibitCounter_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ReadInhibitCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ReadInhibitCounter_Start)
#  undef Rte_Runnable_ComM_ReadInhibitCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ReadInhibitCounter_Start(P2VAR(uint16, AUTOMATIC, RTE_COMM_APPL_VAR) CounterValue); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ReadInhibitCounter_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ReadInhibitCounter_Start */

# if defined (Rte_Runnable_ComM_RequestComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_RequestComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_RequestComMode_Return)
#  undef Rte_Runnable_ComM_RequestComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RequestComMode_Return(ComM_UserHandleType parg0, ComM_ModeType ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_RequestComMode_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_RequestComMode_Return */

# if defined (Rte_Runnable_ComM_RequestComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_RequestComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_RequestComMode_Start)
#  undef Rte_Runnable_ComM_RequestComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RequestComMode_Start(ComM_UserHandleType parg0, ComM_ModeType ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_RequestComMode_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_RequestComMode_Start */

# if defined (Rte_Runnable_ComM_ResetInhibitCounter_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ResetInhibitCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ResetInhibitCounter_Return)
#  undef Rte_Runnable_ComM_ResetInhibitCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ResetInhibitCounter_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ResetInhibitCounter_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ResetInhibitCounter_Return */

# if defined (Rte_Runnable_ComM_ResetInhibitCounter_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ResetInhibitCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ResetInhibitCounter_Start)
#  undef Rte_Runnable_ComM_ResetInhibitCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ResetInhibitCounter_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ResetInhibitCounter_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ResetInhibitCounter_Start */

# if defined (Rte_Runnable_ComM_SetECUGroupClassification_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_SetECUGroupClassification_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_SetECUGroupClassification_Return)
#  undef Rte_Runnable_ComM_SetECUGroupClassification_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_SetECUGroupClassification_Return(ComM_InhibitionStatusType Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_SetECUGroupClassification_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_SetECUGroupClassification_Return */

# if defined (Rte_Runnable_ComM_SetECUGroupClassification_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_SetECUGroupClassification_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_SetECUGroupClassification_Start)
#  undef Rte_Runnable_ComM_SetECUGroupClassification_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_SetECUGroupClassification_Start(ComM_InhibitionStatusType Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_SetECUGroupClassification_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_SetECUGroupClassification_Start */

# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Return */

# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead_Start */

# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Return */

# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData_Start */

# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Return */

# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead_Start */

# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Return */

# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData_Start */

# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Return */

# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start)
#  undef Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData_Start */

# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Return)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Return(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Return */

# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Start)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Start(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_Dcm_DcmClearDTC_Start */

# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Return)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Return(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Return */

# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Start)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Start(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_Dcm_DcmEnableDTCSetting_Start */

# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Return)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Return(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Return(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Return */

# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Start)
#  undef Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Start(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Start(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_Dcm_DcmGetExtendedDataRecordByDTC_Start */

# if defined (Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Return)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Return */

# if defined (Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Start)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_RCtApAFSControllerLogic_Start */

# if defined (Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Return)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Return */

# if defined (Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Start)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_RCtApAFSController_Init_Start */

# if defined (Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Return)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Return */

# if defined (Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Start)
#  undef Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApAFSController_RCtApAFSHighBeam_Start */

# if defined (Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Return)
#  undef Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Return(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CTAPBATTERYMANAGER_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Return */

# if defined (Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Start)
#  undef Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Start(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CTAPBATTERYMANAGER_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApBatteryManager_CBReadData_BatteryValue_BatteryValue_ReadData_Start */

# if defined (Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return)
#  undef Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CTAPBATTERYMANAGER_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Return */

# if defined (Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start)
#  undef Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start(P2VAR(DataArray_Type_4, AUTOMATIC, RTE_CTAPBATTERYMANAGER_APPL_VAR) Data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApBatteryManager_CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_Start */

# if defined (Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Return)
#  undef Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Return */

# if defined (Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Start)
#  undef Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApBatteryManager_CtApBatteryManager_Init_Start */

# if defined (Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Return)
#  undef Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Return */

# if defined (Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Start)
#  undef Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApBatteryManager_RCtApBatteryManager_Start */

# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Return)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Return(P2VAR(uint8, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Return */

# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Start)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Start(P2VAR(uint8, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpAFSSwitch_ReadChannel_Start */

# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Return)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Return(P2VAR(IdtDioBatteryLevel, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Return */

# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Start)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Start(P2VAR(IdtDioBatteryLevel, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpBatteryLevel_ReadChannel_Start */

# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Return)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Return(P2VAR(uint8, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Return */

# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Start)
#  undef Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Start(P2VAR(uint8, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtCddIoHwAb_RCtCddIoHwAb_PpHighBeam_ReadChannel_Start */

# if defined (Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Return)
#  undef Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Return */

# if defined (Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Start)
#  undef Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaAmbientLight_RCtSaAmbientLightRead_Start */

# if defined (Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Return)
#  undef Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Return */

# if defined (Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Start)
#  undef Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaDoorLock_RCtSaDoorLock_Start */

# if defined (Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Return)
#  undef Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Return(P2CONST(struct Rte_CDS_CtSaFrontlight, AUTOMATIC, RTE_CONST) self); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Return(self) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Return */

# if defined (Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Start)
#  undef Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Start(P2CONST(struct Rte_CDS_CtSaFrontlight, AUTOMATIC, RTE_CONST) self); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Start(self) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaFrontlight_RCtSaFrontlight_Start */

# if defined (Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Return)
#  undef Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Return */

# if defined (Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Start)
#  undef Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaSpeedometer_RCtSaSpeedometerRead_Start */

# if defined (Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Return)
#  undef Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Return */

# if defined (Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Start)
#  undef Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaSteeringWheel_RCtSaSteeringWheelGetPosition_Start */

# if defined (Rte_Runnable_Dcm_Dcm_MainFunction_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_Dcm_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_Dcm_MainFunction_Return)
#  undef Rte_Runnable_Dcm_Dcm_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_Dcm_MainFunction_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_Dcm_MainFunction_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_Dcm_MainFunction_Return */

# if defined (Rte_Runnable_Dcm_Dcm_MainFunction_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_Dcm_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_Dcm_MainFunction_Start)
#  undef Rte_Runnable_Dcm_Dcm_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_Dcm_MainFunction_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_Dcm_MainFunction_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_Dcm_MainFunction_Start */

# if defined (Rte_Runnable_Dcm_GetActiveProtocol_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetActiveProtocol_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetActiveProtocol_Return)
#  undef Rte_Runnable_Dcm_GetActiveProtocol_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetActiveProtocol_Return(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetActiveProtocol_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetActiveProtocol_Return */

# if defined (Rte_Runnable_Dcm_GetActiveProtocol_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetActiveProtocol_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetActiveProtocol_Start)
#  undef Rte_Runnable_Dcm_GetActiveProtocol_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetActiveProtocol_Start(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetActiveProtocol_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetActiveProtocol_Start */

# if defined (Rte_Runnable_Dcm_GetSecurityLevel_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetSecurityLevel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetSecurityLevel_Return)
#  undef Rte_Runnable_Dcm_GetSecurityLevel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetSecurityLevel_Return(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetSecurityLevel_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetSecurityLevel_Return */

# if defined (Rte_Runnable_Dcm_GetSecurityLevel_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetSecurityLevel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetSecurityLevel_Start)
#  undef Rte_Runnable_Dcm_GetSecurityLevel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetSecurityLevel_Start(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetSecurityLevel_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetSecurityLevel_Start */

# if defined (Rte_Runnable_Dcm_GetSesCtrlType_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetSesCtrlType_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetSesCtrlType_Return)
#  undef Rte_Runnable_Dcm_GetSesCtrlType_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetSesCtrlType_Return(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetSesCtrlType_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetSesCtrlType_Return */

# if defined (Rte_Runnable_Dcm_GetSesCtrlType_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetSesCtrlType_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetSesCtrlType_Start)
#  undef Rte_Runnable_Dcm_GetSesCtrlType_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetSesCtrlType_Start(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetSesCtrlType_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetSesCtrlType_Start */

# if defined (Rte_Runnable_Dcm_ResetToDefaultSession_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_ResetToDefaultSession_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_ResetToDefaultSession_Return)
#  undef Rte_Runnable_Dcm_ResetToDefaultSession_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_ResetToDefaultSession_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_ResetToDefaultSession_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_ResetToDefaultSession_Return */

# if defined (Rte_Runnable_Dcm_ResetToDefaultSession_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_ResetToDefaultSession_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_ResetToDefaultSession_Start)
#  undef Rte_Runnable_Dcm_ResetToDefaultSession_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_ResetToDefaultSession_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_ResetToDefaultSession_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_ResetToDefaultSession_Start */

# if defined (Rte_Runnable_Dcm_SetActiveDiagnostic_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_SetActiveDiagnostic_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_SetActiveDiagnostic_Return)
#  undef Rte_Runnable_Dcm_SetActiveDiagnostic_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_SetActiveDiagnostic_Return(boolean active); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_SetActiveDiagnostic_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_SetActiveDiagnostic_Return */

# if defined (Rte_Runnable_Dcm_SetActiveDiagnostic_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_SetActiveDiagnostic_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_SetActiveDiagnostic_Start)
#  undef Rte_Runnable_Dcm_SetActiveDiagnostic_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_SetActiveDiagnostic_Start(boolean active); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_SetActiveDiagnostic_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_SetActiveDiagnostic_Start */

# if defined (Rte_Runnable_Dem_ClearDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ClearDTC_Return)
#  undef Rte_Runnable_Dem_ClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ClearDTC_Return(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ClearDTC_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ClearDTC_Return */

# if defined (Rte_Runnable_Dem_ClearDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ClearDTC_Start)
#  undef Rte_Runnable_Dem_ClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ClearDTC_Start(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ClearDTC_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ClearDTC_Start */

# if defined (Rte_Runnable_Dem_DcmClearDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmClearDTC_Return)
#  undef Rte_Runnable_Dem_DcmClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmClearDTC_Return(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmClearDTC_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmClearDTC_Return */

# if defined (Rte_Runnable_Dem_DcmClearDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmClearDTC_Start)
#  undef Rte_Runnable_Dem_DcmClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmClearDTC_Start(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmClearDTC_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmClearDTC_Start */

# if defined (Rte_Runnable_Dem_DcmEnableDTCSetting_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmEnableDTCSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmEnableDTCSetting_Return)
#  undef Rte_Runnable_Dem_DcmEnableDTCSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmEnableDTCSetting_Return(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmEnableDTCSetting_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmEnableDTCSetting_Return */

# if defined (Rte_Runnable_Dem_DcmEnableDTCSetting_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmEnableDTCSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmEnableDTCSetting_Start)
#  undef Rte_Runnable_Dem_DcmEnableDTCSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmEnableDTCSetting_Start(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmEnableDTCSetting_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmEnableDTCSetting_Start */

# if defined (Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return)
#  undef Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return */

# if defined (Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start)
#  undef Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start */

# if defined (Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return)
#  undef Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return */

# if defined (Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start)
#  undef Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start */

# if defined (Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return)
#  undef Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return(P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTC, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCFaultDetectionCounter); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return */

# if defined (Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start)
#  undef Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start(P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTC, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCFaultDetectionCounter); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start */

# if defined (Rte_Runnable_Dem_Dem_MainFunction_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_Dem_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_Dem_MainFunction_Return)
#  undef Rte_Runnable_Dem_Dem_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_Dem_MainFunction_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_Dem_MainFunction_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_Dem_MainFunction_Return */

# if defined (Rte_Runnable_Dem_Dem_MainFunction_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_Dem_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_Dem_MainFunction_Start)
#  undef Rte_Runnable_Dem_Dem_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_Dem_MainFunction_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_Dem_MainFunction_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_Dem_MainFunction_Start */

# if defined (Rte_Runnable_Dem_GetDTCOfEvent_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDTCOfEvent_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDTCOfEvent_Return)
#  undef Rte_Runnable_Dem_GetDTCOfEvent_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDTCOfEvent_Return(Dem_EventIdType parg0, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTCOfEvent); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDTCOfEvent_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDTCOfEvent_Return */

# if defined (Rte_Runnable_Dem_GetDTCOfEvent_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDTCOfEvent_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDTCOfEvent_Start)
#  undef Rte_Runnable_Dem_GetDTCOfEvent_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDTCOfEvent_Start(Dem_EventIdType parg0, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTCOfEvent); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDTCOfEvent_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDTCOfEvent_Start */

# if defined (Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return)
#  undef Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return(P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCStatusMask); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return */

# if defined (Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start)
#  undef Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start(P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCStatusMask); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start */

# if defined (Rte_Runnable_Dem_GetDebouncingOfEvent_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDebouncingOfEvent_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDebouncingOfEvent_Return)
#  undef Rte_Runnable_Dem_GetDebouncingOfEvent_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDebouncingOfEvent_Return(Dem_EventIdType parg0, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEM_APPL_VAR) DebouncingState); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDebouncingOfEvent_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDebouncingOfEvent_Return */

# if defined (Rte_Runnable_Dem_GetDebouncingOfEvent_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDebouncingOfEvent_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDebouncingOfEvent_Start)
#  undef Rte_Runnable_Dem_GetDebouncingOfEvent_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDebouncingOfEvent_Start(Dem_EventIdType parg0, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEM_APPL_VAR) DebouncingState); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDebouncingOfEvent_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDebouncingOfEvent_Start */

# if defined (Rte_Runnable_Dem_GetEventEnableCondition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventEnableCondition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventEnableCondition_Return)
#  undef Rte_Runnable_Dem_GetEventEnableCondition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventEnableCondition_Return(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) ConditionFullfilled); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventEnableCondition_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventEnableCondition_Return */

# if defined (Rte_Runnable_Dem_GetEventEnableCondition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventEnableCondition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventEnableCondition_Start)
#  undef Rte_Runnable_Dem_GetEventEnableCondition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventEnableCondition_Start(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) ConditionFullfilled); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventEnableCondition_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventEnableCondition_Start */

# if defined (Rte_Runnable_Dem_GetEventExtendedDataRecord_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventExtendedDataRecord_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventExtendedDataRecord_Return)
#  undef Rte_Runnable_Dem_GetEventExtendedDataRecord_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventExtendedDataRecord_Return(Dem_EventIdType parg0, uint8 RecordNumber, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventExtendedDataRecord_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventExtendedDataRecord_Return */

# if defined (Rte_Runnable_Dem_GetEventExtendedDataRecord_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventExtendedDataRecord_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventExtendedDataRecord_Start)
#  undef Rte_Runnable_Dem_GetEventExtendedDataRecord_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventExtendedDataRecord_Start(Dem_EventIdType parg0, uint8 RecordNumber, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventExtendedDataRecord_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventExtendedDataRecord_Start */

# if defined (Rte_Runnable_Dem_GetEventFailed_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventFailed_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventFailed_Return)
#  undef Rte_Runnable_Dem_GetEventFailed_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventFailed_Return(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventFailed); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventFailed_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventFailed_Return */

# if defined (Rte_Runnable_Dem_GetEventFailed_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventFailed_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventFailed_Start)
#  undef Rte_Runnable_Dem_GetEventFailed_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventFailed_Start(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventFailed); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventFailed_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventFailed_Start */

# if defined (Rte_Runnable_Dem_GetEventFreezeFrameData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventFreezeFrameData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventFreezeFrameData_Return)
#  undef Rte_Runnable_Dem_GetEventFreezeFrameData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventFreezeFrameData_Return(Dem_EventIdType parg0, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventFreezeFrameData_Return(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventFreezeFrameData_Return */

# if defined (Rte_Runnable_Dem_GetEventFreezeFrameData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventFreezeFrameData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventFreezeFrameData_Start)
#  undef Rte_Runnable_Dem_GetEventFreezeFrameData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventFreezeFrameData_Start(Dem_EventIdType parg0, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventFreezeFrameData_Start(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventFreezeFrameData_Start */

# if defined (Rte_Runnable_Dem_GetEventMemoryOverflow_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventMemoryOverflow_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventMemoryOverflow_Return)
#  undef Rte_Runnable_Dem_GetEventMemoryOverflow_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventMemoryOverflow_Return(Dem_DTCOriginType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) OverflowIndication); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventMemoryOverflow_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventMemoryOverflow_Return */

# if defined (Rte_Runnable_Dem_GetEventMemoryOverflow_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventMemoryOverflow_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventMemoryOverflow_Start)
#  undef Rte_Runnable_Dem_GetEventMemoryOverflow_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventMemoryOverflow_Start(Dem_DTCOriginType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) OverflowIndication); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventMemoryOverflow_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventMemoryOverflow_Start */

# if defined (Rte_Runnable_Dem_GetEventStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventStatus_Return)
#  undef Rte_Runnable_Dem_GetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventStatus_Return(Dem_EventIdType parg0, P2VAR(Dem_EventStatusExtendedType, AUTOMATIC, RTE_DEM_APPL_VAR) EventStatusExtended); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventStatus_Return */

# if defined (Rte_Runnable_Dem_GetEventStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventStatus_Start)
#  undef Rte_Runnable_Dem_GetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventStatus_Start(Dem_EventIdType parg0, P2VAR(Dem_EventStatusExtendedType, AUTOMATIC, RTE_DEM_APPL_VAR) EventStatusExtended); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventStatus_Start */

# if defined (Rte_Runnable_Dem_GetEventTested_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventTested_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventTested_Return)
#  undef Rte_Runnable_Dem_GetEventTested_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventTested_Return(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventTested); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventTested_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventTested_Return */

# if defined (Rte_Runnable_Dem_GetEventTested_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventTested_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventTested_Start)
#  undef Rte_Runnable_Dem_GetEventTested_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventTested_Start(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventTested); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventTested_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventTested_Start */

# if defined (Rte_Runnable_Dem_GetFaultDetectionCounter_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetFaultDetectionCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetFaultDetectionCounter_Return)
#  undef Rte_Runnable_Dem_GetFaultDetectionCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetFaultDetectionCounter_Return(Dem_EventIdType parg0, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) FaultDetectionCounter); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetFaultDetectionCounter_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetFaultDetectionCounter_Return */

# if defined (Rte_Runnable_Dem_GetFaultDetectionCounter_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetFaultDetectionCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetFaultDetectionCounter_Start)
#  undef Rte_Runnable_Dem_GetFaultDetectionCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetFaultDetectionCounter_Start(Dem_EventIdType parg0, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) FaultDetectionCounter); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetFaultDetectionCounter_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetFaultDetectionCounter_Start */

# if defined (Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return)
#  undef Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return(Dem_DTCOriginType parg0, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) NumberOfEventMemoryEntries); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return */

# if defined (Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start)
#  undef Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start(Dem_DTCOriginType parg0, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) NumberOfEventMemoryEntries); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start */

# if defined (Rte_Runnable_Dem_PostRunRequested_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_PostRunRequested_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_PostRunRequested_Return)
#  undef Rte_Runnable_Dem_PostRunRequested_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_PostRunRequested_Return(P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) IsRequested); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_PostRunRequested_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_PostRunRequested_Return */

# if defined (Rte_Runnable_Dem_PostRunRequested_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_PostRunRequested_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_PostRunRequested_Start)
#  undef Rte_Runnable_Dem_PostRunRequested_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_PostRunRequested_Start(P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) IsRequested); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_PostRunRequested_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_PostRunRequested_Start */

# if defined (Rte_Runnable_Dem_ResetEventDebounceStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ResetEventDebounceStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ResetEventDebounceStatus_Return)
#  undef Rte_Runnable_Dem_ResetEventDebounceStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ResetEventDebounceStatus_Return(Dem_EventIdType parg0, Dem_DebounceResetStatusType DebounceResetStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ResetEventDebounceStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ResetEventDebounceStatus_Return */

# if defined (Rte_Runnable_Dem_ResetEventDebounceStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ResetEventDebounceStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ResetEventDebounceStatus_Start)
#  undef Rte_Runnable_Dem_ResetEventDebounceStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ResetEventDebounceStatus_Start(Dem_EventIdType parg0, Dem_DebounceResetStatusType DebounceResetStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ResetEventDebounceStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ResetEventDebounceStatus_Start */

# if defined (Rte_Runnable_Dem_ResetEventStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ResetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ResetEventStatus_Return)
#  undef Rte_Runnable_Dem_ResetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ResetEventStatus_Return(Dem_EventIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ResetEventStatus_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ResetEventStatus_Return */

# if defined (Rte_Runnable_Dem_ResetEventStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ResetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ResetEventStatus_Start)
#  undef Rte_Runnable_Dem_ResetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ResetEventStatus_Start(Dem_EventIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ResetEventStatus_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ResetEventStatus_Start */

# if defined (Rte_Runnable_Dem_SetEventStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_SetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_SetEventStatus_Return)
#  undef Rte_Runnable_Dem_SetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_SetEventStatus_Return(Dem_EventIdType parg0, Dem_EventStatusType EventStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_SetEventStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_SetEventStatus_Return */

# if defined (Rte_Runnable_Dem_SetEventStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_SetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_SetEventStatus_Start)
#  undef Rte_Runnable_Dem_SetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_SetEventStatus_Start(Dem_EventIdType parg0, Dem_EventStatusType EventStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_SetEventStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_SetEventStatus_Start */

# if defined (Rte_Runnable_Dem_SetOperationCycleState_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_SetOperationCycleState_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_SetOperationCycleState_Return)
#  undef Rte_Runnable_Dem_SetOperationCycleState_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_SetOperationCycleState_Return(Dem_OperationCycleIdType parg0, Dem_OperationCycleStateType CycleState); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_SetOperationCycleState_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_SetOperationCycleState_Return */

# if defined (Rte_Runnable_Dem_SetOperationCycleState_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_SetOperationCycleState_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_SetOperationCycleState_Start)
#  undef Rte_Runnable_Dem_SetOperationCycleState_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_SetOperationCycleState_Start(Dem_OperationCycleIdType parg0, Dem_OperationCycleStateType CycleState); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_SetOperationCycleState_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_SetOperationCycleState_Start */

# if defined (Rte_Runnable_EcuM_EcuM_MainFunction_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_EcuM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_EcuM_MainFunction_Return)
#  undef Rte_Runnable_EcuM_EcuM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_EcuM_MainFunction_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_EcuM_MainFunction_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_EcuM_MainFunction_Return */

# if defined (Rte_Runnable_EcuM_EcuM_MainFunction_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_EcuM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_EcuM_MainFunction_Start)
#  undef Rte_Runnable_EcuM_EcuM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_EcuM_MainFunction_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_EcuM_MainFunction_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_EcuM_MainFunction_Start */

# if defined (Rte_Runnable_EcuM_GetBootTarget_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetBootTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetBootTarget_Return)
#  undef Rte_Runnable_EcuM_GetBootTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetBootTarget_Return(P2VAR(EcuM_BootTargetType, AUTOMATIC, RTE_ECUM_APPL_VAR) BootTarget); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetBootTarget_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetBootTarget_Return */

# if defined (Rte_Runnable_EcuM_GetBootTarget_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetBootTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetBootTarget_Start)
#  undef Rte_Runnable_EcuM_GetBootTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetBootTarget_Start(P2VAR(EcuM_BootTargetType, AUTOMATIC, RTE_ECUM_APPL_VAR) BootTarget); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetBootTarget_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetBootTarget_Start */

# if defined (Rte_Runnable_EcuM_GetLastShutdownTarget_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetLastShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetLastShutdownTarget_Return)
#  undef Rte_Runnable_EcuM_GetLastShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetLastShutdownTarget_Return(P2VAR(EcuM_StateType, AUTOMATIC, RTE_ECUM_APPL_VAR) target, P2VAR(EcuM_ModeType, AUTOMATIC, RTE_ECUM_APPL_VAR) resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetLastShutdownTarget_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetLastShutdownTarget_Return */

# if defined (Rte_Runnable_EcuM_GetLastShutdownTarget_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetLastShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetLastShutdownTarget_Start)
#  undef Rte_Runnable_EcuM_GetLastShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetLastShutdownTarget_Start(P2VAR(EcuM_StateType, AUTOMATIC, RTE_ECUM_APPL_VAR) target, P2VAR(EcuM_ModeType, AUTOMATIC, RTE_ECUM_APPL_VAR) resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetLastShutdownTarget_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetLastShutdownTarget_Start */

# if defined (Rte_Runnable_EcuM_GetShutdownCause_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetShutdownCause_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetShutdownCause_Return)
#  undef Rte_Runnable_EcuM_GetShutdownCause_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetShutdownCause_Return(P2VAR(EcuM_ShutdownCauseType, AUTOMATIC, RTE_ECUM_APPL_VAR) shutdownCause); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetShutdownCause_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetShutdownCause_Return */

# if defined (Rte_Runnable_EcuM_GetShutdownCause_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetShutdownCause_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetShutdownCause_Start)
#  undef Rte_Runnable_EcuM_GetShutdownCause_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetShutdownCause_Start(P2VAR(EcuM_ShutdownCauseType, AUTOMATIC, RTE_ECUM_APPL_VAR) shutdownCause); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetShutdownCause_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetShutdownCause_Start */

# if defined (Rte_Runnable_EcuM_GetShutdownTarget_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetShutdownTarget_Return)
#  undef Rte_Runnable_EcuM_GetShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetShutdownTarget_Return(P2VAR(EcuM_StateType, AUTOMATIC, RTE_ECUM_APPL_VAR) target, P2VAR(EcuM_ModeType, AUTOMATIC, RTE_ECUM_APPL_VAR) resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetShutdownTarget_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetShutdownTarget_Return */

# if defined (Rte_Runnable_EcuM_GetShutdownTarget_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetShutdownTarget_Start)
#  undef Rte_Runnable_EcuM_GetShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetShutdownTarget_Start(P2VAR(EcuM_StateType, AUTOMATIC, RTE_ECUM_APPL_VAR) target, P2VAR(EcuM_ModeType, AUTOMATIC, RTE_ECUM_APPL_VAR) resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetShutdownTarget_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetShutdownTarget_Start */

# if defined (Rte_Runnable_EcuM_SelectBootTarget_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectBootTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectBootTarget_Return)
#  undef Rte_Runnable_EcuM_SelectBootTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectBootTarget_Return(EcuM_BootTargetType BootTarget); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectBootTarget_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectBootTarget_Return */

# if defined (Rte_Runnable_EcuM_SelectBootTarget_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectBootTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectBootTarget_Start)
#  undef Rte_Runnable_EcuM_SelectBootTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectBootTarget_Start(EcuM_BootTargetType BootTarget); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectBootTarget_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectBootTarget_Start */

# if defined (Rte_Runnable_EcuM_SelectShutdownCause_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectShutdownCause_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectShutdownCause_Return)
#  undef Rte_Runnable_EcuM_SelectShutdownCause_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectShutdownCause_Return(EcuM_ShutdownCauseType shutdownCause); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectShutdownCause_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectShutdownCause_Return */

# if defined (Rte_Runnable_EcuM_SelectShutdownCause_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectShutdownCause_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectShutdownCause_Start)
#  undef Rte_Runnable_EcuM_SelectShutdownCause_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectShutdownCause_Start(EcuM_ShutdownCauseType shutdownCause); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectShutdownCause_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectShutdownCause_Start */

# if defined (Rte_Runnable_EcuM_SelectShutdownTarget_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectShutdownTarget_Return)
#  undef Rte_Runnable_EcuM_SelectShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectShutdownTarget_Return(EcuM_StateType targetState, EcuM_ModeType resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectShutdownTarget_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectShutdownTarget_Return */

# if defined (Rte_Runnable_EcuM_SelectShutdownTarget_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectShutdownTarget_Start)
#  undef Rte_Runnable_EcuM_SelectShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectShutdownTarget_Start(EcuM_StateType targetState, EcuM_ModeType resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectShutdownTarget_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectShutdownTarget_Start */

# if defined (Rte_Runnable_NvM_EraseBlock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_EraseBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_EraseBlock_Return)
#  undef Rte_Runnable_NvM_EraseBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_EraseBlock_Return(NvM_BlockIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_EraseBlock_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_EraseBlock_Return */

# if defined (Rte_Runnable_NvM_EraseBlock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_EraseBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_EraseBlock_Start)
#  undef Rte_Runnable_NvM_EraseBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_EraseBlock_Start(NvM_BlockIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_EraseBlock_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_EraseBlock_Start */

# if defined (Rte_Runnable_NvM_GetErrorStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_GetErrorStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_GetErrorStatus_Return)
#  undef Rte_Runnable_NvM_GetErrorStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_GetErrorStatus_Return(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVM_APPL_VAR) ErrorStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_GetErrorStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_GetErrorStatus_Return */

# if defined (Rte_Runnable_NvM_GetErrorStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_GetErrorStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_GetErrorStatus_Start)
#  undef Rte_Runnable_NvM_GetErrorStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_GetErrorStatus_Start(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVM_APPL_VAR) ErrorStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_GetErrorStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_GetErrorStatus_Start */

# if defined (Rte_Runnable_NvM_InvalidateNvBlock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_InvalidateNvBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_InvalidateNvBlock_Return)
#  undef Rte_Runnable_NvM_InvalidateNvBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_InvalidateNvBlock_Return(NvM_BlockIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_InvalidateNvBlock_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_InvalidateNvBlock_Return */

# if defined (Rte_Runnable_NvM_InvalidateNvBlock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_InvalidateNvBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_InvalidateNvBlock_Start)
#  undef Rte_Runnable_NvM_InvalidateNvBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_InvalidateNvBlock_Start(NvM_BlockIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_InvalidateNvBlock_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_InvalidateNvBlock_Start */

# if defined (Rte_Runnable_NvM_NvM_MainFunction_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_NvM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_NvM_MainFunction_Return)
#  undef Rte_Runnable_NvM_NvM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_NvM_MainFunction_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_NvM_MainFunction_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_NvM_MainFunction_Return */

# if defined (Rte_Runnable_NvM_NvM_MainFunction_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_NvM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_NvM_MainFunction_Start)
#  undef Rte_Runnable_NvM_NvM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_NvM_MainFunction_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_NvM_MainFunction_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_NvM_MainFunction_Start */

# if defined (Rte_Runnable_NvM_ReadBlock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_ReadBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_ReadBlock_Return)
#  undef Rte_Runnable_NvM_ReadBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_ReadBlock_Return(NvM_BlockIdType parg0, dtRef_VOID DstPtr); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_ReadBlock_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_ReadBlock_Return */

# if defined (Rte_Runnable_NvM_ReadBlock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_ReadBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_ReadBlock_Start)
#  undef Rte_Runnable_NvM_ReadBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_ReadBlock_Start(NvM_BlockIdType parg0, dtRef_VOID DstPtr); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_ReadBlock_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_ReadBlock_Start */

# if defined (Rte_Runnable_NvM_SetBlockProtection_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_SetBlockProtection_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_SetBlockProtection_Return)
#  undef Rte_Runnable_NvM_SetBlockProtection_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_SetBlockProtection_Return(NvM_BlockIdType parg0, boolean ProtectionEnabled); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_SetBlockProtection_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_SetBlockProtection_Return */

# if defined (Rte_Runnable_NvM_SetBlockProtection_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_SetBlockProtection_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_SetBlockProtection_Start)
#  undef Rte_Runnable_NvM_SetBlockProtection_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_SetBlockProtection_Start(NvM_BlockIdType parg0, boolean ProtectionEnabled); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_SetBlockProtection_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_SetBlockProtection_Start */

# if defined (Rte_Runnable_NvM_SetRamBlockStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_SetRamBlockStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_SetRamBlockStatus_Return)
#  undef Rte_Runnable_NvM_SetRamBlockStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_SetRamBlockStatus_Return(NvM_BlockIdType parg0, boolean RamBlockStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_SetRamBlockStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_SetRamBlockStatus_Return */

# if defined (Rte_Runnable_NvM_SetRamBlockStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_SetRamBlockStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_SetRamBlockStatus_Start)
#  undef Rte_Runnable_NvM_SetRamBlockStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_SetRamBlockStatus_Start(NvM_BlockIdType parg0, boolean RamBlockStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_SetRamBlockStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_SetRamBlockStatus_Start */

# if defined (Rte_Runnable_NvM_WriteBlock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_WriteBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_WriteBlock_Return)
#  undef Rte_Runnable_NvM_WriteBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_WriteBlock_Return(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_WriteBlock_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_WriteBlock_Return */

# if defined (Rte_Runnable_NvM_WriteBlock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_WriteBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_WriteBlock_Start)
#  undef Rte_Runnable_NvM_WriteBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_WriteBlock_Start(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_WriteBlock_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_WriteBlock_Start */

# if defined (Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return)
#  undef Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return */

# if defined (Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start)
#  undef Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start */

# if defined (Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return)
#  undef Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return */

# if defined (Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start)
#  undef Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start */

# if defined (Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return)
#  undef Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return */

# if defined (Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start)
#  undef Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start */

# if defined (Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Return)
#  undef Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Return */

# if defined (Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Start)
#  undef Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_CtApBatteryManager_PpBaterryManagerMode_Mode_Start */

# if defined (Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return)
#  undef Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return */

# if defined (Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start)
#  undef Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start */

# if defined (Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return)
#  undef Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return */

# if defined (Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start)
#  undef Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start */

# if defined (Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return)
#  undef Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return */

# if defined (Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start)
#  undef Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start */

# if defined (Rte_Task_Activate) && (RTE_VFB_TRACE == 0)
#  undef Rte_Task_Activate /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Task_Activate)
#  undef Rte_Task_Activate /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Task_Activate(TaskType task); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Task_Activate(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Task_Activate */

# if defined (Rte_Task_Dispatch) && (RTE_VFB_TRACE == 0)
#  undef Rte_Task_Dispatch /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Task_Dispatch)
#  undef Rte_Task_Dispatch /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Task_Dispatch(TaskType task); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Task_Dispatch(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Task_Dispatch */

# if defined (Rte_Task_SetEvent) && (RTE_VFB_TRACE == 0)
#  undef Rte_Task_SetEvent /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Task_SetEvent)
#  undef Rte_Task_SetEvent /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Task_SetEvent(TaskType task, EventMaskType ev); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Task_SetEvent(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Task_SetEvent */

# if defined (Rte_Task_WaitEvent) && (RTE_VFB_TRACE == 0)
#  undef Rte_Task_WaitEvent /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Task_WaitEvent)
#  undef Rte_Task_WaitEvent /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Task_WaitEvent(TaskType task, EventMaskType ev); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Task_WaitEvent(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Task_WaitEvent */

# if defined (Rte_Task_WaitEventRet) && (RTE_VFB_TRACE == 0)
#  undef Rte_Task_WaitEventRet /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Task_WaitEventRet)
#  undef Rte_Task_WaitEventRet /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Task_WaitEventRet(TaskType task, EventMaskType ev); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Task_WaitEventRet(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Task_WaitEventRet */

# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Return)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Return(uint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Return */

# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Start)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Start(uint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightLength_Start */

# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Return)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Return(sint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Return */

# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Start)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Start(sint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApAFSController_PpLightPositionLeft_DeLightPosition_Start */

# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Return)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Return(uint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Return */

# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Start)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Start(uint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightLength_Start */

# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Return)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Return(sint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Return */

# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Start)
#  undef Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Start(sint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApAFSController_PpLightPositionRight_DeLightPosition_Start */

# if defined (Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Return)
#  undef Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Return(uint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Return */

# if defined (Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Start)
#  undef Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Start(uint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaAmbientLight_PpAmbientLightOut_DeAmbientLight_Start */

# if defined (Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Return)
#  undef Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Return(sint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Return */

# if defined (Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Start)
#  undef Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Start(sint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaDoorLock_PpDoorLockOut_DeDoorLock_Start */

# if defined (Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Return)
#  undef Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Return(P2CONST(struct Rte_CDS_CtSaFrontlight, AUTOMATIC, RTE_CONST) self, uint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Return(self, arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Return */

# if defined (Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Start)
#  undef Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Start(P2CONST(struct Rte_CDS_CtSaFrontlight, AUTOMATIC, RTE_CONST) self, uint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Start(self, arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightLength_Start */

# if defined (Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Return)
#  undef Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Return(P2CONST(struct Rte_CDS_CtSaFrontlight, AUTOMATIC, RTE_CONST) self, sint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Return(self, arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Return */

# if defined (Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Start)
#  undef Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Start(P2CONST(struct Rte_CDS_CtSaFrontlight, AUTOMATIC, RTE_CONST) self, sint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Start(self, arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaFrontlight_PpLightPositionOut_DeLightPosition_Start */

# if defined (Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Return)
#  undef Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Return(uint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Return */

# if defined (Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Start)
#  undef Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Start(uint8 data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer_Start */

# if defined (Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Return)
#  undef Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Return(IdtDioValueType data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Return */

# if defined (Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Start)
#  undef Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Start(IdtDioValueType data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition_Start */

# define RTE_STOP_SEC_APPL_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* _RTE_HOOK_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
