/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/

#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
#import <libobjc.A.dylib/ImageBufferProcessor.h>

@protocol MTLTexture, MTLBuffer;
@class FigMetalContext, FOVDescriptor, NSDictionary, LinearBlending, ColorMatching, DisparityExtension, StereoStitchingGpuUtilities, FigStreamingStereoStitchingTuningParameters, StreamingTuning, FigStreamingStereoStitchingOutput;

@interface FigStreamingStereoStitchingProcessor : NSObject <ImageBufferProcessor> {

	FigMetalContext* _metal;
	BOOL _asynchronous;
	CVMetalTextureCacheRef _textureCache;
	FOVDescriptor* _fovDesc;
	CVBufferRef _wideImagePixelBuffer;
	NSDictionary* _wideMetadata;
	CVBufferRef _narrowImagePixelBuffer;
	NSDictionary* _narrowMetadata;
	SCD_Struct_Fi4 _narrowValidBufferRect;
	SCD_Struct_Fi4 _narrowROI;
	SCD_Struct_Fi4 _wideValidBufferRect;
	SCD_Struct_Fi4 _wideROI;
	CVBufferRef _disparity;
	NSDictionary* _disparityMetadata;
	CVBufferRef _disparityY;
	NSDictionary* _disparityYMetadata;
	id<MTLTexture> _wideLumaTex;
	id<MTLTexture> _wideChromaTex;
	id<MTLTexture> _narrowLumaTex;
	id<MTLTexture> _narrowChromaTex;
	id<MTLTexture> _disparityXYTex;
	id<MTLTexture> _disparityExtendedTex;
	id<MTLTexture> _wideLumaWarpedTex;
	id<MTLTexture> _wideChromaWarpedTex;
	id<MTLTexture> _fusedLumaTex;
	id<MTLTexture> _fusedChromaTex;
	LinearBlending* _linearBlending;
	ColorMatching* _colorMatching;
	DisparityExtension* _disparityExtension;
	StereoStitchingGpuUtilities* _ssGpuUtilities;
	FigStreamingStereoStitchingTuningParameters* _tuningParameters;
	StreamingTuning* _streamingTuning;
	int _dumpDebugData;
	BOOL _enableVideoStereoStitching;
	BOOL _enableVISBoundingBox;
	BOOL _isShaderHarvesting;
	BOOL _areShadersCompiled;
	NSDictionary* _options;
	opaqueCMSampleBufferRef _wideImageSampleBuffer;
	opaqueCMSampleBufferRef _narrowImageSampleBuffer;
	opaqueCMSampleBufferRef _disparitySampleBuffer;
	opaqueCMSampleBufferRef _disparityYSampleBuffer;
	id<MTLBuffer> _workingMemoryBuffer;
	FigStreamingStereoStitchingOutput* _output;

}

@property (nonatomic,retain) NSDictionary * options;                                       //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef wideImageSampleBuffer;                //@synthesize wideImageSampleBuffer=_wideImageSampleBuffer - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef narrowImageSampleBuffer;              //@synthesize narrowImageSampleBuffer=_narrowImageSampleBuffer - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef disparitySampleBuffer;                //@synthesize disparitySampleBuffer=_disparitySampleBuffer - In the implementation block
@property (assign,nonatomic) opaqueCMSampleBufferRef disparityYSampleBuffer;               //@synthesize disparityYSampleBuffer=_disparityYSampleBuffer - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> workingMemoryBuffer;                            //@synthesize workingMemoryBuffer=_workingMemoryBuffer - In the implementation block
@property (nonatomic,retain) FigStreamingStereoStitchingOutput * output;                   //@synthesize output=_output - In the implementation block
-(id)init;
-(void)dealloc;
-(NSDictionary *)options;
-(int)finishProcessing;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)releaseResources;
-(int)process;
-(FigStreamingStereoStitchingOutput *)output;
-(void)setOutput:(FigStreamingStereoStitchingOutput *)arg1 ;
-(id)initWithCommandQueue:(id)arg1 ;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(int)prepareToProcess:(unsigned)arg1 ;
-(void)setWideImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setNarrowImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setDisparitySampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setDisparityYSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)prepareToProcess:(unsigned)arg1 prepareDescriptor:(id)arg2 ;
-(int)resetState;
-(int)purgeResources;
-(void)isShaderHarvesting:(id)arg1 ;
-(int)compileShaders:(BOOL)arg1 ;
-(opaqueCMSampleBufferRef)wideImageSampleBuffer;
-(opaqueCMSampleBufferRef)narrowImageSampleBuffer;
-(int)initializeResources:(id)arg1 outMemSize:(unsigned*)arg2 ;
-(int)prepareFovDescriptor:(id)arg1 ;
-(int)resizeBuffersIfNeeded;
-(int)makeRoiYuvCompatibleInplace:(SCD_Struct_Fi4*)arg1 ;
-(int)getROIWithBuffer:(CVBufferRef)arg1 metadata:(id)arg2 outValidBufferRect:(SCD_Struct_Fi4*)arg3 outROI:(SCD_Struct_Fi4*)arg4 ;
-(id)textureFromPixelBuffer:(CVBufferRef)arg1 plane:(int)arg2 format:(unsigned long long)arg3 usage:(unsigned long long)arg4 ;
-(int)updateFovDescriptorForCurrentCapture;
-(int)computeWarpingParamsForNarrowToWide:(SCD_Struct_Di33*)arg1 disparityToWide:(SCD_Struct_Di33*)arg2 ;
-(int)getVISBoundingBox:(SCD_Struct_Fi4*)arg1 boxIsBoundByOverscan:(BOOL*)arg2 ;
-(int)setAdaptiveBlendingParameters:(SCD_Struct_Fi44*)arg1 visBoundingBox:(SCD_Struct_Fi4*)arg2 ;
-(int)attachMetadata:(id)arg1 ;
-(opaqueCMSampleBufferRef)disparitySampleBuffer;
-(opaqueCMSampleBufferRef)disparityYSampleBuffer;
-(id<MTLBuffer>)workingMemoryBuffer;
-(void)setWorkingMemoryBuffer:(id<MTLBuffer>)arg1 ;
@end

