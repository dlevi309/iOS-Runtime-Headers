/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<MCJobQueueObserver>)observer;
-(void)setObserver:(id<MCJobQueueObserver>)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(NSObject*<OS_dispatch_group>)jobGroup;
-(NSObject*<OS_dispatch_queue>)jobQueue;
-(id)executionQueueAbortCompletionBlock;
-(void)setExecutionQueueAbortCompletionBlock:(id)arg1 ;
-(void)fromFunction:(const char*)arg1 enqueueJob:(/*^block*/id)arg2 ;
-(void)jobDidFinishFromFunction:(const char*)arg1 ;
-(void)waitForEnqueuedJobsToCompleteCompletionBlock:(/*^block*/id)arg1 ;
-(void)abortEnqueuedJobsCompletionBlock:(/*^block*/id)arg1 ;
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setJobQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setJobGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSString *)queueID;
-(void)setQueueID:(NSString *)arg1 ;
-(unsigned)nextJobSequenceNumber;
-(void)setNextJobSequenceNumber:(unsigned)arg1 ;
@end

