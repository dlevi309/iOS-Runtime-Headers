/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/ImageSaverRegistrator.h>

@protocol MTLDeviceSPI, MTLLibrary, MTLTexture, MTLBuffer, MTLComputePipelineState, MTLResourceGroupSPI;
@interface CVAFilterDiffusion : ImageSaverRegistrator {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _library;
	unsigned long long _width;
	unsigned long long _height;
	float _edgeVariance;
	id<MTLTexture> _laplacian;
	id<MTLTexture> _tmpOut16_0;
	id<MTLTexture> _tmpOut16_1;
	id<MTLTexture> _tmpOut32_0;
	id<MTLTexture> _tmpOut32_1;
	id<MTLBuffer> _davidConfigImmutable;
	id<MTLBuffer> _edgeLaplacianConfigImmutable;
	id<MTLBuffer> _jacobiConfigImmutable;
	id<MTLComputePipelineState> _createEdgeLaplacianKernel;
	id<MTLComputePipelineState> _createDiffusionMapLaplacianKernel;
	id<MTLComputePipelineState> _laplacianJacobiKernel;
	id<MTLComputePipelineState> _laplacianDavidKernel;
	id<MTLResourceGroupSPI> _temporaryTextureGroup;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 bufferWidth:(unsigned long long)arg3 bufferHeight:(unsigned long long)arg4 edgeVariance:(float)arg5 stepSize:(float)arg6 error:(id*)arg7 ;
-(void)encodeToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)encodeDavidIterationToCommandBufferInternal:(id)arg1 priorTexture:(id)arg2 confidenceTexture:(id)arg3 sourceTexture:(id)arg4 destinationTexture:(id)arg5 ;
-(void)encodeEdgeLaplacianToCommandBuffer:(id)arg1 colorTexture:(id)arg2 outputLaplacian:(id)arg3 ;
-(void)encodeDiffusionMapLaplacianToCommandBuffer:(id)arg1 diffusionMapTexture:(id)arg2 outputLaplacian:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 colorTexture:(id)arg4 iterations:(unsigned)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 priorTexture:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 diffusionMapTexture:(id)arg5 confidenceTexture:(id)arg6 iterations:(unsigned)arg7 ;
@end

