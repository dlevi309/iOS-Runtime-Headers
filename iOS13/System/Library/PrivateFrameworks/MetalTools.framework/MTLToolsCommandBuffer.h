/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandBufferSPI.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, MTLToolsPointerArray, NSString, NSError;

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI> {

	struct {
		unsigned hasCommit : 1;
		unsigned addedCompletedHandler : 1;
		unsigned addedScheduledHandler : 1;
		unsigned padding : 29;
	}  _flags;
	NSMutableSet* _retainedObjects;
	MTLToolsPointerArray* _renderCommandEncoders;
	MTLToolsPointerArray* _computeCommandEncoders;
	MTLToolsPointerArray* _blitCommandEncoders;
	MTLToolsPointerArray* _parallelRenderCommandEncoders;
	MTLToolsPointerArray* _fragmentRenderCommandEncoders;
	MTLToolsPointerArray* _resourceStateCommandEncoders;
	ILayerLockingPolicy* _retainedObjectsLock;

}

@property (assign,nonatomic) ILayerLockingPolicy* retainedObjectsLock;                            //@synthesize retainedObjectsLock=_retainedObjectsLock - In the implementation block
@property (nonatomic,readonly) NSMutableSet * retainedObjects;                                    //@synthesize retainedObjects=_retainedObjects - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * renderCommandEncoders;                      //@synthesize renderCommandEncoders=_renderCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * computeCommandEncoders;                     //@synthesize computeCommandEncoders=_computeCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * blitCommandEncoders;                        //@synthesize blitCommandEncoders=_blitCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * parallelRenderCommandEncoders;              //@synthesize parallelRenderCommandEncoders=_parallelRenderCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * fragmentRenderCommandEncoders;              //@synthesize fragmentRenderCommandEncoders=_fragmentRenderCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * resourceStateCommandEncoders;               //@synthesize resourceStateCommandEncoders=_resourceStateCommandEncoders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) BOOL retainedReferences; 
@property (copy) NSString * label; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long status; 
@property (readonly) NSError * error; 
@property (assign,getter=getListIndex,nonatomic) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (readonly) unsigned long long globalTraceObjectID; 
-(void)dealloc;
-(NSError *)error;
-(unsigned long long)status;
-(id)computeCommandEncoder;
-(void)setLabel:(NSString *)arg1 ;
-(void)commit;
-(void)waitUntilCompleted;
-(id<MTLCommandQueue>)commandQueue;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(id)blitCommandEncoder;
-(NSString *)label;
-(BOOL)retainedReferences;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(void)presentDrawable:(id)arg1 ;
-(void)waitUntilScheduled;
-(double)GPUEndTime;
-(double)GPUStartTime;
-(NSMutableDictionary *)userDictionary;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)enqueue;
-(BOOL)commitAndWaitUntilSubmitted;
-(void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)protectionOptions;
-(unsigned long long)globalTraceObjectID;
-(BOOL)isProfilingEnabled;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)resourceStateCommandEncoder;
-(double)kernelStartTime;
-(double)kernelEndTime;
-(void)addPurgedResource:(id)arg1 ;
-(void)addPurgedHeap:(id)arg1 ;
-(NSDictionary *)profilingResults;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT8*)arg1 capacity:(unsigned long long)arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(id)debugCommandEncoder;
-(id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(void)setProtectionOptions:(unsigned long long)arg1 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(void)setResourceGroups:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)dropResourceGroups:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getListIndex;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)executeSynchronizationNotifications:(int)arg1 ;
-(void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4 ;
-(void)addSynchronizationNotification:(/*^block*/id)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(void)addRetainedObject:(id)arg1 ;
-(void)preScheduledHandlers;
-(void)preCompletionHandlers;
-(void)clearRetainedObjects;
-(void)setRetainedObjectsLock:(ILayerLockingPolicy*)arg1 ;
-(void)postScheduledHandlers;
-(void)postCompletionHandlers;
-(void)preCommit;
-(id)unwrapMTLRenderPassDescriptor:(id)arg1 ;
-(void)willEncodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 writeableResources:(id)arg3 ;
-(NSMutableSet *)retainedObjects;
-(MTLToolsPointerArray *)renderCommandEncoders;
-(MTLToolsPointerArray *)computeCommandEncoders;
-(MTLToolsPointerArray *)blitCommandEncoders;
-(MTLToolsPointerArray *)parallelRenderCommandEncoders;
-(MTLToolsPointerArray *)fragmentRenderCommandEncoders;
-(MTLToolsPointerArray *)resourceStateCommandEncoders;
-(ILayerLockingPolicy*)retainedObjectsLock;
@end

