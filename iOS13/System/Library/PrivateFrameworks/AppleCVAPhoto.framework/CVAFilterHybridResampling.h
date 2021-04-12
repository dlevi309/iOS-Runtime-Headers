/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/ImageSaverRegistrator.h>

@protocol MTLDeviceSPI, MTLTexture, MTLResourceGroupSPI, MTLComputePipelineState;
@class NSString, MPSImageLanczosScale;

@interface CVAFilterHybridResampling : ImageSaverRegistrator {

	id<MTLDeviceSPI> _device;
	id<MTLTexture> _hybridDownsamplingIntermediateTexture;
	id<MTLTexture> _hybridDownsamplingIntermediateR32Texture;
	id<MTLTexture> _hybridDownsamplingIntermediateR16Texture;
	id<MTLTexture> _hybridDownsamplingIntermediateR8Texture;
	id<MTLResourceGroupSPI> _intermediateTextureResourceGroup;
	id<MTLComputePipelineState> _doubleUpsampler;
	id<MTLComputePipelineState> _halfDownSampler;
	id<MTLComputePipelineState> _linearResampler;
	id<MTLComputePipelineState> _doubleUpsamplerOneComponent;
	id<MTLComputePipelineState> _halfDownSamplerOneComponent;
	id<MTLComputePipelineState> _linearResamplerOneComponent;
	NSString* _label;
	MPSImageLanczosScale* _scaler;

}

@property (readonly) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (readonly) MPSImageLanczosScale * scaler;              //@synthesize scaler=_scaler - In the implementation block
+(void)prewarmScaler:(id)arg1 device:(id)arg2 commandBuffer:(id)arg3 ;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 error:(id*)arg4 ;
-(void)encodeHybridDownsamplingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)encodeBilinearScalingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 mode:(long long)arg4 ;
-(MPSImageLanczosScale *)scaler;
@end

