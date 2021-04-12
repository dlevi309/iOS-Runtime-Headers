/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFCloudKitTask.h>

@class NSOperationQueue, CKOperation, NSError;

@interface WFCloudKitItemTask : WFCloudKitTask {

	NSOperationQueue* _operationQueue;
	CKOperation* _cloudOperation;
	NSError* _error;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) CKOperation * cloudOperation;                   //@synthesize cloudOperation=_cloudOperation - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setCloudOperation:(CKOperation *)arg1 ;
-(CKOperation *)cloudOperation;
@end

