/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol MTLDeviceSPI, MTLComputePipelineState;
@class MPSImageGaussianPyramid, NSString;

@interface CVAFilterMaskedVariableBlur : NSObject {

	id<MTLDeviceSPI> _device;
	MPSImageGaussianPyramid* _gaussianPyramid;
	id<MTLComputePipelineState> _maskedVariableBlurKernel;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
+(void)prewarmGaussianPyramid:(id)arg1 device:(id)arg2 commandBuffer:(id)arg3 ;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 kernelSize:(int)arg4 error:(id*)arg5 ;
-(void)encodeBlurPyramidInPlaceToCommandBuffer:(id)arg1 inoutTexture:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 mask:(id)arg4 maxBlurRadius:(float)arg5 ;
@end

