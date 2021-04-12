/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class _MTLDevice, NSMutableArray, NSObject, NSString;

@interface _MTLCommandQueue : _MTLObjectWithLabel {

	_MTLDevice* _dev;
	NSMutableArray* _pendingQueue;
	NSMutableArray* _submittedQueue;
	opaque_pthread_mutex_t _pendingQueueLock;
	opaque_pthread_mutex_t _submittedQueueLock;
	NSObject*<OS_dispatch_group> _submittedGroup;
	NSObject*<OS_dispatch_queue> _commandQueueDispatch;
	NSObject*<OS_dispatch_queue> _completionQueueDispatch;
	NSObject*<OS_dispatch_source> _commandQueueEventSource;
	NSObject*<OS_dispatch_semaphore> _commandBufferSemaphore;
	int _backgroundTrackingPID;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	BOOL _profilingEnabled;
	BOOL _StatEnabled;
	unsigned long long _StatOptions;
	unsigned long long _StatLocations;
	Ai _numCommandBuffers;
	/*^block*/id _perfSampleHandlerBlock;
	unsigned long long _listIndex;
	unsigned long long _maxCommandBufferCount;
	unsigned long long _qosLevel;
	NSObject*<OS_dispatch_queue> _commitQueue;
	BOOL _commitSynchronously;
	NSObject*<OS_dispatch_queue> _completionQueue;
	BOOL _disableCrossQueueHazardTracking;
	BOOL _executionEnabled;
	BOOL _skipRender;
	BOOL _openGLQueue;
	NSObject*<OS_dispatch_semaphore> _presentScheduledSemaphore;
	BOOL _forceImmediateSubmissionOnCommitThread;

}

@property (readonly) unsigned long long maxCommandBufferCount;                                                          //@synthesize maxCommandBufferCount=_maxCommandBufferCount - In the implementation block
@property (readonly) unsigned long long qosLevel;                                                                       //@synthesize qosLevel=_qosLevel - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue;                                                          //@synthesize commitQueue=_commitQueue - In the implementation block
@property (readonly) BOOL commitSynchronously;                                                                          //@synthesize commitSynchronously=_commitSynchronously - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue;                                                      //@synthesize completionQueue=_completionQueue - In the implementation block
@property (readonly) BOOL disableCrossQueueHazardTracking;                                                              //@synthesize disableCrossQueueHazardTracking=_disableCrossQueueHazardTracking - In the implementation block
@property (readonly) BOOL isOpenGLQueue;                                                                                //@synthesize openGLQueue=_openGLQueue - In the implementation block
@property (assign) int backgroundTrackingPID;                                                                           //@synthesize backgroundTrackingPID=_backgroundTrackingPID - In the implementation block
@property (readonly) unsigned long long globalTraceObjectID;                                                            //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (assign) BOOL skipRender;                                                                                     //@synthesize skipRender=_skipRender - In the implementation block
@property (assign) BOOL executionEnabled;                                                                               //@synthesize executionEnabled=_executionEnabled - In the implementation block
@property (copy) NSString * label; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled;                                                            //@synthesize profilingEnabled=_profilingEnabled - In the implementation block
@property (assign,setter=tatEnabled,getter=isStatEnabled,nonatomic) BOOL StatEnabled;                                   //@synthesize StatEnabled=_StatEnabled - In the implementation block
@property (assign,setter=tatOptions,getter=getStatOptions,nonatomic) unsigned long long StatOptions;                    //@synthesize StatOptions=_StatOptions - In the implementation block
@property (assign,setter=tatLocations,getter=getStatLocations,nonatomic) unsigned long long StatLocations;              //@synthesize StatLocations=_StatLocations - In the implementation block
@property (assign,nonatomic) unsigned long long numCommandBuffers; 
@property (assign,getter=getListIndex,nonatomic) unsigned long long listIndex;                                          //@synthesize listIndex=_listIndex - In the implementation block
-(int)requestCounters:(id)arg1 ;
-(BOOL)disableCrossQueueHazardTracking;
-(id)initWithDevice:(id)arg1 ;
-(id)availableCounters;
-(unsigned long long)getStatOptions;
-(BOOL)isStatEnabled;
-(void)commitCommandBuffer:(id)arg1 wake:(BOOL)arg2 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setSubmissionQueue:(id)arg1 ;
-(BOOL)isOpenGLQueue;
-(void)setStatLocations:(unsigned long long)arg1 ;
-(BOOL)skipRender;
-(void)setStatEnabled:(BOOL)arg1 ;
-(void)addPerfSampleHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)commitQueue;
-(void)finish;
-(unsigned long long)getListIndex;
-(unsigned long long)qosLevel;
-(void)submitCommandBuffers:(const id*)arg1 count:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(BOOL)isProfilingEnabled;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(void)setStatOptions:(unsigned long long)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(BOOL)submitCommandBuffer:(id)arg1 ;
-(void)setExecutionEnabled:(BOOL)arg1 ;
-(void)enqueueCommandBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2 ;
-(void)setListIndex:(unsigned long long)arg1 ;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(void)setSkipRender:(BOOL)arg1 ;
-(void)completeCommandBuffers:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)setBackgroundTrackingPID:(int)arg1 ;
-(BOOL)_submitAvailableCommandBuffers;
-(BOOL)executionEnabled;
-(void)insertDebugCaptureBoundary;
-(void)commandBufferDidComplete:(id)arg1 startTime:(unsigned long long)arg2 completionTime:(unsigned long long)arg3 error:(id)arg4 ;
-(BOOL)commitSynchronously;
-(unsigned long long)maxCommandBufferCount;
-(unsigned long long)getStatLocations;
-(unsigned long long)numCommandBuffers;
-(int)backgroundTrackingPID;
-(id)description;
-(int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(unsigned long long)getAndIncrementNumCommandBuffers;
-(void)setLabel:(NSString *)arg1 ;
-(id)commandBufferWithDescriptor:(id)arg1 ;
-(void)dealloc;
@end

