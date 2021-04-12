/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKModifyRecordAccessOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleRecordAccessInitiationForRecordID:(id)arg1 accessToken:(id)arg2 referenceIdentifier:(id)arg3 error:(id)arg4;
-(void)handleRecordAccessRevocationForRecordID:(id)arg1 error:(id)arg2;

@end

