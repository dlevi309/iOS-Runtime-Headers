/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MPSImageLanczosScale *)scaler;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 commandQueue:(id)arg4 error:(id*)arg5 ;
-(void)encodeHybridDownsamplingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)encodeBilinearScalingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 mode:(long long)arg4 ;
@end

