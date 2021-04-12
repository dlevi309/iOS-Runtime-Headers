/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

