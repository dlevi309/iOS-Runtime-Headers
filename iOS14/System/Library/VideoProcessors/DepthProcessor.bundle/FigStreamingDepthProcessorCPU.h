/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/

#import <DepthProcessor/DepthProcessor-Structs.h>
#import <DepthProcessor/DepthProcessor.h>

@class NSDictionary, NSArray, NSString;

@interface FigStreamingDepthProcessorCPU : NSObject <DepthProcessor> {

	SDPGuidedDepthReconstruction* _gdr;
	int _resX;
	int _resY;
	BOOL _resourcesAllocated;
	BOOL _isFrontFacing;
	float* _image;
	float* _disparity;
	NSDictionary* _cameraInfoByPortType;

}

@property (nonatomic,retain) NSDictionary * cameraInfoByPortType;                                          //@synthesize cameraInfoByPortType=_cameraInfoByPortType - In the implementation block
@property (nonatomic,retain) NSArray * faceLandmarksArray; 
@property (assign,nonatomic) float minSceneMonitorGatingDistance; 
@property (nonatomic,readonly) float disparityQualityScore; 
@property (nonatomic,readonly) BOOL disparityQualityIsHigh; 
@property (nonatomic,readonly) int figDepthQuality; 
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
-(int)processDepthBuffer:(CVBufferRef)arg1 yuvBuffer:(CVBufferRef)arg2 parametersDictionary:(id)arg3 outputDisparityBuffer:(CVBufferRef)arg4 ;
-(id)initWithParameters:(depthProcessorParameters*)arg1 commandQueue:(id)arg2 ;
-(int)processDepthBuffer:(CVBufferRef)arg1 yuvBuffer:(CVBufferRef)arg2 rgbSegmentationMaskBuffer:(CVBufferRef)arg3 parametersDictionary:(id)arg4 outputDisparityBuffer:(CVBufferRef)arg5 ;
-(NSDictionary *)cameraInfoByPortType;
-(void)setCameraInfoByPortType:(NSDictionary *)arg1 ;
-(BOOL)allocateResources;
-(void)releaseResources;
-(void)dealloc;
-(void)_convertInputYUV:(CVBufferRef)arg1 ;
-(void)_convertInputShifts:(CVBufferRef)arg1 ;
-(void)_copyToDepthImage:(CVBufferRef)arg1 ;
@end

