/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKDataCollectorClientInterface
@required
-(void)clientRemote_collectionConfigurationDidChange:(id)arg1;
-(void)clientRemote_finishedPersistenceForBatch:(id)arg1 error:(id)arg2;
-(void)clientRemote_receivedBatch:(id)arg1 error:(id)arg2;
-(void)clientRemote_beginCollectionWithConfiguration:(id)arg1 lastPersistedDatum:(id)arg2 registrationUUID:(id)arg3;
-(void)clientRemote_synchronizeWithCompletion:(/*^block*/id)arg1;
-(void)clientRemote_collectThroughDate:(id)arg1 completion:(/*^block*/id)arg2;

@end

