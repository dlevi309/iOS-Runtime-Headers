/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLComputePipelineState;
@interface DenoiseFusePipelineShaders : NSObject {

	id<MTLComputePipelineState> _fillTexturePaddedArea;
	id<MTLComputePipelineState> _fillTexturePaddedArea10BitPacked_Luma;
	id<MTLComputePipelineState> _fillTexturePaddedArea10BitPacked_Chroma;
	id<MTLComputePipelineState> _redFaceFix;
	id<MTLComputePipelineState> _kernelPack10BitY;
	id<MTLComputePipelineState> _kernelPack10BitCbCr;
	id<MTLComputePipelineState> _copyTexture;
	id<MTLComputePipelineState> _pickRandomSamples;
	id<MTLComputePipelineState> _adjustEvmPyramidColor;
	id<MTLComputePipelineState> _convertColor;

}
-(id)initWithMetal:(id)arg1 ;
@end

