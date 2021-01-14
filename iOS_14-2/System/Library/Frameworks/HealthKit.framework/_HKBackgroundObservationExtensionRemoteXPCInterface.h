/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol _HKBackgroundObservationExtensionRemoteXPCInterface <_HKBackgroundObservationExtensionXPCInterface>
@required
-(void)didReceiveUpdateForSampleType:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)backgroundObservationExtensionTimeWillExpire;
-(void)performCleanup;

@end

