/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsDevice.h>

@class NSMutableSet;

@interface MTLDebugDevice : MTLToolsDevice {

	BOOL _prevResourceTrackingEnabled;
	NSMutableSet* _buffersAlreadyChecksummedInFrame;
	MTLSamplerDescriptorHashMap* _argumentBufferSamplers;
	BOOL _resourceTrackingEnabled;
	BOOL _resourceTrackingChecksummingEnabled;
	BOOL _resourceTrackingChecksummingForceAll;
	unsigned _frameNum;

}

@property (nonatomic,readonly) BOOL resourceTrackingEnabled;                           //@synthesize resourceTrackingEnabled=_resourceTrackingEnabled - In the implementation block
@property (assign,nonatomic) unsigned frameNum;                                        //@synthesize frameNum=_frameNum - In the implementation block
@property (nonatomic,readonly) BOOL resourceTrackingChecksummingEnabled;               //@synthesize resourceTrackingChecksummingEnabled=_resourceTrackingChecksummingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL resourceTrackingChecksummingForceAll;              //@synthesize resourceTrackingChecksummingForceAll=_resourceTrackingChecksummingForceAll - In the implementation block
+(BOOL)complainAboutSloppyTextureUsage;
-(void)dealloc;
-(id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(BOOL)arg2 ;
-(id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newCommandQueue;
-(id)newTextureWithDescriptor:(id)arg1 iosurface:(IOSurfaceRef)arg2 plane:(unsigned long long)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newSamplerStateWithDescriptor:(id)arg1 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT62*)arg2 error:(id*)arg3 ;
-(id)newLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(id)newDefaultLibrary;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2 ;
-(id)newArgumentEncoderWithArguments:(id)arg1 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg1 ;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT62*)arg2 error:(id*)arg3 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(NSRange)heapTextureSizeAndAlignWithDescriptor:(id)arg1 ;
-(NSRange)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newHeapWithDescriptor:(id)arg1 ;
-(id)newSharedTextureWithDescriptor:(id)arg1 ;
-(id)newSharedTextureWithHandle:(id)arg1 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newRasterizationRateMapWithDescriptor:(id)arg1 ;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newEvent;
-(id)newSharedEvent;
-(id)newSharedEventWithHandle:(id)arg1 ;
-(unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(id)newBufferWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(id)newSharedEventWithMachPort:(unsigned)arg1 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(unsigned)frameNum;
-(void)eventSignaled:(id)arg1 value:(unsigned long long)arg2 ;
-(void)validateTraceBuffer:(unsigned long long)arg1 maxBufferCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(BOOL)resourceTrackingEnabled;
-(BOOL)resourceTrackingChecksummingForceAll;
-(BOOL)resourceTrackingChecksummingEnabled;
-(unsigned)checksumBuffer:(id)arg1 ;
-(void)bufferChecksummedInFrame:(id)arg1 ;
-(id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)validateResourceOptions:(unsigned long long)arg1 isTexture:(BOOL)arg2 isIOSurface:(BOOL)arg3 ;
-(void)validateNewBufferArgs:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)validateMemorylessResource:(id)arg1 ;
-(void)_resourceTrackingChecksummingEndOfFrame;
-(id)_newSharedEventWithParent:(id)arg1 ;
-(void)notifySamplerStateDeallocated:(id)arg1 ;
-(void)resourceTrackingEndOfFrame;
-(BOOL)overrideResourceTrackingEnabled:(BOOL)arg1 ;
-(BOOL)restoreResourceTrackingEnabled;
-(void)setFrameNum:(unsigned)arg1 ;
@end

