/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLTexture, MTLComputePipelineState, MTLRenderPipelineState, MTLBuffer;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities;

@interface RegPyramid : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _gpuUtilities;
	BOOL _resourcesAllocated;
	unsigned _pyrWidths[12];
	unsigned _pyrHeights[12];
	id<MTLTexture> _narrowPyramidTextures[12];
	id<MTLTexture> _widePyramidTextures[12];
	id<MTLTexture> _narrowDerivativesTextures[12];
	id<MTLTexture> _narrowDerivativesTextures_AsU32[12];
	id<MTLTexture> _wideDerivativesTextures[12];
	id<MTLTexture> _prevShiftMapTexture[12];
	id<MTLTexture> _prevShiftMapTexture_AsRGBA[12];
	id<MTLTexture> _prevShiftMapTexture_AsU32;
	id<MTLTexture> _nextShiftMapTexture[12];
	id<MTLTexture> _confidenceMapTexture_intermediate;
	id<MTLTexture> _confidenceMapTexture_intermediate_AsRG16;
	id<MTLTexture> _shiftMapWeightTexture[12];
	id<MTLTexture> _confidenceMapTexture;
	id<MTLTexture> _confidenceMapTexture_AsRG16;
	id<MTLComputePipelineState> _kernel_initialDownscale;
	id<MTLComputePipelineState> _kernel_pyramidDownscale;
	id<MTLComputePipelineState> _kernel_generateDerivatives;
	id<MTLRenderPipelineState> _basicSearchLumaPipelineState;
	id<MTLRenderPipelineState> _fusionXLumaPipelineState;
	id<MTLRenderPipelineState> _fusionYLumaPipelineState;
	id<MTLRenderPipelineState> _smoothPipelineState;
	id<MTLRenderPipelineState> _selectionLumaPipelineState;
	id<MTLRenderPipelineState> _confidenceStageOne;
	id<MTLRenderPipelineState> _confidenceErode;
	id<MTLRenderPipelineState> _confidenceDilate;
	SCD_Struct_Re72 _pyrHomography[12];
	id<MTLBuffer> _shiftMapBuffer;
	unsigned long long _shiftMapBufferOffset;
	id<MTLBuffer> _narrowTopPyramidBuffer;
	unsigned long long _narrowTopPyramidBufferOffset;
	id<MTLBuffer> _confidenceMapBuffer;
	unsigned long long _confidenceMapBufferOffset;

}

@property (nonatomic,retain) id<MTLBuffer> shiftMapBuffer;                                 //@synthesize shiftMapBuffer=_shiftMapBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long shiftMapBufferOffset;                      //@synthesize shiftMapBufferOffset=_shiftMapBufferOffset - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> narrowTopPyramidBuffer;                         //@synthesize narrowTopPyramidBuffer=_narrowTopPyramidBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long narrowTopPyramidBufferOffset;              //@synthesize narrowTopPyramidBufferOffset=_narrowTopPyramidBufferOffset - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> confidenceMapBuffer;                            //@synthesize confidenceMapBuffer=_confidenceMapBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long confidenceMapBufferOffset;                 //@synthesize confidenceMapBufferOffset=_confidenceMapBufferOffset - In the implementation block
-(void)dealloc;
-(void)releaseResources;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 gpuUtilities:(id)arg2 ;
-(int)getTopPyramidLevelDimensions:(unsigned*)arg1 height:(unsigned*)arg2 ;
-(void)setShiftMapBuffer:(id<MTLBuffer>)arg1 ;
-(void)setShiftMapBufferOffset:(unsigned long long)arg1 ;
-(void)setConfidenceMapBuffer:(id<MTLBuffer>)arg1 ;
-(void)setConfidenceMapBufferOffset:(unsigned long long)arg1 ;
-(void)setNarrowTopPyramidBuffer:(id<MTLBuffer>)arg1 ;
-(void)setNarrowTopPyramidBufferOffset:(unsigned long long)arg1 ;
-(int)setSharedMetalBuffer:(id)arg1 bufferOffset:(unsigned long long)arg2 ;
-(int)computeWorkBufferSize:(unsigned long long*)arg1 ;
-(int)registerImagesWithNarrowAsReference:(id)arg1 wideLuma:(id)arg2 calibrationHomography:(SCD_Struct_Fi8)arg3 calibrationNarrowRoi:(SCD_Struct_Fi4)arg4 calibrationWideRoi:(SCD_Struct_Fi4)arg5 ;
-(id)getShiftmap;
-(id)getNarrowTopPyramidTexture;
-(id)getConfidenceMap;
-(int)privAllocateResources:(id)arg1 bufferOffset:(unsigned long long)arg2 totalSize:(unsigned long long*)arg3 ;
-(void)calculateDimensionsOfEachPyramidLevels;
-(id)createPipelineRenderState:(id)arg1 fShaderName:(id)arg2 outputColorMetalFormat:(id)arg3 ;
-(void)computeHomographiesUsingCalibration:(SCD_Struct_Fi8)arg1 calibrationNarrowRoi:(SCD_Struct_Fi4)arg2 calibrationWideRoi:(SCD_Struct_Fi4)arg3 ;
-(int)generatePyramid:(id)arg1 wideLuma:(id)arg2 calibrationNarrowRoi:(SCD_Struct_Fi4)arg3 calibrationWideRoi:(SCD_Struct_Fi4)arg4 ;
-(int)generateDerivatives:(id)arg1 pyramidLevel:(int)arg2 ;
-(int)basicSearchWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 pyramidLevel:(int)arg3 ;
-(int)smoothShiftMapWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 pyramidLevel:(int)arg3 ;
-(int)selectionWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 pyramidLevel:(int)arg3 ;
-(int)fusionWithCommandBuffer:(id)arg1 renderPassDesc:(id)arg2 pyramidLevel:(int)arg3 ;
-(int)computeConfidenceMap:(id)arg1 renderPassDesc:(id)arg2 ;
-(id<MTLBuffer>)shiftMapBuffer;
-(unsigned long long)shiftMapBufferOffset;
-(id<MTLBuffer>)narrowTopPyramidBuffer;
-(unsigned long long)narrowTopPyramidBufferOffset;
-(id<MTLBuffer>)confidenceMapBuffer;
-(unsigned long long)confidenceMapBufferOffset;
@end

