/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKFetchRecordChangesOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 metrics:(id)arg4 error:(id)arg5;
-(void)handleChangeSetCompletionWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 reply:(/*^block*/id)arg4;
-(void)handleDeleteForRecordID:(id)arg1;
-(void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;

@end

