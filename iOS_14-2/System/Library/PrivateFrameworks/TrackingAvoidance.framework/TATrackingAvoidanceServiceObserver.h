/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@protocol TATrackingAvoidanceServiceObserver <NSObject>
@optional
-(void)trackingAvoidanceService:(id)arg1 requestingAdditionalInformation:(id)arg2;
-(void)trackingAvoidanceService:(id)arg1 didUpdateSuspiciousDevices:(id)arg2;
-(void)trackingAvoidanceService:(id)arg1 didStageSuspiciousDevices:(id)arg2;
-(void)visitStateChangedForTrackingAvoidanceService:(id)arg1;

@required
-(void)trackingAvoidanceService:(id)arg1 didFindSuspiciousDevices:(id)arg2;

@end

