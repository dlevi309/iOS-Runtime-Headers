/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/

#import <DepthProcessor/DepthProcessor-Structs.h>
#import <DepthProcessor/DepthProcessor.h>

@protocol MTLTexture;
@class FigMetalContext, NSDictionary, FaceLandmarkProcessing, BodyProbability, DistanceTransformGpu, BilateralGridHash, BilateralSolverGPU, SLICMetal, slicMetalParameters, SuperPixelHoleFillMetal, FFCFiltersMetal, DepthProcUtilitiesMetal, NSArray, NSString;

@interface FigStillDepthProcessorGPU : NSObject <DepthProcessor> {

	SCD_Struct_Fi26 _configuration;
	FigMetalContext* _metalContext;
	CVBufferRef _yuvInputBuffer;
	id<MTLTexture> _yuvInputLumaTexture;
	id<MTLTexture> _yuvInputChromaTexture;
	CVBufferRef _disparityInputBuffer;
	id<MTLTexture> _disparityInputTexture;
	CVBufferRef _disparityOutputBuffer;
	id<MTLTexture> _disparityOutputTexture;
	CVBufferRef _rgbSegmentationMaskInputBuffer;
	unsigned _width;
	unsigned _height;
	NSDictionary* _metadataDictionary;
	CVBufferRef _preprocessedDisparity;
	id<MTLTexture> _preprocessedDisparityTexture;
	FaceLandmarkProcessing* _faceLandmarkProcessing;
	int _orientation;
	CVBufferRef _faceLandmarkDisparity;
	id<MTLTexture> _faceLandmarkDisparityTexture;
	BodyProbability* _bodyProbabilityProcessing;
	CVBufferRef _bodyProbabilityMap;
	id<MTLTexture> _bodyProbabilityMapTexture;
	id<MTLTexture> _validForegroundMaskTexture;
	DistanceTransformGpu* _distanceTransformProcessing;
	id<MTLTexture> _distanceTransformDisparityTexture;
	id<MTLTexture> _distanceTransformMapTexture;
	CVBufferRef _confidenceMap;
	id<MTLTexture> _confidenceMapTexture;
	id<MTLTexture> _invalidConfidenceMaskTexture;
	id<MTLTexture> _imerodeConfidenceMapTexture;
	BilateralGridHash* _bilateralGridProcessing;
	BilateralSolverGPU* _bilateralSolverGPUProcessing;
	id<MTLTexture> _bilateralInvZBufferInTexture;
	id<MTLTexture> _bilateralConfMapFloat32Texture;
	id<MTLTexture> _bilateralInvZBufferOutTexture;
	id<MTLTexture> _bilateralDisparityTexture;
	SLICMetal* _slicMetal;
	slicMetalParameters* _slicMetalParameters;
	unsigned _slicMaxNumSuperPixels;
	id<MTLTexture> _slicRgbaTexture;
	id<MTLTexture> _slicSpixelCentersIdAndNPixelsTexture;
	id<MTLTexture> _slicSpixelColorTexture;
	id<MTLTexture> _slicIdxImgTexture;
	SuperPixelHoleFillMetal* _superPixelHoleFillMetal;
	id<MTLTexture> _superPixelHoleFillDisparityTexture;
	id<MTLTexture> _superPixelHoleFillConfidenceTexture;
	FFCFiltersMetal* _FFCFilters;
	DepthProcUtilitiesMetal* _DepthProcUtilMetal;
	BOOL _submodulesInitialized;
	BOOL _resourcesAllocated;
	BOOL _disparityQualityIsHigh;
	float _minSceneMonitorGatingDistance;
	float _disparityQualityScore;
	int _figDepthQuality;
	float _infraredCameraPixelSizeInMicrons;
	float _rgbCameraPixelSizeInMicrons;
	NSArray* _faceLandmarksArray;
	SCD_Struct_Fi5 _infraredCameraIntrinsicMatrixReferenceDimensions;
	SCD_Struct_Fi5 _rgbCameraIntrinsicMatrixReferenceDimensions;
	SCD_Struct_Fi8 _infraredCameraIntrinsicMatrix;
	SCD_Struct_Fi8 _rgbCameraIntrinsicMatrix;
	SCD_Struct_Fi6 _extrinsicMatrixFromInfraredToRGBCamera;

}

