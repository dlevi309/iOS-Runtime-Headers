/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/

#import <DepthProcessor/DepthProcessor-Structs.h>
#import <DepthProcessor/DepthProcessor.h>

@class NSArray, NSDictionary, FigMetalContext, ANEDepthScalingProcessor, NSString;

@interface FigStillDepthProcessorANE : NSObject <DepthProcessor> {

	FigMetalContext* _metalContext;
	ANEDepthScalingProcessor* _depthScaling;
	BOOL _disparityQualityIsHigh;
	float _disparityQualityScore;
	int _figDepthQuality;
	NSArray* _faceLandmarksArray;

}

@property (nonatomic,retain) NSArray * faceLandmarksArray;                                                 //@synthesize faceLandmarksArray=_faceLandmarksArray - In the implementation block
@property (nonatomic,readonly) float disparityQualityScore;                                                //@synthesize disparityQualityScore=_disparityQualityScore - In the implementation block
@property (nonatomic,readonly) BOOL disparityQualityIsHigh;                                                //@synthesize disparityQualityIsHigh=_disparityQualityIsHigh - In the implementation block
@property (nonatomic,readonly) int figDepthQuality;                                                        //@synthesize figDepthQuality=_figDepthQuality - In the implementation block
@property (assign,nonatomic) float minSceneMonitorGatingDistance; 
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType; 
@property (assign,nonatomic) SCD_Struct_Fi8 infraredCameraIntrinsicMatrix; 
@property (assign,nonatomic) SCD_Struct_Fi5 infraredCameraIntrinsicMatrixReferenceDimensions; 
@property (assign,nonatomic) float infraredCameraPixelSizeInMicrons; 
@property (assign,nonatomic) SCD_Struct_Fi8 rgbCameraIntrinsicMatrix; 
@property (assign,nonatomic) SCD_Struct_Fi5 rgbCameraIntrinsicMatrixReferenceDimensions; 
@property (assign,nonatomic) float rgbCameraPixelSizeInMicrons; 
@property (assign,nonatomic) SCD_Struct_Fi6 extrinsicMatrixFromInfraredToRGBCamera; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)figDepthQuality;
-(BOOL)disparityQualityIsHigh;
-(float)disparityQualityScore;
-(int)processDepthBuffer:(CVBufferRef)arg1 yuvBuffer:(CVBufferRef)arg2 parametersDictionary:(id)arg3 outputDisparityBuffer:(CVBufferRef)arg4 ;
-(id)initWithParameters:(depthProcessorParameters*)arg1 commandQueue:(id)arg2 ;
-(id)init;
-(int)processDepthBuffer:(CVBufferRef)arg1 yuvBuffer:(CVBufferRef)arg2 rgbSegmentationMaskBuffer:(CVBufferRef)arg3 parametersDictionary:(id)arg4 outputDisparityBuffer:(CVBufferRef)arg5 ;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(BOOL)allocateResources;
-(void)releaseResources;
-(void)setFaceLandmarksArray:(NSArray *)arg1 ;
-(int)setTuningParameters:(id)arg1 ;
-(void)dealloc;
-(int)convertDepth:(CVBufferRef)arg1 toDisparity:(CVBufferRef)arg2 ;
-(int)scaleInputDepth:(CVBufferRef)arg1 toDisparity:(CVBufferRef)arg2 ;
-(NSArray *)faceLandmarksArray;
@end

