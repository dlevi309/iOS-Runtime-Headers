/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKFetchArchivedRecordsOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)handleChangeSetCompletionForRecordZoneID:(id)arg1 serverChangeToken:(id)arg2 archivedRecordStatus:(long long)arg3 error:(id)arg4 reply:(/*^block*/id)arg5;

@end

