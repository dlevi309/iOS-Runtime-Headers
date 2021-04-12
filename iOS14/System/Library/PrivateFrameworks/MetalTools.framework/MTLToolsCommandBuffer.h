/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandBufferSPI.h>
#import <libobjc.A.dylib/MTLToolsRetainingContainer.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSError;

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI, MTLToolsRetainingContainer> {

	struct {
		unsigned hasCommit : 1;
		unsigned addedCompletedHandler : 1;
		unsigned addedScheduledHandler : 1;
		unsigned padding : 29;
	}  _flags;
	os_unfair_lock_s _retainedObjectsLock;
	os_unfair_lock_s _handlerLock;
	vector<void ()(id<MTLCommandBuffer>), std::__1::allocator<void ()(id<MTLCommandBuffer>)> >* _scheduledHandlers;
	vector<void ()(id<MTLCommandBuffer>), std::__1::allocator<void ()(id<MTLCommandBuffer>)> >* _completedHandlers;
	BOOL _didInvokeHandlers;
	/*^block*/id _perfSampleHandlerBlock;
	BOOL _StatEnabled;
	BOOL _useRetainedObjectsLock;
	NSMutableSet* _retainedObjects;

}

@property (assign) BOOL useRetainedObjectsLock;                                               //@synthesize useRetainedObjectsLock=_useRetainedObjectsLock - In the implementation block
@property (nonatomic,readonly) NSMutableSet * retainedObjects;                                //@synthesize retainedObjects=_retainedObjects - In the implementation block
@property (getter=getListIndex,nonatomic,readonly) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (readonly) unsigned long long globalTraceObjectID; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) BOOL retainedReferences; 
@property (readonly) unsigned long long errorOptions; 
@property (copy) NSString * label; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) id<MTLLogContainer> logs; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long status; 
@property (readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)userDictionary;
-(void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2 ;
-(void)commit;
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)waitUntilCompleted;
-(unsigned long long)getListIndex;
-(id<MTLLogContainer>)logs;
-(double)kernelStartTime;
-(unsigned long long)protectionOptions;
-(BOOL)isProfilingEnabled;
-(void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4 ;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(double)kernelEndTime;
-(void)enqueue;
-(id<MTLCommandQueue>)commandQueue;
-(id)computeCommandEncoderWithDescriptor:(id)arg1 ;
-(void)waitUntilScheduled;
-(void)setProtectionOptions:(unsigned long long)arg1 ;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(id)accelerationStructureCommandEncoder;
-(void)presentDrawable:(id)arg1 ;
-(unsigned long long)errorOptions;
-(void)commitAndHold;
-(id)computeCommandEncoder;
-(BOOL)retainedReferences;
-(void)addSynchronizationNotification:(/*^block*/id)arg1 ;
-(id)blitCommandEncoderWithDescriptor:(id)arg1 ;
-(void)addPurgedHeap:(id)arg1 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)addPurgedResource:(id)arg1 ;
-(NSError *)error;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)resourceStateCommandEncoder;
-(void)executeSynchronizationNotifications:(int)arg1 ;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1 ;
-(void)popDebugGroup;
-(NSDictionary *)profilingResults;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)debugCommandEncoder;
-(void)setResourceGroups:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)dropResourceGroups:(const id*)arg1 count:(unsigned long long)arg2 ;
-(double)GPUStartTime;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(double)GPUEndTime;
-(NSString *)label;
-(BOOL)commitAndWaitUntilSubmitted;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(unsigned long long)status;
-(void)dealloc;
-(BOOL)addRetainedObject:(id)arg1 ;
-(void)invokeScheduledHandlers;
-(void)invokeCompletedHandlers;
-(void)preScheduledHandlers;
-(void)postScheduledHandlers;
-(void)preCompletionHandlers;
-(void)postCompletionHandlers;
-(void)clearRetainedObjects;
-(void)preCommit;
-(id)unwrapMTLRenderPassDescriptor:(id)arg1 ;
-(void)setUseRetainedObjectsLock:(BOOL)arg1 ;
-(id)unwrapMTLComputePassDescriptor:(id)arg1 ;
-(id)unwrapMTLBlitPassDescriptor:(id)arg1 ;
-(id)unwrapMTLResourceStatePassDescriptor:(id)arg1 ;
-(NSMutableSet *)retainedObjects;
-(void)willEncodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 writeableResources:(id)arg3 ;
-(BOOL)useRetainedObjectsLock;
@end

