/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/MetalFilter.bundle/MetalFilter
*/

#import <MetalFilter/MetalFilter-Structs.h>
#import <libobjc.A.dylib/ImageBufferProcessor.h>

@protocol MTLRenderPipelineState, MTLTexture, MTLCommandQueue;
@class NSDictionary, FigMetalContext, NSString;

@interface FigColorCubeMetalFilter : NSObject <ImageBufferProcessor> {

	FigMetalContext* _metal;
	unsigned long long _yuvFormat;
	id<MTLRenderPipelineState> _colorCubePipelineState[2][2][2];
	id<MTLRenderPipelineState> _colorCubePipelineStateY[2][2][2];
	id<MTLRenderPipelineState> _colorCubePipelineStateUV[2][2][2];
	id<MTLRenderPipelineState> _cubeConvert[2];
	id<MTLTexture> _fgCubesTexture;
	id<MTLTexture> _fgCubesTextureTemp;
	id<MTLTexture> _bgCubeTexture;
	id<MTLTexture> _bgCubeTextureTemp;
	BOOL _useBgCube;
	BOOL _isSingleFgCube;
	NSDictionary* _tuningParameters;
	NSDictionary* _cameraInfoByPortType;
	id<MTLCommandQueue> _commandQueue;
	SCD_Struct_Fi0* _filterDescriptor;
	CVBufferRef _inputPixelBuffer;
	CVBufferRef _outputPixelBuffer;
	CVBufferRef _mattePixelbuffer;

}

@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;               //@synthesize commandQueue=_commandQueue - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi0* filterDescriptor;                 //@synthesize filterDescriptor=_filterDescriptor - In the implementation block
@property (assign,nonatomic) CVBufferRef inputPixelBuffer;                     //@synthesize inputPixelBuffer=_inputPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef outputPixelBuffer;                    //@synthesize outputPixelBuffer=_outputPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef mattePixelbuffer;                     //@synthesize mattePixelbuffer=_mattePixelbuffer - In the implementation block
@property (nonatomic,retain) NSDictionary * tuningParameters;                  //@synthesize tuningParameters=_tuningParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType;              //@synthesize cameraInfoByPortType=_cameraInfoByPortType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)createCubeTexture:(id*)arg1 ofSize:(int)arg2 cubesCount:(int)arg3 textureType:(unsigned long long)arg4 withDevice:(id)arg5 ;
+(int)loadCube:(id)arg1 ofSize:(int)arg2 intoTexture:(id)arg3 toSliceIndex:(int)arg4 ;
-(int)process;
-(int)prewarm;
-(int)setup;
-(id<MTLCommandQueue>)commandQueue;
-(id)init;
-(int)setBackgroundCubeWithName:(id)arg1 data:(id)arg2 ;
-(int)purgeResources;
-(NSDictionary *)cameraInfoByPortType;
-(void)setCameraInfoByPortType:(NSDictionary *)arg1 ;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(NSString *)debugDescription;
-(NSDictionary *)tuningParameters;
-(int)resetState;
-(id)initWithCommandQueue:(id)arg1 ;
-(int)allocateResources;
-(int)prepareToProcess:(unsigned)arg1 ;
-(int)releaseResources;
-(void)setTuningParameters:(NSDictionary *)arg1 ;
-(SCD_Struct_Fi0*)filterDescriptor;
-(int)setForegroundCubesWithNames:(id)arg1 data:(id)arg2 ;
-(void)setInputPixelBuffer:(CVBufferRef)arg1 ;
-(void)setMattePixelbuffer:(CVBufferRef)arg1 ;
-(void)setOutputPixelBuffer:(CVBufferRef)arg1 ;
-(int)finishProcessing;
-(void)dealloc;
-(CVBufferRef)inputPixelBuffer;
-(CVBufferRef)outputPixelBuffer;
-(int)createKernels;
-(void)convertCubeWithSrcTexture:(id)arg1 dstTexture:(id)arg2 isP3Cube:(BOOL)arg3 ;
-(int)runWithInputPixelBuffer:(CVBufferRef)arg1 mattePixelBuffer:(CVBufferRef)arg2 outputPixelBuffer:(CVBufferRef)arg3 ;
-(id)createPipelineStateWithVertexFunction:(id)arg1 fragmentName:(id)arg2 isLuma:(BOOL)arg3 useBgCube:(BOOL)arg4 manyFgCubes:(BOOL)arg5 colorSpace:(int)arg6 ;
-(int)createPipelineStatesWithFragmentName:(id)arg1 vertexFunction:(id)arg2 ;
-(int)createPipelineStatesForCubeConversionWithVertexFunction:(id)arg1 ;
-(void)prewarmMetalInternalShader;
-(void)setFilterDescriptor:(SCD_Struct_Fi0*)arg1 ;
-(CVBufferRef)mattePixelbuffer;
@end

