/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsDevice.h>

@interface MTLDebugDevice : MTLToolsDevice {

	MTLSamplerDescriptorHashMap* _argumentBufferSamplers;
	os_unfair_lock_s _referenceTrackingCommandBufferLock;
	unordered_set<MTLDebugCommandBuffer *, std::__1::hash<MTLDebugCommandBuffer *>, std::__1::equal_to<MTLDebugCommandBuffer *>, std::__1::allocator<MTLDebugCommandBuffer *> >* _referenceTrackingCommandBuffers;
	CheckerboardRenderTargetPipelineCache* _checkerboardRTPipelineCache;
	BOOL _storeValidationEnabled;
	BOOL _loadValidationEnabled;

}

@property (readonly) BOOL loadValidationEnabled;               //@synthesize loadValidationEnabled=_loadValidationEnabled - In the implementation block
@property (readonly) BOOL storeValidationEnabled;              //@synthesize storeValidationEnabled=_storeValidationEnabled - In the implementation block
+(BOOL)complainAboutSloppyTextureUsage;
-(id)newEvent;
-(id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id*)arg3 ;
-(id)newSharedEventWithHandle:(id)arg1 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2 ;
-(id)newDynamicLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg1 ;
-(const MTLTargetDeviceArch*)targetDeviceInfo;
-(id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newSharedEventWithMachPort:(unsigned)arg1 ;
-(unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)validateDynamicLibrary:(id)arg1 state:(BOOL)arg2 error:(id*)arg3 ;
-(id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id*)arg3 ;
-(id)newDynamicLibrary:(id)arg1 error:(id*)arg2 ;
-(id)newArgumentEncoderWithArguments:(id)arg1 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newDefaultLibrary;
-(id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newRasterizationRateMapWithDescriptor:(id)arg1 ;
-(unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(id)newSharedTextureWithHandle:(id)arg1 ;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT50*)arg2 error:(id*)arg3 ;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id*)arg3 ;
-(id)newCommandQueue;
-(id)newAccelerationStructureWithSize:(unsigned long long)arg1 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newAccelerationStructureWithDescriptor:(id)arg1 ;
-(id)newSharedEvent;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newDynamicLibraryFromURL:(id)arg1 error:(id*)arg2 ;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT50*)arg2 error:(id*)arg3 ;
-(BOOL)validateDynamicLibraryURL:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_MT109)accelerationStructureSizesWithDescriptor:(id)arg1 ;
-(id)newSharedTextureWithDescriptor:(id)arg1 ;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(BOOL)arg2 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSRange)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newFence;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newTextureWithDescriptor:(id)arg1 iosurface:(IOSurfaceRef)arg2 plane:(unsigned long long)arg3 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)newSamplerStateWithDescriptor:(id)arg1 ;
-(NSRange)heapTextureSizeAndAlignWithDescriptor:(id)arg1 ;
-(id)newHeapWithDescriptor:(id)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg1 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg1 ;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newBufferWithIOSurface:(IOSurfaceRef)arg1 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)notifyExternalReferencesNonZeroOnDealloc:(id)arg1 ;
-(void)validateTraceBuffer:(unsigned long long)arg1 maxBufferCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(void)addReferenceTrackingCommandBuffer:(id)arg1 ;
-(BOOL)loadValidationEnabled;
-(void)removeReferenceTrackingCommandBuffer:(id)arg1 ;
-(id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)validateResourceOptions:(unsigned long long)arg1 isTexture:(BOOL)arg2 isIOSurface:(BOOL)arg3 context:(MTLMessageContext*)arg4 ;
-(void)validateNewBufferArgs:(unsigned long long)arg1 options:(unsigned long long)arg2 context:(MTLMessageContext*)arg3 ;
-(void)validateMemorylessResource:(id)arg1 context:(MTLMessageContext*)arg2 ;
-(void)validateLinkedFunctions:(id)arg1 ;
-(void)notifySamplerStateDeallocated:(id)arg1 ;
-(void)clearRenderEncoder:(id)arg1 writeMask:(unsigned long long)arg2 withCheckerboard:(float*)arg3 ;
-(BOOL)storeValidationEnabled;
@end

