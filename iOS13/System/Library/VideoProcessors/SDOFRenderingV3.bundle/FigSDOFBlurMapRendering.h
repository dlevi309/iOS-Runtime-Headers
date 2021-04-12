/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV3.bundle/SDOFRenderingV3
*/


#import <SDOFRenderingV3/SDOFRenderingV3-Structs.h>
@class SimpleLensModel, FaceMask, SegmentationFusion, FigMetalContext, SDOFResources, SDOFRenderingDiagnostics, FigSDOFRenderingTuningParameters, DisparityRefinement, NSDictionary, NSArray;

@interface FigSDOFBlurMapRendering : NSObject {

	unsigned long long _inputImageWidth;
	unsigned long long _inputImageHeight;
	unsigned long long _inputShiftMapWidth;
	unsigned long long _inputShiftMapHeight;
	unsigned long long _upsampledShiftMapWidth;
	unsigned long long _upsampledShiftMapHeight;
	SimpleLensModel* _lensModel;
	FaceMask* _faceMask;
	SegmentationFusion* _segmentationFusion;
	FigMetalContext* _metalContext;
	SDOFResources* _resources;
	SDOFRenderingDiagnostics* _diagnostics;
	FigSDOFRenderingTuningParameters* _tuningParameters;
	DisparityRefinement* _disparityRefinement;
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
-(id)initWithCommandQueue:(id)arg1 ;
-(BOOL)allocateResourcesForInputImageWidth:(unsigned long long)arg1 inputImageHeight:(unsigned long long)arg2 shiftMapWidth:(unsigned long long)arg3 shiftMapHeight:(unsigned long long)arg4 ;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(void)setFaceLandmarksArray:(NSArray *)arg1 ;
-(int)computeBlurMapWithImage:(opaqueCMSampleBufferRef)arg1 shiftMap:(CVBufferRef)arg2 personSegmentationMask:(CVBufferRef)arg3 hairSemanticSegmentationMask:(CVBufferRef)arg4 resultFaceAdjustedBlurMap:(CVBufferRef)arg5 ;
-(int)setOptionsInternal:(id)arg1 isPrewarm:(BOOL)arg2 ;
-(BOOL)sanityChecksBlurMapWithImage:(CVBufferRef)arg1 shiftMap:(CVBufferRef)arg2 segmentationMask:(CVBufferRef)arg3 resultFaceAdjBlurMap:(CVBufferRef)arg4 ;
-(BOOL)detectFacesOnTele:(CVBufferRef)arg1 meta:(id)arg2 to:(SCD_Struct_Fi6*)arg3 maxFacesCount:(int)arg4 facesCount:(int*)arg5 ;
-(NSArray *)faceLandmarksArray;
@end

