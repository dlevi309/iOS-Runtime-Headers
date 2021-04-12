/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsDevice.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;
@class NSObject;

@interface MTLTelemetryDevice : MTLToolsDevice {

	MTLTelemetryCommandBufferCounttRec* commandBufferDistribution;
	MTLTelemetryEncoderDistributionRec* encoderDistribution;
	MTLTelemetryStatisticUIRec* parallellRenderEncoderDistribution;
	MTLTelemetryStatisticUIRec* attachmentCount;
	MTLTelemetryStatisticUIRec* textureBindCount;
	MTLTelemetryStatisticUIRec* renderTargetArrayLengthDistribution;
	MTLTelemetryViewportDistributionRec* viewportDistribution;
	MTLTelemetryScissorRectDistributionRec* scissorRectDistribution;
	unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > >* renderTargetMap;
	MTLTelemetryBufferDistributionRec* bufferDistribution;
	unordered_map<MTLPixelFormat, MTLTelemetryTextureDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryTextureDistribution> > >* textureMap;
	MTLTelemetrySamplerDistributionRec* samplerDistribution;
	unordered_map<unsigned int, MTLTelemetryRenderPipelineUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryRenderPipelineUsageRec> > >* renderPipeUsageMap;
	unordered_map<unsigned int, MTLTelemetryRenderFuncUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryRenderFuncUsageRec> > >* renderFuncUsageMap;
	MTLTelemetryRenderPipelineDistributionRec* renderPipelineDistribution;
	unordered_map<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLTelemetryStatisticUIRec> > >* vtxStatDistributionMap;
	unordered_map<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLTelemetryStatisticUIRec> > >* fragStatDistributionMap;
	MTLTelemetryDepthStateDistributionRec* depthStateDistribution;
	MTLTelemetryStencilStateDistributionRec* frontFaceStencilStateDistribution;
	MTLTelemetryStencilStateDistributionRec* backFaceStencilStateDistribution;
	MTLTelemetryStatisticUIRec* depthClipModeClampDistribution;
	unordered_map<unsigned int, MTLTelemetryComputePipelineUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryComputePipelineUsageRec> > >* computePipeUsageMap;
	unordered_map<unsigned int, MTLTelemetryKernelUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryKernelUsageRec> > >* kernelUsageMap;
	MTLTelemetryComputePipelineDistributionRec* computePipelineDistribution;
	unordered_map<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLTelemetryStatisticUIRec> > >* computeStatDistributionMap;
	MTLTelemetryStatisticUIRec* commandBufferDispatchDistribution;
	MTLTelemetryStatisticUIRec* computeEncoderDispatchDistribution;
	MTLTelemetryStatisticUIRec* commandBufferDrawCallDistribution;
	MTLTelemetryStatisticUIRec* renderEncoderDrawCallDistribution;
	MTLTelemetryDrawDistributionRec* drawDistribution;
	MTLTelemetryDispatchDistributionRec* dispatchDistribution;
	unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution> > >* blitMap;
	MTLTelemetryStatisticUIRec* commandBufferBlitDistribution;
	MTLTelemetryStatisticUIRec* blitEncoderBlitDistribution;
	MTLTelemetryStatisticUIRec* commandBufferMemoryBarrierDistribution;
	MTLTelemetryKernelDistributionRec* kernelDistribution;
	MTLTelemetryAnisoClippedCountsRec* anisoClippedCounts;
	NSObject*<OS_dispatch_queue> queue;
	mach_timebase_info timebase;
	double _timerScale;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _isGLMTL;
	MTLTelemetrySupportQueryStatRec* supportQuery;
	NSObject*<OS_os_log> _telemetryLog;
	unsigned long long _startTime;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> telemetryLog;              //@synthesize telemetryLog=_telemetryLog - In the implementation block
@property (assign,nonatomic) unsigned long long startTime;                     //@synthesize startTime=_startTime - In the implementation block
-(void)dealloc;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newCommandQueue;
-(id)newTextureWithDescriptor:(id)arg1 iosurface:(IOSurfaceRef)arg2 plane:(unsigned long long)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(BOOL)supportsFeatureSet:(unsigned long long)arg1 ;
-(id)newSamplerStateWithDescriptor:(id)arg1 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(unsigned long long)startTime;
-(void)setStartTime:(unsigned long long)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg1 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(NSRange)heapTextureSizeAndAlignWithDescriptor:(id)arg1 ;
-(NSRange)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newHeapWithDescriptor:(id)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)supportsTextureSampleCount:(unsigned long long)arg1 ;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(BOOL)enableTelemetry;
-(NSObject*<OS_os_log>)telemetryLog;
-(void)initDistributions;
-(void)setTimerInterval:(double)arg1 ;
-(void)emitTelemetry;
-(void)emitFeatureQueryUsage;
-(id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setGLMode:(BOOL)arg1 ;
-(void)startTimerWithInterval:(double)arg1 ;
@end

