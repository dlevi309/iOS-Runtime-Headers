/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsDevice.h>

@interface MTLCountersDevice : MTLToolsDevice
-(id)newFunctionWithGLIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newDefaultLibrary;
-(id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newCommandQueue;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned long long)arg2 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT50*)arg2 error:(id*)arg3 ;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
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
-(id)newHeapWithDescriptor:(id)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg1 ;
-(id)newBufferWithIOSurface:(IOSurfaceRef)arg1 ;
-(void)dealloc;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

