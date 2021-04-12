/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/


@protocol UISApplicationStateXPCServerInterface <NSObject>
@required
-(oneway void)setBadgeValue:(id)arg1;
-(oneway void)setUsesBackgroundNetwork:(id)arg1;
-(oneway void)setMinimumBackgroundFetchInterval:(id)arg1;
-(oneway void)setNextWakeIntervalSinceReferenceDate:(id)arg1;
-(void)badgeValueWithCompletion:(/*^block*/id)arg1;
-(void)usesBackgroundNetworkWithCompletion:(/*^block*/id)arg1;
-(void)nextWakeIntervalSinceReferenceDateWithCompletion:(/*^block*/id)arg1;

@end

