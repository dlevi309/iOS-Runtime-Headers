/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKFetchNotificationChangesOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 moreComing:(BOOL)arg2 metrics:(id)arg3 error:(id)arg4;
-(void)handleChangedNotification:(id)arg1;

@end

