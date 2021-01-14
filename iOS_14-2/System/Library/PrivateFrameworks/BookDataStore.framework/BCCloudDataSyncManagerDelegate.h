/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

