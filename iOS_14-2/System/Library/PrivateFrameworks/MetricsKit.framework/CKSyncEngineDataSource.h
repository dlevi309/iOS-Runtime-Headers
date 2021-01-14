/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@protocol CKSyncEngineDataSource <NSObject>
@optional
-(void)syncEngine:(id)arg1 didSaveRecordZone:(id)arg2;
-(void)syncEngine:(id)arg1 didCompleteModifyRecordsBatch:(id)arg2 withSavedRecords:(id)arg3 deletedRecordIDs:(id)arg4 error:(id)arg5;
-(void)syncEngine:(id)arg1 didDeleteRecordZoneWithID:(id)arg2;
-(void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;
-(void)syncEngine:(id)arg1 failedToDeleteRecordZoneWithID:(id)arg2 error:(id)arg3;
-(id)syncEngine:(id)arg1 nextBatchOfRecordsToModifyWithRecordIDsPendingSave:(id)arg2 recordIDsPendingDelete:(id)arg3;
-(void)syncEngine:(id)arg1 zoneWithIDChanged:(id)arg2;
-(void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;
-(void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;

@required
-(void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;
-(void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;
-(void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;
-(void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;
-(void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
-(id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;
-(void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
-(void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;

@end

