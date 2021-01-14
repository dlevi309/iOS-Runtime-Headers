/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)setCloudOperation:(CKOperation *)arg1 ;
-(CKOperation *)cloudOperation;
@end

