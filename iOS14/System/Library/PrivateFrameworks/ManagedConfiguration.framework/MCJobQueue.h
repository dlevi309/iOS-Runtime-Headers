/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue, MCJobQueueObserver, OS_dispatch_group;
@class NSObject, NSString;

@interface MCJobQueue : NSObject {

	unsigned _nextJobSequenceNumber;
	NSObject*<OS_dispatch_queue> _executionQueue;
	id<MCJobQueueObserver> _observer;
	NSObject*<OS_dispatch_queue> _jobQueue;
	NSObject*<OS_dispatch_group> _jobGroup;
	NSString* _queueID;
	/*^block*/id _executionQueueAbortCompletionBlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> jobQueue;                    //@synthesize jobQueue=_jobQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> jobGroup;                    //@synthesize jobGroup=_jobGroup - In the implementation block
@property (nonatomic,retain) NSString * queueID;                                       //@synthesize queueID=_queueID - In the implementation block
@property (assign) unsigned nextJobSequenceNumber;                                     //@synthesize nextJobSequenceNumber=_nextJobSequenceNumber - In the implementation block
@property (nonatomic,copy) id executionQueueAbortCompletionBlock;                      //@synthesize executionQueueAbortCompletionBlock=_executionQueueAbortCompletionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
@property (assign,nonatomic,__weak) id<MCJobQueueObserver> observer;                   //@synthesize observer=_observer - In the implementation block
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObserver:(id<MCJobQueueObserver>)arg1 ;
-(id)init;
-(id<MCJobQueueObserver>)observer;
-(NSString *)queueID;
-(NSObject*<OS_dispatch_group>)jobGroup;
-(NSObject*<OS_dispatch_queue>)jobQueue;
-(void)setJobGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setJobQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setExecutionQueueAbortCompletionBlock:(id)arg1 ;
-(id)executionQueueAbortCompletionBlock;
-(void)fromFunction:(const char*)arg1 enqueueJob:(/*^block*/id)arg2 ;
-(void)jobDidFinishFromFunction:(const char*)arg1 ;
-(void)waitForEnqueuedJobsToCompleteCompletionBlock:(/*^block*/id)arg1 ;
-(void)abortEnqueuedJobsCompletionBlock:(/*^block*/id)arg1 ;
-(void)setQueueID:(NSString *)arg1 ;
-(unsigned)nextJobSequenceNumber;
-(void)setNextJobSequenceNumber:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(void)dealloc;
@end

