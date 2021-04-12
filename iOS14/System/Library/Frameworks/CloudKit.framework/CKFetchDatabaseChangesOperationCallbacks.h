/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKFetchDatabaseChangesOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleChangeForRecordZoneID:(id)arg1;
-(void)handleChangeSetCompletionWithServerChangeToken:(id)arg1 databaseChangesStatus:(long long)arg2 error:(id)arg3 reply:(/*^block*/id)arg4;
-(void)handleDeleteForRecordZoneID:(id)arg1;
-(void)handlePurgeForRecordZoneID:(id)arg1;

@end

