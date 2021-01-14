/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)init;
-(NSURLSessionTask *)dataTask;
-(void)setDataTask:(NSURLSessionTask *)arg1 ;
-(void)cancel;
@end

