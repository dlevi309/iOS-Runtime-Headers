/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandQueueSPI.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {

	MTLToolsPointerArray* _commandBuffers;

}

@property (nonatomic,readonly) MTLToolsPointerArray * commandBuffers;                               //@synthesize commandBuffers=_commandBuffers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosLevel; 
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue; 
@property (readonly) BOOL commitSynchronously; 
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue; 
@property (readonly) BOOL disableCrossQueueHazardTracking; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (assign) BOOL isOpenGLQueue; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
-(void)dealloc;
-(void)finish;
-(void)setLabel:(NSString *)arg1 ;
-(id)commandBuffer;
-(NSString *)label;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(id)commandBufferWithUnretainedReferences;
-(void)addPerfSampleHandler:(/*^block*/id)arg1 ;
-(void)setStatEnabled:(BOOL)arg1 ;
-(void)setStatLocations:(unsigned long long)arg1 ;
-(void)setStatOptions:(unsigned long long)arg1 ;
-(int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSubmissionQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)insertDebugCaptureBoundary;
-(unsigned long long)getGPUPriority;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(unsigned long long)getBackgroundGPUPriority;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(int)backgroundTrackingPID;
-(void)setBackgroundTrackingPID:(int)arg1 ;
-(unsigned long long)maxCommandBufferCount;
-(unsigned long long)qosLevel;
-(NSObject*<OS_dispatch_queue>)commitQueue;
-(BOOL)commitSynchronously;
-(BOOL)disableCrossQueueHazardTracking;
-(BOOL)skipRender;
-(void)setSkipRender:(BOOL)arg1 ;
-(BOOL)executionEnabled;
-(void)setExecutionEnabled:(BOOL)arg1 ;
-(BOOL)isOpenGLQueue;
-(void)setIsOpenGLQueue:(BOOL)arg1 ;
-(BOOL)isProfilingEnabled;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(id)availableCounters;
-(int)requestCounters:(id)arg1 ;
-(id)getRequestedCounters;
-(id)subdivideCounterList:(id)arg1 ;
-(id)counterInfo;
-(BOOL)isStatEnabled;
-(unsigned long long)getStatOptions;
-(unsigned long long)getStatLocations;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 ;
-(MTLToolsPointerArray *)commandBuffers;
@end

