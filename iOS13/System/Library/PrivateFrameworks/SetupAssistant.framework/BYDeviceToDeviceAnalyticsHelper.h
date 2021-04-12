/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@interface BYDeviceToDeviceAnalyticsHelper : NSObject
-(void)postSuccessInfo:(id)arg1 ;
-(id)successInfoWithTransferSize:(unsigned long long)arg1 numberOfFilesTransferred:(unsigned long long)arg2 transferDuration:(double)arg3 restoreDuration:(double)arg4 connectionType:(unsigned long long)arg5 sourceDeviceModel:(id)arg6 sourceDeviceProductVersion:(id)arg7 targetDeviceModel:(id)arg8 targetDeviceProductVersion:(id)arg9 inAppleStore:(BOOL)arg10 ;
-(void)postFailureError:(id)arg1 connectionType:(unsigned long long)arg2 sourceDeviceModel:(id)arg3 sourceDeviceProductVersion:(id)arg4 targetDeviceModel:(id)arg5 targetDeviceProductVersion:(id)arg6 inAppleStore:(BOOL)arg7 ;
@end

