/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandBuffer.h>

@class _MTLCommandEncoder, MTLToolsObject, NSMutableSet;

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer {

	_MTLCommandEncoder* _currentEncoder;
	unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple> >* _attachmentSet;
	array<AttachmentDescriptorSimple, 8>* _prevAttachments;
	array<AttachmentDescriptorSimple, 8>* _currAttachments;
	os_unfair_lock_s _purgeableObjectsLock;
	unordered_set<id<MTLDebugResourcePurgeable>, std::__1::hash<id<MTLDebugResourcePurgeable> >, std::__1::equal_to<id<MTLDebugResourcePurgeable> >, std::__1::allocator<id<MTLDebugResourcePurgeable> > >* _referencedPurgeableObjects;
	os_unfair_lock_s _retainedObjectsLock;
	unordered_set<MTLToolsObject *, std::__1::hash<MTLToolsObject *>, std::__1::equal_to<MTLToolsObject *>, std::__1::allocator<MTLToolsObject *> >* _externallyRetainedObjects;
	unordered_set<MTLToolsObject *, std::__1::hash<MTLToolsObject *>, std::__1::equal_to<MTLToolsObject *>, std::__1::allocator<MTLToolsObject *> >* _internallyRetainedObjects;
	MTLToolsObject* _referencedDeadObject;
	os_unfair_lock_s _renderTargetAttachmentLock;
	NSMutableSet* _renderTargetAttachments;

}
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg1 ;
-(void)waitUntilCompleted;
-(void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4 ;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(id)computeCommandEncoderWithDescriptor:(id)arg1 ;
-(void)waitUntilScheduled;
-(id)accelerationStructureCommandEncoder;
-(id)computeCommandEncoder;
-(void)addSynchronizationNotification:(/*^block*/id)arg1 ;
-(id)blitCommandEncoderWithDescriptor:(id)arg1 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)resourceStateCommandEncoder;
-(void)executeSynchronizationNotifications:(int)arg1 ;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3 ;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)preCompletionHandlers;
-(void)postCompletionHandlers;
-(void)preCommit;
-(id)unwrapMTLRenderPassDescriptor:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
-(void)addObject:(id)arg1 retained:(BOOL)arg2 purgeable:(BOOL)arg3 ;
-(void)addReferencedObject:(id)arg1 internallyRetained:(BOOL)arg2 ;
-(void)addPurgeableObject:(id)arg1 ;
-(void)lockPurgeableObjects;
-(void)unlockPurgeableObjects;
-(void)removeAllReferencedObjects:(BOOL)arg1 ;
-(void)onParallelRenderCommanderEndEncoding;
-(void)validateStoreLoadTransition:(id)arg1 atIndex:(unsigned long long)arg2 renderTargetArrayLength:(unsigned long long)arg3 ;
-(BOOL)testObjectReferenced:(id)arg1 wasInternallyRetained:(BOOL*)arg2 ;
-(void)addActiveRenderTargets:(id)arg1 ;
-(void)addActiveRenderTarget:(id)arg1 ;
-(BOOL)renderTargetInActiveRenderTargets:(id)arg1 ;
@end

