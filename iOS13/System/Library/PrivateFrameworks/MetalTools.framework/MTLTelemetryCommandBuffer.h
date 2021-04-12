/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)computeCommandEncoder;
-(void)commit;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 ;
-(void)initDistributions;
-(void)mergeDistributions;
@end

