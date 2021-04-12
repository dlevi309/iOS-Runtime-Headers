/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLBuffer, MTLTexture, SidecarWriter;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@class NSDictionary, FigMetalContext, AMBNRStage, AMBNRBuffers, FusionRemixStage, PyramidStorage, NSMutableArray, BilateralGrid, RegDense, InverseLTMBuffers;

@interface DenoiseFusePipeline : NSObject {

	NSDictionary* _options;
	BOOL _supportsHDR;
	BOOL _onlySingleImageDenoising;
	FigMetalContext* _metal;
	int _currentFrame;
	AMBNRStage* _ambnrStage[4];
	AMBNRBuffers* _ambnrBuffers[2];
	int _pyrFormat;
	int _fusionAlgo;
	CVBufferRef _gain;
	CVBufferRef _similarityMap;
	FusionRemixStage* _fusionRemixStage;
	PyramidStorage* _fusedBands[2];
	PyramidStorage* _fusedDenoisedBands[2];
	_CVBuffer* _denoisedAllocInternally[4];
	int _denoisedAllocInternallyIndex;
	NSMutableArray* _recycledInputBuffers;
	BilateralGrid* _bilateralGrid;
	RegDense* _regDense;
	char* _morphology;
	id<MTLBuffer> _scratchBuffer;
	id<MTLTexture> _ltmLumaTex;
	id<MTLTexture> _ltmChromaTex;
	BOOL _resetAliasingForHDR;
	InverseLTMBuffers* _inverseLTMBuffers[4];
	unsigned long long _lastWidth;
	unsigned long long _lastHeight;
	BOOL _allowModifyingInputBuffers;
	int _forceHDRFusionReferenceFrame;
	id<SidecarWriter> _sidecarWriter;
	/*^block*/id _fusionReferenceSelectionBlock;

}

@property (assign,nonatomic,__weak) id<SidecarWriter> sidecarWriter;              //@synthesize sidecarWriter=_sidecarWriter - In the implementation block
@property (assign,nonatomic) int forceHDRFusionReferenceFrame;                    //@synthesize forceHDRFusionReferenceFrame=_forceHDRFusionReferenceFrame - In the implementation block
@property (assign,nonatomic) BOOL allowModifyingInputBuffers;                     //@synthesize allowModifyingInputBuffers=_allowModifyingInputBuffers - In the implementation block
@property (nonatomic,copy) id fusionReferenceSelectionBlock;                      //@synthesize fusionReferenceSelectionBlock=_fusionReferenceSelectionBlock - In the implementation block
-(int)setFusionMode:(int)arg1 ;
-(void)setAllowModifyingInputBuffers:(BOOL)arg1 ;
-(void)reset;
-(void)dealloc;
-(CVBufferRef)getDenoisingOutputBuffer:(CVBufferRef)arg1 ;
-(int)reAliasPyramid:(id)arg1 withPixelBuffer:(CVBufferRef)arg2 ;
-(int)reAliasPyramidsIntoIntermediateBuffersUsingOutput:(CVBufferRef)arg1 ;
-(int)forceHDRFusionReferenceFrame;
-(id)fusionReferenceSelectionBlock;
-(id<SidecarWriter>)sidecarWriter;
-(void)setSidecarWriter:(id<SidecarWriter>)arg1 ;
-(id)initWithContext:(id)arg1 supportsHDR:(BOOL)arg2 onlySingleImageDenoising:(BOOL)arg3 ;
-(void)setFusionReferenceSelectionBlock:(id)arg1 ;
-(void)releaseAllBuffers;
-(void)setForceHDRFusionReferenceFrame:(int)arg1 ;
-(int)denoiseFrame:(CVBufferRef)arg1 input:(CVBufferRef)arg2 exposure:(exposureParameters*)arg3 tuningParams:(id)arg4 highGainTuningParams:(id)arg5 ltmCurves:(ltmCurves*)arg6 recycleInput:(BOOL)arg7 ;
-(int)baseLayer:(id)arg1 ;
-(int)denoiseSingleImage:(CVBufferRef)arg1 input:(CVBufferRef)arg2 exposure:(exposureParameters*)arg3 tuningParams:(id)arg4 highGainTuningParams:(id)arg5 ltmCurves:(ltmCurves*)arg6 ;
-(int)resizeBuffersIfNeededWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(int)fuseImages:(CVBufferRef)arg1 config:(FusionConfiguration*)arg2 properties:(frameProperties_t*)arg3 pbEV0Properties:(frameProperties_t*)arg4 tuningParams:(id)arg5 validBufferRect:(CGRect)arg6 ;
-(CVBufferRef)getDenoisedFrame:(int)arg1 ;
-(BOOL)allowModifyingInputBuffers;
@end

