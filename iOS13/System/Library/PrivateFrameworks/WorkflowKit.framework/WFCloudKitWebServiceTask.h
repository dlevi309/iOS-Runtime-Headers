/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFCloudKitTask.h>

@class NSURLSessionTask, NSOperationQueue;

@interface WFCloudKitWebServiceTask : WFCloudKitTask {

	NSURLSessionTask* _dataTask;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSURLSessionTask * dataTask;                    //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)init;
-(void)cancel;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSURLSessionTask *)dataTask;
-(void)setDataTask:(NSURLSessionTask *)arg1 ;
@end

