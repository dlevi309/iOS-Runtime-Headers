/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@interface HRAnalyticsManager : NSObject {

	 healthStore;
	 conceptStore;
	 queuedEvents;
	 managerQueue;
	 optInDetermined;

}
+(id)shared;
-(id)init;
-(void)postUserInteractionEventWithType:(long long)arg1 context:(long long)arg2 action:(long long)arg3 category:(id)arg4 conceptIdentifier:(id)arg5 ;
-(void)postOnboardingFunnelEventWithStep:(long long)arg1 context:(long long)arg2 gatewayUrl:(id)arg3 ;
-(void)postPrivacyInteractionEventWithType:(long long)arg1 context:(long long)arg2 action:(BOOL)arg3 ;
-(void)submitAndFlushQueuedEvents;
@end

