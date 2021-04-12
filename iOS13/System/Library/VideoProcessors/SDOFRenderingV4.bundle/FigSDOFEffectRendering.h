/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV4.bundle/SDOFRenderingV4
*/


#import <SDOFRenderingV4/SDOFRenderingV4-Structs.h>
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
-(void)dealloc;
-(int)setOptions:(id)arg1 ;
-(BOOL)allocateResources;
-(FigMetalContext *)metalContext;
-(void)releaseResources;
-(int)runSamplingWithImage:(opaqueCMSampleBufferRef)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputFaceAdjustedBlurMap:(CVBufferRef)arg3 inputAlphaMask:(CVBufferRef)arg4 resultImage:(CVBufferRef)arg5 ;
-(id)initWithCommandQueue:(id)arg1 ;
-(BOOL)allocateResourcesForInputImageWidth:(unsigned long long)arg1 inputImageHeight:(unsigned long long)arg2 shiftMapWidth:(unsigned long long)arg3 shiftMapHeight:(unsigned long long)arg4 ;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(void)setFaceLandmarksArray:(NSArray *)arg1 ;
-(int)setOptionsInternal:(id)arg1 isPrewarm:(BOOL)arg2 ;
-(NSArray *)faceLandmarksArray;
-(BOOL)sanityChecksSamplingWithImage:(CVBufferRef)arg1 inputFaceAdjustedBlurMap:(CVBufferRef)arg2 inputAlphaMask:(CVBufferRef)arg3 resultImage:(CVBufferRef)arg4 ;
@end

