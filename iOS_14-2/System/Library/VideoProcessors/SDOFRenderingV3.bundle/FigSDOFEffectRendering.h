/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
@class SDOFResources, BlurMapSmoothing, SparseRenderer, FigMetalContext, SDOFRenderingDiagnostics, FigSDOFRenderingTuningParameters, NSDictionary, NSArray;

@interface FigSDOFEffectRendering : NSObject {

	unsigned long long _inputImageWidth;
	unsigned long long _inputImageHeight;
	unsigned long long _inputShiftMapWidth;
	unsigned long long _inputShiftMapHeight;
	unsigned long long _upsampledShiftMapWidth;
	unsigned long long _upsampledShiftMapHeight;
	SDOFResources* _resources;
	BlurMapSmoothing* _blurmapSmoothing;
	SparseRenderer* _sparseRenderer;
	FigMetalContext* _metalContext;
	SDOFRenderingDiagnostics* _diagnostics;
	FigSDOFRenderingTuningParameters* _tuningParameters;
	NSDictionary* _options;
	NSArray* _faceLandmarksArray;

}

@property (nonatomic,readonly) FigMetalContext * metalContext;              //@synthesize metalContext=_metalContext - In the implementation block
@property (nonatomic,retain) NSArray * faceLandmarksArray;                  //@synthesize faceLandmarksArray=_faceLandmarksArray - In the implementation block
-(id)init;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(int)setOptions:(id)arg1 ;
-(int)runSamplingWithImage:(opaqueCMSampleBufferRef)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputFaceAdjustedBlurMap:(CVBufferRef)arg3 inputAlphaMask:(CVBufferRef)arg4 inputGainMap:(CVBufferRef)arg5 resultImage:(CVBufferRef)arg6 ;
-(id)initWithCommandQueue:(id)arg1 ;
-(BOOL)allocateResourcesForInputImageWidth:(unsigned long long)arg1 inputImageHeight:(unsigned long long)arg2 shiftMapWidth:(unsigned long long)arg3 shiftMapHeight:(unsigned long long)arg4 ;
-(BOOL)allocateResources;
-(void)releaseResources;
-(void)setFaceLandmarksArray:(NSArray *)arg1 ;
-(FigMetalContext *)metalContext;
-(void)dealloc;
-(NSArray *)faceLandmarksArray;
-(int)setOptionsInternal:(id)arg1 isPrewarm:(BOOL)arg2 ;
-(BOOL)sanityChecksSamplingWithImage:(CVBufferRef)arg1 inputFaceAdjustedBlurMap:(CVBufferRef)arg2 inputAlphaMask:(CVBufferRef)arg3 resultImage:(CVBufferRef)arg4 ;
@end