@property (nonatomic,retain) NSArray * faceLandmarksArray;                                                 //@synthesize faceLandmarksArray=_faceLandmarksArray - In the implementation block
@property (assign,nonatomic) float minSceneMonitorGatingDistance;                                          //@synthesize minSceneMonitorGatingDistance=_minSceneMonitorGatingDistance - In the implementation block
@property (nonatomic,readonly) float disparityQualityScore;                                                //@synthesize disparityQualityScore=_disparityQualityScore - In the implementation block
@property (nonatomic,readonly) BOOL disparityQualityIsHigh;                                                //@synthesize disparityQualityIsHigh=_disparityQualityIsHigh - In the implementation block
@property (nonatomic,readonly) int figDepthQuality;                                                        //@synthesize figDepthQuality=_figDepthQuality - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi8 infraredCameraIntrinsicMatrix;                                 //@synthesize infraredCameraIntrinsicMatrix=_infraredCameraIntrinsicMatrix - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi5 infraredCameraIntrinsicMatrixReferenceDimensions;              //@synthesize infraredCameraIntrinsicMatrixReferenceDimensions=_infraredCameraIntrinsicMatrixReferenceDimensions - In the implementation block
@property (assign,nonatomic) float infraredCameraPixelSizeInMicrons;                                       //@synthesize infraredCameraPixelSizeInMicrons=_infraredCameraPixelSizeInMicrons - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi8 rgbCameraIntrinsicMatrix;                                      //@synthesize rgbCameraIntrinsicMatrix=_rgbCameraIntrinsicMatrix - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi5 rgbCameraIntrinsicMatrixReferenceDimensions;                   //@synthesize rgbCameraIntrinsicMatrixReferenceDimensions=_rgbCameraIntrinsicMatrixReferenceDimensions - In the implementation block
@property (assign,nonatomic) float rgbCameraPixelSizeInMicrons;                                            //@synthesize rgbCameraPixelSizeInMicrons=_rgbCameraPixelSizeInMicrons - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi6 extrinsicMatrixFromInfraredToRGBCamera;                        //@synthesize extrinsicMatrixFromInfraredToRGBCamera=_extrinsicMatrixFromInfraredToRGBCamera - In the implementation block
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)figDepthQuality;
-(BOOL)disparityQualityIsHigh;
-(float)disparityQualityScore;
-(void)setInfraredCameraIntrinsicMatrix:(SCD_Struct_Fi8)arg1 ;
-(void)setInfraredCameraIntrinsicMatrixReferenceDimensions:(SCD_Struct_Fi5)arg1 ;
-(void)setRgbCameraIntrinsicMatrix:(SCD_Struct_Fi8)arg1 ;
-(void)setRgbCameraIntrinsicMatrixReferenceDimensions:(SCD_Struct_Fi5)arg1 ;
-(int)processDepthBuffer:(CVBufferRef)arg1 yuvBuffer:(CVBufferRef)arg2 parametersDictionary:(id)arg3 outputDisparityBuffer:(CVBufferRef)arg4 ;
-(id)initWithParameters:(depthProcessorParameters*)arg1 commandQueue:(id)arg2 ;
-(id)init;
-(int)processDepthBuffer:(CVBufferRef)arg1 yuvBuffer:(CVBufferRef)arg2 rgbSegmentationMaskBuffer:(CVBufferRef)arg3 parametersDictionary:(id)arg4 outputDisparityBuffer:(CVBufferRef)arg5 ;
-(void)setMinSceneMonitorGatingDistance:(float)arg1 ;
-(void)setInfraredCameraPixelSizeInMicrons:(float)arg1 ;
-(void)setRgbCameraPixelSizeInMicrons:(float)arg1 ;
-(void)setExtrinsicMatrixFromInfraredToRGBCamera:(SCD_Struct_Fi6)arg1 ;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(BOOL)allocateResources;
-(void)releaseResources;
-(void)setFaceLandmarksArray:(NSArray *)arg1 ;
-(int)setTuningParameters:(id)arg1 ;
-(void)dealloc;
-(NSArray *)faceLandmarksArray;
-(float)minSceneMonitorGatingDistance;
-(SCD_Struct_Fi8)infraredCameraIntrinsicMatrix;
-(SCD_Struct_Fi5)infraredCameraIntrinsicMatrixReferenceDimensions;
-(float)infraredCameraPixelSizeInMicrons;
-(SCD_Struct_Fi8)rgbCameraIntrinsicMatrix;
-(SCD_Struct_Fi5)rgbCameraIntrinsicMatrixReferenceDimensions;
-(float)rgbCameraPixelSizeInMicrons;
-(SCD_Struct_Fi6)extrinsicMatrixFromInfraredToRGBCamera;
-(int)initSubmodules;
-(id)createTextureOfSize:(CGSize)arg1 withFormat:(unsigned long long)arg2 ;
-(int)sanityCheckParameters;
-(int)processDisparityPipeline;
-(int)estimateDisparityQualityScore;
-(int)erosionOnGpu;
-(int)fastBilateralSolver_PrepareHashTable;
-(int)faceLandmarkProcessing;
-(int)bodyProbability;
-(int)setFarDistanceOnGpu;
-(int)confidenceFalloff;
-(int)superPixelHoleFilling;
-(int)fastBilateralSolver;
-(int)initF16CVPixelBuffer:(CVBufferRef)arg1 withValue:( )arg2 ;
-(id)detectLandmarksUsingInputPixelBuffer;
@end

