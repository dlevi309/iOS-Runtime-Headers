/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandBuffer.h>

@class MTLTelemetryDevice;

@interface MTLTelemetryCommandBuffer : MTLToolsCommandBuffer {

	MTLTelemetryEncoderCountRec* encoderCount;
	MTLTelemetryStatisticUIRec* attachmentCount;
	MTLTelemetryStatisticUIRec* textureBindCount;
	MTLTelemetryStatisticUIRec* parallellRenderEncoderDistribution;
	MTLTelemetryStatisticUIRec* renderTargetArrayLengthDistribution;
	MTLTelemetryViewportDistributionRec* viewportDistribution;
	MTLTelemetryScissorRectDistributionRec* scissorRectDistribution;
	MTLTelemetryDrawDistributionRec* drawDistribution;
	MTLTelemetryDispatchDistributionRec* dispatchDistribution;
	unsigned cbDraws;
	unsigned cbDispatches;
	unsigned cbBlits;
	unsigned cbMemoryBarriers;
	MTLTelemetryStatisticUIRec* renderEncoderDrawCallDistribution;
	MTLTelemetryStatisticUIRec* computeEncoderDispatchDistribution;
	MTLTelemetryStatisticUIRec* blitEncoderBlitDistribution;
	unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > >* renderTargetMap;
	unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution> > >* blitMap;
	MTLTelemetryAnisoClippedCountsRec* anisoClippedCounts;
	unsigned depthClipModeClampCount;
	MTLTelemetryDevice* _telemetryDevice;
	MTLTelemetryKernelStateRec _initKernelState;

}
-(id)computeCommandEncoderWithDescriptor:(id)arg1 ;
-(id)computeCommandEncoder;
-(id)blitCommandEncoderWithDescriptor:(id)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(void)dealloc;
-(void)postCompletionHandlers;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
-(void)initDistributions;
-(void)mergeDistributions;
@end

