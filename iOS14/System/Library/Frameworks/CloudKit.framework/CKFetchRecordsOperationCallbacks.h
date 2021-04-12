/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKFetchRecordsOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)handleAssetDataForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 data:(id)arg4 offset:(unsigned long long)arg5;
-(void)handleFetchForRecordID:(id)arg1 didProgress:(double)arg2;

@end

