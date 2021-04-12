/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>

@protocol MTLCommandEncoder, MTLCommandQueue, MTLBuffer;
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
	id<MTLBuffer> _progressBuffer;
	unsigned _progressOffset;
	BOOL _creatingProgressEncoder;
	BOOL _needsFrameworkAssistedErrorTracking;
	NSMutableArray* _encoderInfos;
	NSMutableArray* _logs;
	unsigned long long _errorOptions;

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
@property (readonly) NSMutableArray * logs;                                                        //@synthesize logs=_logs - In the implementation block
@property (nonatomic,readonly) double kernelStartTime; 
@property (nonatomic,readonly) double kernelEndTime; 
@property (nonatomic,readonly) double GPUStartTime; 
@property (nonatomic,readonly) double GPUEndTime; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (assign,setter=tatEnabled,getter=isStatEnabled,nonatomic) BOOL StatEnabled;              //@synthesize StatEnabled=_StatEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long numThisCommandBuffer;                              //@synthesize numThisCommandBuffer=_numThisCommandBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long numEncoders;                                       //@synthesize numEncoders=_numEncoders - In the implementation block
@property (getter=getListIndex,nonatomic,readonly) unsigned long long listIndex;                   //@synthesize listIndex=_listIndex - In the implementation block
@property (assign,nonatomic) BOOL ownedByParallelEncoder;                                          //@synthesize ownedByParallelEncoder=_ownedByParallelEncoder - In the implementation block
@property (assign,nonatomic) unsigned long long errorOptions;                                      //@synthesize errorOptions=_errorOptions - In the implementation block
+(void)initialize;
-(NSMutableDictionary *)userDictionary;
-(BOOL)isStatEnabled;
-(void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2 ;
-(void)getDriverEncoderInfoData:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setNumEncoders:(unsigned long long)arg1 ;
-(void)commit;
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg1 ;
-(void)kernelSubmitTime;
-(BOOL)skipRender;
-(void)setStatEnabled:(BOOL)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)setOwnedByParallelEncoder:(BOOL)arg1 ;
-(void)waitUntilCompleted;
-(unsigned long long)getListIndex;
-(NSMutableArray *)logs;
-(double)kernelStartTime;
-(void)initProgressTracking;
-(BOOL)isProfilingEnabled;
-(id)progressTrackingRenderCommandEncoder;
-(void)setCommitted:(BOOL)arg1 ;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4 ;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(double)kernelEndTime;
-(void)enqueue;
-(void)_addRetainedObject:(id)arg1 ;
-(BOOL)synchronousDebugMode;
-(id<MTLCommandQueue>)commandQueue;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3 ;
-(void)setErrorOptions:(unsigned long long)arg1 ;
-(id)computeCommandEncoderWithDescriptor:(id)arg1 ;
-(void)waitUntilScheduled;
-(BOOL)ownedByParallelEncoder;
-(void)didScheduleWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(void)runPerfCounterCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)processEncoderInfos;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(BOOL)isCommitted;
-(id)progressTrackingComputeCommandEncoder;
-(void)setNumThisCommandBuffer:(unsigned long long)arg1 ;
-(unsigned long long)numEncoders;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 ;
-(id)accelerationStructureCommandEncoder;
-(unsigned long long)numThisCommandBuffer;
-(void)presentDrawable:(id)arg1 ;
-(unsigned long long)errorOptions;
-(void)commitAndReset;
-(void)commitAndHold;
-(BOOL)retainedReferences;
-(void)addSynchronizationNotification:(/*^block*/id)arg1 ;
-(id)blitCommandEncoderWithDescriptor:(id)arg1 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(void)didSchedule:(unsigned long long)arg1 error:(id)arg2 ;
-(NSError *)error;
-(void)executeSynchronizationNotifications:(int)arg1 ;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1 ;
-(id)description;
-(void)popDebugGroup;
-(NSDictionary *)profilingResults;
-(double)GPUStartTime;
-(void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(id)progressTrackingBlitCommandEncoder;
-(double)GPUEndTime;
-(BOOL)commitAndWaitUntilSubmitted;
-(unsigned long long)getAndIncrementNumEncoders;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(unsigned long long)status;
-(void)dealloc;
@end

