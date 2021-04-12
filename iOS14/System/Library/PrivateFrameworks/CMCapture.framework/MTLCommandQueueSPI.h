/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol MTLCommandQueueSPI <MTLCommandQueue>
@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosLevel; 
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue; 
@property (readonly) BOOL commitSynchronously; 
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue; 
@property (readonly) BOOL disableCrossQueueHazardTracking; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (readonly) BOOL isOpenGLQueue; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
@optional
-(int)requestCounters:(id)arg1;
-(id)availableCounters;
-(unsigned long long)getStatOptions;
-(BOOL)isStatEnabled;
-(void)setStatLocations:(unsigned long long)arg1;
-(void)setStatEnabled:(BOOL)arg1;
-(void)addPerfSampleHandler:(/*^block*/id)arg1;
-(void)setStatOptions:(unsigned long long)arg1;
-(unsigned long long)getStatLocations;
-(id)getSPIStats;
-(int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
-(id)availableCountersAndDict;
-(id)getRequestedCounters;
-(id)subdivideCounterList:(id)arg1;
-(id)counterInfo;

@required
-(BOOL)disableCrossQueueHazardTracking;
-(void)setCompletionQueue:(id)arg1;
-(void)setSubmissionQueue:(id)arg1;
-(BOOL)isOpenGLQueue;
-(BOOL)skipRender;
-(NSObject*<OS_dispatch_queue>)commitQueue;
-(void)finish;
-(unsigned long long)qosLevel;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(BOOL)isProfilingEnabled;
-(void)setExecutionEnabled:(BOOL)arg1;
-(void)setProfilingEnabled:(BOOL)arg1;
-(void)setSkipRender:(BOOL)arg1;
-(void)setBackgroundTrackingPID:(int)arg1;
-(BOOL)executionEnabled;
-(BOOL)commitSynchronously;
-(unsigned long long)maxCommandBufferCount;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
-(int)backgroundTrackingPID;
-(BOOL)setGPUPriority:(unsigned long long)arg1;
-(unsigned long long)getBackgroundGPUPriority;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1;
-(unsigned long long)getGPUPriority;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;

@end

