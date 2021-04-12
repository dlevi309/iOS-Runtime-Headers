/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandBuffer.h>

@class _MTLCommandEncoder, NSMutableSet;

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer {

	_MTLCommandEncoder* _currentEncoder;
	NSMutableSet* _buffersBoundForWrite;
	NSMutableSet* _texturesBoundForWrite;
	NSMutableSet* _unsignaledResources;
	unique_ptr<ILayerLockingPolicy, std::__1::default_delete<ILayerLockingPolicy> >* _boundForWriteLockingPolicy;
	vector<std::__1::pair<MTLDebugSharedEvent *, unsigned long long>, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> > >* _waitEvents;
	unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple> >* _attachmentSet;
	array<AttachmentDescriptorSimple, 8>* _prevAttachments;
	array<AttachmentDescriptorSimple, 8>* _currAttachments;

}
-(void)dealloc;
-(id)computeCommandEncoder;
-(void)commit;
-(void)waitUntilCompleted;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(void)waitUntilScheduled;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)resourceStateCommandEncoder;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT8*)arg1 capacity:(unsigned long long)arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(SCD_Struct_MT8*)arg2 capacity:(unsigned long long)arg3 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(void)executeSynchronizationNotifications:(int)arg1 ;
-(void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4 ;
-(void)addSynchronizationNotification:(/*^block*/id)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
-(void)trackUseResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)_trackTexture:(id)arg1 ;
-(void)_trackRenderPassAttachmentDescriptor:(id)arg1 ;
-(void)trackUseResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)resourceTrackingRecordAccessesToArguments:(id)arg1 bufferFuncArgsPtr:(SCD_Struct_MT2*)arg2 textureFuncArgsPtr:(SCD_Struct_MT2*)arg3 ;
-(void)trackRenderPassDescriptor:(id)arg1 ;
-(void)onParallelRenderCommanderEndEncoding;
-(void)validateStoreLoadTransition:(id)arg1 atIndex:(unsigned long long)arg2 renderTargetArrayLength:(unsigned long long)arg3 ;
@end

