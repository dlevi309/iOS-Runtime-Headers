/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKQueryOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleOperationDidCompleteWithCursor:(id)arg1 metrics:(id)arg2 error:(id)arg3;
-(void)handleQueryDidFetchRecord:(id)arg1;
-(void)handleQueryDidFetchCursor:(id)arg1 reply:(/*^block*/id)arg2;

@end

