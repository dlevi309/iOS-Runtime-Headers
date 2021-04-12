/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


@protocol BCCloudDataSyncManagerDelegate <NSObject>
@optional
-(void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2;

@required
-(id)entityName;
-(void)syncManager:(id)arg1 startSyncToCKWithCompletion:(/*^block*/id)arg2;
-(void)signalSyncToCKForSyncManager:(id)arg1;
-(void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(/*^block*/id)arg3;

@end

