/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKHealthStoreClientInterface <NSObject>
@required
-(void)clientRemote_unitPreferencesDidUpdate;
-(void)clientRemote_presentAuthorizationWithRequestRecord:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clientRemote_presentAuthorizationWithSession:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clientRemote_conceptIndexManagerDidBecomeQuiescentWithSamplesProcessedCount:(long long)arg1;

@end

