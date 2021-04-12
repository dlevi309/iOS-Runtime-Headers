/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKHealthStoreClientInterface <NSObject>
@required
-(void)clientRemote_presentAuthorizationWithRequestRecord:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clientRemote_presentAuthorizationWithSession:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clientRemote_unitPreferencesDidUpdate;
-(void)clientRemote_conceptIndexManagerDidBecomeQuiescentWithSamplesProcessedCount:(long long)arg1;

@end

