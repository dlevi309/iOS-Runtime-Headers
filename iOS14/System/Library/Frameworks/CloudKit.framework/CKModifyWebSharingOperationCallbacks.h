/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKModifyWebSharingOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleWebSharingRevocationForRecordID:(id)arg1 error:(id)arg2;
-(void)handleWebSharingInitiationForRecordID:(id)arg1 sharingKey:(id)arg2 baseSharingToken:(id)arg3 error:(id)arg4;

@end

