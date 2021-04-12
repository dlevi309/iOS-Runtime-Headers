/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>

@protocol MTLCommandEncoder, MTLCommandQueue;
@class _MTLCommandQueue, NSError, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;

@interface _MTLCommandBuffer : _MTLObjectWithLabel {

	id<MTLCommandEncoder> _currentCommandEncoder;
	_MTLCommandQueue*<MTLCommandQueue> _queue;
	MTLDispatch* _scheduledDispatchList;
	MTLDispatch* _scheduledDispatchListTail;
	MTLDispatch* _completedDispatchList;
	MTLDispatch* _completedDispatchListTail;
	MTLSyncDispatch* _syncDispatchList;
	MTLSyncDispatch* _syncDispatchListTail;
	opaque_pthread_mutex_t _mutex;
	opaque_pthread_cond_t _cond;
	unsigned long long _creationTime;
	unsigned long long _enqueueTime;
	unsigned long long _commitTime;
	unsigned long long _submitToKernelTime;
	unsigned long long _submitToHardwareTime;
	unsigned long long _completionInterruptTime;
	unsigned long long _completionHandlerEnqueueTime;
	unsigned long long _completionHandlerExecutionTime;
	unsigned long long _status;
	NSError* _error;
	BOOL _skipRender;
	BOOL _profilingEnabled;
	BOOL _scheduledCallbacksDone;
	BOOL _completedCallbacksDone;
	BOOL _strongObjectReferences;
	NSDictionary* _profilingResults;
	BOOL _retainedReferences;
	BOOL _synchronousDebugMode;
	NSMutableDictionary* _userDictionary;
	unsigned long long _kernelStartTime;
	unsigned long long _kernelEndTime;
	unsigned long long _gpuStartTime;
	unsigned long long _gpuEndTime;
	unsigned long long _numEncoders;
	unsigned long long _numThisCommandBuffer;
	unsigned long long _listIndex;
	BOOL _ownedByParallelEncoder;
	BOOL _wakeOnCommit;
	NSMutableArray* _retainedObjects;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	BOOL _StatEnabled;
	/*^block*/id _perfSampleHandlerBlock;
	BOOL _hasPresent;

}

@property (readonly) BOOL retainedReferences;                                                      //@synthesize retainedReferences=_retainedReferences - In the implementation block
@property (readonly) BOOL synchronousDebugMode;                                                    //@synthesize synchronousDebugMode=_synchronousDebugMode - In the implementation block
@property (readonly) id<MTLCommandQueue> commandQueue;                                             //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long status;                                                    //@synthesize status=_status - In the implementation block
@property (copy) NSString * label; 
@property (readonly) NSError * error; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (readonly) unsigned long long globalTraceObjectID;                                       //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (nonatomic,readonly) double kernelStartTime; 
@property (nonatomic,readonly) double kernelEndTime; 
@property (nonatomic,readonly) double GPUStartTime; 
@property (nonatomic,readonly) double GPUEndTime; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (assign,setter=tatEnabled,getter=isStatEnabled,nonatomic) BOOL StatEnabled;              //@synthesize StatEnabled=_StatEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long numThisCommandBuffer;                              //@synthesize numThisCommandBuffer=_numThisCommandBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long numEncoders;                                       //@synthesize numEncoders=_numEncoders - In the implementation block
@property (assign,getter=getListIndex,nonatomic) unsigned long long listIndex;                     //@synthesize listIndex=_listIndex - In the implementation block
@property (assign,nonatomic) BOOL ownedByParallelEncoder;                                          //@synthesize ownedByParallelEncoder=_ownedByParallelEncoder - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)description;
-(NSError *)error;
-(unsigned long long)status;
-(void)commit;
-(void)waitUntilCompleted;
-(id<MTLCommandQueue>)commandQueue;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(BOOL)retainedReferences;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(void)presentDrawable:(id)arg1 ;
-(void)waitUntilScheduled;
-(double)GPUEndTime;
-(double)GPUStartTime;
-(NSMutableDictionary *)userDictionary;
-(void)setStatEnabled:(BOOL)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)setCommitted:(BOOL)arg1 ;
-(BOOL)isCommitted;
-(void)enqueue;
-(void)setListIndex:(unsigned long long)arg1 ;
-(BOOL)commitAndWaitUntilSubmitted;
-(unsigned long long)globalTraceObjectID;
-(BOOL)skipRender;
-(BOOL)isProfilingEnabled;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(BOOL)isStatEnabled;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(double)kernelStartTime;
-(double)kernelEndTime;
-(NSDictionary *)profilingResults;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1 ;
-(void)commitAndHold;
-(unsigned long long)getListIndex;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3 ;
-(void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(void)commitAndReset;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(void)_addRetainedObject:(id)arg1 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 ;
-(unsigned long long)getAndIncrementNumEncoders;
-(void)setOwnedByParallelEncoder:(BOOL)arg1 ;
-(void)setNumEncoders:(unsigned long long)arg1 ;
-(unsigned long long)numThisCommandBuffer;
-(void)setNumThisCommandBuffer:(unsigned long long)arg1 ;
-(void)didScheduleWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(void)kernelSubmitTime;
-(void)executeSynchronizationNotifications:(int)arg1 ;
-(void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4 ;
-(void)didSchedule:(unsigned long long)arg1 error:(id)arg2 ;
-(void)runPerfCounterCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)addSynchronizationNotification:(/*^block*/id)arg1 ;
-(BOOL)synchronousDebugMode;
-(unsigned long long)numEncoders;
-(BOOL)ownedByParallelEncoder;
@end

