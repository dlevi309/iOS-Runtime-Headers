/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@interface HRAnalyticsManager : NSObject {

	 healthStore;
	 queuedEvents;
	 managerQueue;
	 optInDetermined;

}
+(id)shared;
-(id)init;
-(void)postOnboardingFunnelEventWithStep:(long long)arg1 context:(long long)arg2 gatewayUrl:(id)arg3 ;
-(void)submitAndFlushQueuedEvents;
@end

