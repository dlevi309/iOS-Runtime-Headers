/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFCloudKitAsyncOperation.h>

@class WFCloudKitItemRequest, NSArray, CKOperationGroup, CKFetchRecordsOperation, WFCloudKitItemTask;

@interface WFCloudKitResolveReferencesOperation : WFCloudKitAsyncOperation {

	WFCloudKitItemRequest* _request;
	NSArray* _records;
	CKOperationGroup* _operationGroup;
	CKFetchRecordsOperation* _currentOperation;
	WFCloudKitItemTask* _task;

}

@property (nonatomic,__weak,readonly) WFCloudKitItemRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSArray * records;                                     //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) CKOperationGroup * operationGroup;                     //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,retain) CKFetchRecordsOperation * currentOperation;              //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,retain) WFCloudKitItemTask * task;                               //@synthesize task=_task - In the implementation block
-(void)cancel;
-(void)start;
-(CKFetchRecordsOperation *)currentOperation;
-(WFCloudKitItemRequest *)request;
-(WFCloudKitItemTask *)task;
-(void)setTask:(WFCloudKitItemTask *)arg1 ;
-(NSArray *)records;
-(CKOperationGroup *)operationGroup;
-(void)setCurrentOperation:(CKFetchRecordsOperation *)arg1 ;
-(id)initWithRequest:(id)arg1 records:(id)arg2 operationGroup:(id)arg3 task:(id)arg4 ;
@end

