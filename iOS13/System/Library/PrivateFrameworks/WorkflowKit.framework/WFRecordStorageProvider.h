/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFRecordStorageProvider <NSObject>
@required
-(id)recordWithDescriptor:(id)arg1 error:(id*)arg2;
-(BOOL)saveRecord:(id)arg1 withDescriptor:(id)arg2 error:(id*)arg3;
-(id)recordWithDescriptor:(id)arg1 properties:(id)arg2 error:(id*)arg3;
-(BOOL)reloadRecord:(id)arg1 withDescriptor:(id)arg2 error:(id*)arg3;

@end

