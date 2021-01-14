/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKFetchRecordZoneChangesOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleChangeSetCompletionForRecordZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 recordChangesStatus:(long long)arg4 hasPendingArchivedRecords:(BOOL)arg5 error:(id)arg6 reply:(/*^block*/id)arg7;
-(void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)handleDeleteForRecordID:(id)arg1 recordType:(id)arg2;

@end

