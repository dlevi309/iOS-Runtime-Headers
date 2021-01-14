/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WFCloudKitItemTask *)task;
-(NSArray *)records;
-(void)start;
-(void)setTask:(WFCloudKitItemTask *)arg1 ;
-(WFCloudKitItemRequest *)request;
-(CKOperationGroup *)operationGroup;
-(CKFetchRecordsOperation *)currentOperation;
-(void)cancel;
-(void)setCurrentOperation:(CKFetchRecordsOperation *)arg1 ;
-(id)initWithRequest:(id)arg1 records:(id)arg2 operationGroup:(id)arg3 task:(id)arg4 ;
@end

