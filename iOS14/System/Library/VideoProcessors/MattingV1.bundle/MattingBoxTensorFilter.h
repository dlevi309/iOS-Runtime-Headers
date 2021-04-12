/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/MattingV1.bundle/MattingV1
*/


@protocol MTLDevice, MTLLibrary, MTLComputePipelineState;
#import <MattingV1/MattingV1-Structs.h>
@class MPSImageBox;

@interface MattingBoxTensorFilter : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	MPSImageBox* _boxfilter;
	unsigned _radius;
	unsigned _depthRadius;
	id<MTLComputePipelineState> _depthFilterSeparableSlidingStacks_arrayKernel;
	id<MTLComputePipelineState> _renormalizeFromMPSImageEdgeModeZeroKernel;

}
+(id)supportedPixelFormats;
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(int)encodeSeparableSlidingStackOnCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(int)encodeOnCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)releaseResources;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(int)allocateResources:(SCD_Struct_Ma6)arg1 ;
@end

