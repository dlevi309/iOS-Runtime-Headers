/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandQueueSPI.h>

@class MTLToolsPerfCounterMailbox, NSString;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {

	MTLToolsPerfCounterMailbox* _perfSampleMailbox;
	os_unfair_lock_s _perfHandlerLock;
	/*^block*/id _perfSampleHandlerBlock;

}

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
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)requestCounters:(id)arg1 ;
-(BOOL)disableCrossQueueHazardTracking;
-(id)availableCounters;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)getStatOptions;
-(BOOL)isStatEnabled;
-(void)setSubmissionQueue:(id)arg1 ;
-(BOOL)isOpenGLQueue;
-(void)setStatLocations:(unsigned long long)arg1 ;
-(BOOL)skipRender;
-(void)setStatEnabled:(BOOL)arg1 ;
-(void)addPerfSampleHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)commitQueue;
-(void)finish;
-(unsigned long long)qosLevel;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(BOOL)isProfilingEnabled;
-(void)setStatOptions:(unsigned long long)arg1 ;
-(void)setExecutionEnabled:(BOOL)arg1 ;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(void)setSkipRender:(BOOL)arg1 ;
-(void)setBackgroundTrackingPID:(int)arg1 ;
-(BOOL)executionEnabled;
-(void)insertDebugCaptureBoundary;
-(BOOL)commitSynchronously;
-(unsigned long long)maxCommandBufferCount;
-(unsigned long long)getStatLocations;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(int)backgroundTrackingPID;
-(id)getSPIStats;
-(int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(id)getRequestedCounters;
-(id)subdivideCounterList:(id)arg1 ;
-(id)counterInfo;
-(id)commandBuffer;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)getBackgroundGPUPriority;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(unsigned long long)getGPUPriority;
-(void)setLabel:(NSString *)arg1 ;
-(id)commandBufferWithUnretainedReferences;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(NSString *)label;
-(id)commandBufferWithDescriptor:(id)arg1 ;
-(void)dealloc;
-(/*^block*/id)snapshotPerfSampleHandlerAndStatEnabled:(BOOL*)arg1 forCommandBuffer:(id)arg2 ;
@end

