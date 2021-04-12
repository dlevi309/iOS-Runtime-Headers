/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreKit/ASKLoadResourceOperation.h>

@protocol ASKResourceDataConsumer, OS_dispatch_queue;
@class NSURLSessionDataTask, NSObject;

@interface ASKLoadImageResourceOperation : ASKLoadResourceOperation {

	NSURLSessionDataTask* _task;
	id<ASKResourceDataConsumer> _dataConsumer;
	NSObject*<OS_dispatch_queue> _dataConsumerQueue;

}

@property (nonatomic,readonly) NSURLSessionDataTask * task;                                 //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) id<ASKResourceDataConsumer> dataConsumer;                    //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dataConsumerQueue;              //@synthesize dataConsumerQueue=_dataConsumerQueue - In the implementation block
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)URLSession;
+(id)dataConsumerQueue;
-(void)cancel;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)setQueuePriority:(long long)arg1 ;
-(id<ASKResourceDataConsumer>)dataConsumer;
-(NSURLSessionDataTask *)task;
-(void)didFinishTaskWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dataConsumerQueue;
-(id)initWithURLRequest:(id)arg1 URLSession:(id)arg2 dataConsumer:(id)arg3 dataConsumerQueue:(id)arg4 ;
-(id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2 ;
@end

