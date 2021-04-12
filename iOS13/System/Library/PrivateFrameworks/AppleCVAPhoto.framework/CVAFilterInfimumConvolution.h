/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <AppleCVAPhoto/ImageSaverRegistrator.h>

@protocol MTLDeviceSPI, MTLLibrary, MTLTexture, MTLComputePipelineState, MTLResourceGroupSPI;
@interface CVAFilterInfimumConvolution : ImageSaverRegistrator {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _library;
	unsigned long long _width;
	unsigned long long _height;
	id<MTLTexture> _tmpBlurHalf;
	id<MTLTexture> _tmpOutHalf[2];
	id<MTLComputePipelineState> _infimumKernel;
	id<MTLComputePipelineState> _infimumConvolutionKernel;
	id<MTLResourceGroupSPI> _tmpTextureGroup;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 bufferWidth:(unsigned long long)arg3 bufferHeight:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)encodeToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 config:(InfimumConvolutionConfigRef)arg4 ;
-(void)encodeInfimumToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 smallSourceTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 smallSourceTexture:(id)arg3 destinationTexture:(id)arg4 orientation:(float)arg5 majorRadius:(float)arg6 minorRadius:(float)arg7 iterations:(unsigned)arg8 ;
@end

