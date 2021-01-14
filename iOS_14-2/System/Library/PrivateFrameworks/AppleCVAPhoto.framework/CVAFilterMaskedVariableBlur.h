/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 commandQueue:(id)arg4 kernelSize:(int)arg5 error:(id*)arg6 ;
-(void)encodeBlurPyramidInPlaceToCommandBuffer:(id)arg1 inoutTexture:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 mask:(id)arg4 maxBlurRadius:(float)arg5 ;
@end

