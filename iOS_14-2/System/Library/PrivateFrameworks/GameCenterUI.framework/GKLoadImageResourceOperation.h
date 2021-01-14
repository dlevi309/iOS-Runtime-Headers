/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKLoadResourceOperation.h>

@protocol GKResourceDataConsumer, OS_dispatch_queue;
@class NSURLSessionDataTask, NSObject;

@interface GKLoadImageResourceOperation : GKLoadResourceOperation {

	NSURLSessionDataTask* _task;
	id<GKResourceDataConsumer> _dataConsumer;
	NSObject*<OS_dispatch_queue> _dataConsumerQueue;

}

@property (nonatomic,readonly) NSURLSessionDataTask * task;                                 //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) id<GKResourceDataConsumer> dataConsumer;                     //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dataConsumerQueue;              //@synthesize dataConsumerQueue=_dataConsumerQueue - In the implementation block
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)dataConsumerQueue;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)URLSession;
-(void)setQueuePriority:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataConsumerQueue;
-(NSURLSessionDataTask *)task;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2 ;
-(id)initWithURLRequest:(id)arg1 URLSession:(id)arg2 dataConsumer:(id)arg3 dataConsumerQueue:(id)arg4 ;
-(void)didFinishTaskWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(BOOL)isExecuting;
-(void)cancel;
-(id<GKResourceDataConsumer>)dataConsumer;
@end

