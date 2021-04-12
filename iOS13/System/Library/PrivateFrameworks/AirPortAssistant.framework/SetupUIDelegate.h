/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/


@protocol SetupUIDelegate
@optional
-(void)setupTaskResponseWithResult:(int)arg1 responseDict:(id)arg2 forController:(id)arg3;
-(void)setupRPCResponseWithResult:(int)arg1 rpcSelector:(int)arg2 responseDict:(id)arg3 forController:(id)arg4;
-(void)setupMonitoringMessage:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(void)setupMonitoredSettingChanged:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4;
-(void)setupCompleteWithResult:(int)arg1 baseStationInfo:(id)arg2 forController:(id)arg3;

@end

