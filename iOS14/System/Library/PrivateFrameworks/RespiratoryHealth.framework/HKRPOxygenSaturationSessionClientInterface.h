/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/


@protocol HKRPOxygenSaturationSessionClientInterface <NSObject>
@required
-(void)clientRemote_didSendFeedback:(unsigned long long)arg1;
-(void)clientRemote_didStartWithStartTime:(double)arg1 expectedDuration:(double)arg2;
-(void)clientRemote_didEndWithReason:(long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5 error:(id)arg6;

@end

