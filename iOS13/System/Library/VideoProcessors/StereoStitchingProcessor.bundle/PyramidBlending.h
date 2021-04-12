/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLBuffer, MTLTexture, MTLComputePipelineState;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities;

@interface PyramidBlending : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _gpuUtilities;
	unsigned _maximumSupportedExtendedImagesWidth;
	unsigned _maximumSupportedExtendedImagesHeight;
	unsigned _maximumSupportedInputImageWidth;
	unsigned _maximumSupportedInputImageHeight;
	unsigned _maximumSupportedAlignedWorkAreaWidth;
	unsigned _maximumSupportedAlignedWorkAreaHeight;
	unsigned _maximumSupportedTransitionZoneSizeLog;
	unsigned _currentExtendedImageWidth;
	unsigned _currentExtendedImageHeight;
	unsigned _currentAlignedAreaWidth;
	unsigned _currentAlignedAreaHeight;
	SCD_Struct_Li0 _seamRectangleInAlignedSpace;
	int _octaves;
	id<MTLBuffer> _sharedWorkBuffer;
	unsigned long long _sharedWorkBufferOffset;
	BOOL _texturesOnSharedWorkBufferAssigned;
	SCD_Struct_Py23 _restoreImageParameters;
	id<MTLTexture> _laplacianPyr[2][8][2];
	unsigned long long _contrastMatchingWorkBufferOffset;
	id<MTLComputePipelineState> _kernel_bilinearDownscale;
	id<MTLComputePipelineState> _kernel_bilinearDownscaleZeroChroma;
	id<MTLComputePipelineState> _kernel_laplacianUpscale;
	id<MTLComputePipelineState> _kernel_copyAndPadAndDownscaleTexture;
	id<MTLComputePipelineState> _kernel_downsampleOctave0;
	id<MTLComputePipelineState> _kernel_downsampleOctaveN;
	id<MTLComputePipelineState> _kernel_computeContrastGain;
	id<MTLComputePipelineState> _kernel_contrastMatchingFinalizeLumaOnly;
	id<MTLComputePipelineState> _kernel_contrastMatchingFinalize;
	id<MTLComputePipelineState> _kernel_blendPyramidLevel;
	id<MTLComputePipelineState> _kernel_recoverLevel;
	id<MTLComputePipelineState> _kernel_restoreImageInPlace;
	[9 _pyrDimensions];

}
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)setSharedMetalBuffer:(id)arg1 bufferOffset:(unsigned long long)arg2 ;
-(int)setMaximumsAndComputeSizeOfSharedMetalBuffer:(unsigned)arg1 maximumSupportedExtendedImageHeight:(unsigned)arg2 maximumSupportedInputImageWidth:(unsigned)arg3 maximumSupportedInputImageHeight:(unsigned)arg4 maximumSupportedTransitionZoneSizeLog:(unsigned)arg5 sharedMetalBufferSize:(unsigned long long*)arg6 ;
-(int)blendImages:(SCD_Struct_Py28*)arg1 inputImageNarrowLuma:(id)arg2 inputImageNarrowChroma:(id)arg3 inOutImageLuma:(id)arg4 inOutImageChroma:(id)arg5 ;
-(int)privAllocateResources:(id)arg1 bufferOffset:(unsigned long long)arg2 totalSize:(unsigned long long*)arg3 alignedWorkAreaWidth:(unsigned)arg4 alignedWorkAreaHeight:(unsigned)arg5 ;
-(int)validateTextureDimensions:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(int)buildLaplacianPyramids:(id)arg1 inputChromaNarrowTex:(id)arg2 inputLumaWideTex:(id)arg3 inputChromaWideTex:(id)arg4 narrowParameters:(SCD_Struct_Py29*)arg5 wideParameters:(SCD_Struct_Py29*)arg6 numLumaLevels:(int)arg7 ;
-(int)contrastMatching:(SCD_Struct_Py28*)arg1 ;
-(int)rebuildImage:(SCD_Struct_Py28*)arg1 inOutImageLuma:(id)arg2 inOutImageChroma:(id)arg3 ;
-(void)computeDiscreteGaussianKernel:(float)arg1 parameters:(SCD_Struct_Py30*)arg2 ;
@end

