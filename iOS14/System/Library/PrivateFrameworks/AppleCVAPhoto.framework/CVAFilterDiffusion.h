/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/ImageSaverRegistrator.h>

@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrarySPI, MTLTexture, MTLBuffer, MTLComputePipelineState, MTLResourceGroupSPI;
@interface CVAFilterDiffusion : ImageSaverRegistrator {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _library;
	id<MTLPipelineLibrarySPI> _pipelineLibrary;
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
-(id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 bufferWidth:(unsigned long long)arg4 bufferHeight:(unsigned long long)arg5 edgeVariance:(float)arg6 stepSize:(float)arg7 error:(id*)arg8 ;
-(void)encodeToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)encodeDavidIterationToCommandBufferInternal:(id)arg1 priorTexture:(id)arg2 confidenceTexture:(id)arg3 sourceTexture:(id)arg4 destinationTexture:(id)arg5 ;
-(void)encodeEdgeLaplacianToCommandBuffer:(id)arg1 colorTexture:(id)arg2 outputLaplacian:(id)arg3 ;
-(void)encodeDiffusionMapLaplacianToCommandBuffer:(id)arg1 diffusionMapTexture:(id)arg2 outputLaplacian:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 colorTexture:(id)arg4 iterations:(unsigned)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 priorTexture:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 diffusionMapTexture:(id)arg5 confidenceTexture:(id)arg6 iterations:(unsigned)arg7 ;
@end

