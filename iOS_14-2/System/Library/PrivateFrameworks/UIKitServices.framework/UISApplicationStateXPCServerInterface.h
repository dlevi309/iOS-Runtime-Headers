/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/


@protocol UISApplicationStateXPCServerInterface <NSObject>
@required
-(oneway void)setBadgeValue:(id)arg1;
-(oneway void)setUsesBackgroundNetwork:(id)arg1;
-(void)usesBackgroundNetworkWithCompletion:(/*^block*/id)arg1;
-(void)nextWakeIntervalSinceReferenceDateWithCompletion:(/*^block*/id)arg1;
-(void)badgeValueWithCompletion:(/*^block*/id)arg1;
-(oneway void)setMinimumBackgroundFetchInterval:(id)arg1;
-(oneway void)setNextWakeIntervalSinceReferenceDate:(id)arg1;

@end

