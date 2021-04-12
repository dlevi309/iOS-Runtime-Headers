/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSCloudHistoryDataStore
@required
-(void)saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(id)initWithConfiguration:(id)arg1 useManateeContainer:(BOOL)arg2;
-(void)deleteHistoryZoneWithCompletion:(/*^block*/id)arg1;
-(void)fetchRecordsWithServerChangeTokenData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replayPersistedLongLivedSaveOperationWithID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)initializePushNotifications:(/*^block*/id)arg1;
-(void)fetchNumberOfDevicesInSyncCircleWithCompletion:(/*^block*/id)arg1;

@end

