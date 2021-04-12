/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTLTexture;
@class ARPlaneData, AVDepthData, ARCamera, NSArray, ARLightEstimate, ARPointCloud, ARFrameTimingData, ARWorldTrackingErrorData, ARLineCloud, ARWorldTrackingState, NSDate, ARRawSceneUnderstandingData, ARFaceData, ARVideoFormat, ARBody2D;

@interface ARFrame : NSObject <NSSecureCoding, NSCopying> {

	ARPlaneData* _cachedHorizontalPlaneData;
	ARPlaneData* _cachedVerticalPlaneData;
	unsigned long long _transformFlags;
	BOOL _shouldRestrictFrameRate;
	float _cameraGrainIntensity;
	float _imageNoiseIntensity;
	CVBufferRef _segmentationBuffer;
	CVBufferRef _capturedImage;
	id<MTLTexture> _cameraGrainTexture;
	double _timestamp;
	AVDepthData* _capturedDepthData;
	double _capturedDepthDataTimestamp;
	ARCamera* _camera;
	NSArray* _anchors;
	ARLightEstimate* _lightEstimate;
	long long _worldMappingStatus;
	CVBufferRef _estimatedDepthData;
	double _currentCaptureTimestamp;
	ARPointCloud* _featurePoints;
	ARPointCloud* _referenceFeaturePoints;
	NSArray* _cachedPointClouds;
	long long _worldAlignment;
	ARFrameTimingData* _timingData;
	ARWorldTrackingErrorData* _worldTrackingErrorData;
	ARLineCloud* _worldTrackingLineCloud;
	ARWorldTrackingState* _worldTrackingState;
	long long _renderFramesPerSecond;
	NSDate* _captureDate;
	ARRawSceneUnderstandingData* _rawSceneUnderstandingData;
	double _estimatedLuminance;
	NSArray* _resultDatas;
	long long _deviceOrientation;
	CVBufferRef _downSampledMattingPixelBuffer;
	CVBufferRef _mattingScaleImagePixelBuffer;
	NSArray* _detectedBodies;
	ARFaceData* _faceData;
	ARVideoFormat* _currentlyActiveVideoFormat;
	ARPointCloud* _capturedPointCloudData;
	CVBufferRef _depthConfidenceData;
	CVBufferRef _depthNormalData;
	CVBufferRef _semanticSegmentationBuffer;
	CGImageRef _depthMap;
	CVBufferRef _spatialMappingDepthBuffer;
	id<MTLTexture> _imageNoiseTexture;
	SCD_Struct_AR1 _referenceOriginTransform;
	SCD_Struct_AR1 _referenceOriginDelta;
	SCD_Struct_AR1 _sessionOriginTransform;
	SCD_Struct_AR1 _worldAlignmentTransform;

}

@property (nonatomic,readonly) double currentCaptureTimestamp;                                     //@synthesize currentCaptureTimestamp=_currentCaptureTimestamp - In the implementation block
@property (assign,nonatomic) CVBufferRef capturedImage;                                            //@synthesize capturedImage=_capturedImage - In the implementation block
@property (nonatomic,copy) NSArray * anchors;                                                      //@synthesize anchors=_anchors - In the implementation block
@property (nonatomic,retain) ARLightEstimate * lightEstimate;                                      //@synthesize lightEstimate=_lightEstimate - In the implementation block
@property (assign,nonatomic) long long worldMappingStatus;                                         //@synthesize worldMappingStatus=_worldMappingStatus - In the implementation block
@property (nonatomic,retain) ARPointCloud * featurePoints;                                         //@synthesize featurePoints=_featurePoints - In the implementation block
@property (nonatomic,retain) ARPointCloud * referenceFeaturePoints;                                //@synthesize referenceFeaturePoints=_referenceFeaturePoints - In the implementation block
@property (nonatomic,retain) NSArray * cachedPointClouds;                                          //@synthesize cachedPointClouds=_cachedPointClouds - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 referenceOriginTransform;                              //@synthesize referenceOriginTransform=_referenceOriginTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 referenceOriginDelta;                                  //@synthesize referenceOriginDelta=_referenceOriginDelta - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 sessionOriginTransform;                                //@synthesize sessionOriginTransform=_sessionOriginTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 worldAlignmentTransform;                               //@synthesize worldAlignmentTransform=_worldAlignmentTransform - In the implementation block
@property (assign,nonatomic) long long worldAlignment;                                             //@synthesize worldAlignment=_worldAlignment - In the implementation block
@property (nonatomic,retain) ARFrameTimingData * timingData;                                       //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) ARWorldTrackingErrorData * worldTrackingErrorData;                    //@synthesize worldTrackingErrorData=_worldTrackingErrorData - In the implementation block
@property (nonatomic,retain) ARLineCloud * worldTrackingLineCloud;                                 //@synthesize worldTrackingLineCloud=_worldTrackingLineCloud - In the implementation block
@property (nonatomic,retain) ARWorldTrackingState * worldTrackingState;                            //@synthesize worldTrackingState=_worldTrackingState - In the implementation block
@property (assign,nonatomic) long long renderFramesPerSecond;                                      //@synthesize renderFramesPerSecond=_renderFramesPerSecond - In the implementation block
@property (assign,nonatomic) BOOL shouldRestrictFrameRate;                                         //@synthesize shouldRestrictFrameRate=_shouldRestrictFrameRate - In the implementation block
@property (nonatomic,retain) NSDate * captureDate;                                                 //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,retain) ARRawSceneUnderstandingData * rawSceneUnderstandingData;              //@synthesize rawSceneUnderstandingData=_rawSceneUnderstandingData - In the implementation block
@property (assign,nonatomic) double estimatedLuminance;                                            //@synthesize estimatedLuminance=_estimatedLuminance - In the implementation block
@property (nonatomic,copy) NSArray * resultDatas;                                                  //@synthesize resultDatas=_resultDatas - In the implementation block
@property (assign,nonatomic) long long deviceOrientation;                                          //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (assign,nonatomic) CVBufferRef segmentationBuffer;                                       //@synthesize segmentationBuffer=_segmentationBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef estimatedDepthData;                                       //@synthesize estimatedDepthData=_estimatedDepthData - In the implementation block
@property (assign,nonatomic) CVBufferRef downSampledMattingPixelBuffer;                            //@synthesize downSampledMattingPixelBuffer=_downSampledMattingPixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef mattingScaleImagePixelBuffer;                             //@synthesize mattingScaleImagePixelBuffer=_mattingScaleImagePixelBuffer - In the implementation block
@property (nonatomic,copy) NSArray * detectedBodies;                                               //@synthesize detectedBodies=_detectedBodies - In the implementation block
@property (nonatomic,retain) ARFaceData * faceData;                                                //@synthesize faceData=_faceData - In the implementation block
@property (nonatomic,retain) AVDepthData * capturedDepthData;                                      //@synthesize capturedDepthData=_capturedDepthData - In the implementation block
@property (nonatomic,retain) ARVideoFormat * currentlyActiveVideoFormat;                           //@synthesize currentlyActiveVideoFormat=_currentlyActiveVideoFormat - In the implementation block
@property (nonatomic,retain) ARPointCloud * capturedPointCloudData;                                //@synthesize capturedPointCloudData=_capturedPointCloudData - In the implementation block
@property (assign,nonatomic) CVBufferRef depthConfidenceData;                                      //@synthesize depthConfidenceData=_depthConfidenceData - In the implementation block
@property (assign,nonatomic) CVBufferRef depthNormalData;                                          //@synthesize depthNormalData=_depthNormalData - In the implementation block
@property (assign,nonatomic) CVBufferRef semanticSegmentationBuffer;                               //@synthesize semanticSegmentationBuffer=_semanticSegmentationBuffer - In the implementation block
@property (assign,nonatomic) CGImageRef depthMap;                                                  //@synthesize depthMap=_depthMap - In the implementation block
@property (assign,nonatomic) CVBufferRef spatialMappingDepthBuffer;                                //@synthesize spatialMappingDepthBuffer=_spatialMappingDepthBuffer - In the implementation block
@property (assign,nonatomic) double capturedDepthDataTimestamp;                                    //@synthesize capturedDepthDataTimestamp=_capturedDepthDataTimestamp - In the implementation block
@property (nonatomic,retain) id<MTLTexture> imageNoiseTexture;                                     //@synthesize imageNoiseTexture=_imageNoiseTexture - In the implementation block
@property (assign,nonatomic) float imageNoiseIntensity;                                            //@synthesize imageNoiseIntensity=_imageNoiseIntensity - In the implementation block
@property (nonatomic,readonly) double timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> cameraGrainTexture;                                  //@synthesize cameraGrainTexture=_cameraGrainTexture - In the implementation block
@property (nonatomic,readonly) float cameraGrainIntensity;                                         //@synthesize cameraGrainIntensity=_cameraGrainIntensity - In the implementation block
@property (nonatomic,copy,readonly) ARCamera * camera;                                             //@synthesize camera=_camera - In the implementation block
@property (nonatomic,readonly) ARPointCloud * rawFeaturePoints; 
@property (nonatomic,readonly) ARBody2D * detectedBody; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(ARFrameTimingData *)timingData;
-(long long)deviceOrientation;
-(void)setDeviceOrientation:(long long)arg1 ;
-(ARCamera *)camera;
-(NSDate *)captureDate;
-(void)setCaptureDate:(NSDate *)arg1 ;
-(CVBufferRef)capturedImage;
-(void)setCapturedImage:(CVBufferRef)arg1 ;
-(NSArray *)anchors;
-(void)setWorldAlignment:(long long)arg1 ;
-(void)setTimingData:(ARFrameTimingData *)arg1 ;
-(void)setAnchors:(NSArray *)arg1 ;
-(CVBufferRef)estimatedDepthData;
-(CVBufferRef)mattingScaleImagePixelBuffer;
-(CVBufferRef)segmentationBuffer;
-(ARWorldTrackingState *)worldTrackingState;
-(SCD_Struct_AR1)worldAlignmentTransform;
-(ARLightEstimate *)lightEstimate;
-(ARPointCloud *)featurePoints;
-(double)currentCaptureTimestamp;
-(ARFaceData *)faceData;
-(void)setFaceData:(ARFaceData *)arg1 ;
-(long long)worldAlignment;
-(SCD_Struct_AR1)referenceOriginTransform;
-(void)setWorldTrackingState:(ARWorldTrackingState *)arg1 ;
-(void)setCurrentlyActiveVideoFormat:(ARVideoFormat *)arg1 ;
-(void)setWorldMappingStatus:(long long)arg1 ;
-(void)setDepthMap:(CGImageRef)arg1 ;
-(void)setReferenceOriginTransform:(SCD_Struct_AR1)arg1 ;
-(void)setLightEstimate:(ARLightEstimate *)arg1 ;
-(NSArray *)detectedBodies;
-(long long)worldMappingStatus;
-(float)cameraGrainIntensity;
-(ARWorldTrackingErrorData *)worldTrackingErrorData;
-(AVDepthData *)capturedDepthData;
-(ARVideoFormat *)currentlyActiveVideoFormat;
-(NSArray *)resultDatas;
-(id)hitTest:(CGPoint)arg1 types:(unsigned long long)arg2 ;
-(id)initWithCamera:(id)arg1 timestamp:(double)arg2 ;
-(3)transformPointToNDCSpace:(CGPoint)arg1 ;
-(id)_hitTestFromOrigin:(unsigned long long)arg1 ;
-(BOOL)sessionOriginTransformAvailable;
-(BOOL)worldAlignmentTransformAvailable;
-(ARPointCloud *)capturedPointCloudData;
-(BOOL)useHittestRaycasting;
-(id)_hitTestEstimatedPlanesFromOrigin:(long long)arg1 ;
-(id)_horizontalPlaneEstimateFromFeaturePoint:fromOrigin:withDirection:;
-(id)initWithTimestamp:(double)arg1 context:(id)arg2 ;
-(id)initWithTimestampAndNoContext:(double)arg1 ;
-(void)setPredictedTimestamp:(double)arg1 ;
-(void)setSegmentationBuffer:(CVBufferRef)arg1 ;
-(void)setEstimatedDepthData:(CVBufferRef)arg1 ;
-(void)setDepthConfidenceData:(CVBufferRef)arg1 ;
-(void)setDepthNormalData:(CVBufferRef)arg1 ;
-(void)setSemanticSegmentationBuffer:(CVBufferRef)arg1 ;
-(void)setDownSampledMattingPixelBuffer:(CVBufferRef)arg1 ;
-(void)setMattingScaleImagePixelBuffer:(CVBufferRef)arg1 ;
-(ARBody2D *)detectedBody;
-(void)setSpatialMappingDepthBuffer:(CVBufferRef)arg1 ;
-(id)raycastQueryFromPoint:(CGPoint)arg1 allowingTarget:(long long)arg2 alignment:(long long)arg3 ;
-(CGAffineTransform)displayTransformForOrientation:(long long)arg1 viewportSize:(CGSize)arg2 ;
-(ARPointCloud *)rawFeaturePoints;
-(void)_updatePredicted:(BOOL)arg1 ;
-(BOOL)referenceOriginTransformAvailable;
-(BOOL)referenceOriginTransformUpdated;
-(void)setReferenceOriginTransformUpdated:(BOOL)arg1 ;
-(BOOL)referenceOriginChanged;
-(void)setReferenceOriginChanged:(BOOL)arg1 ;
-(void)setReferenceOriginDelta:(SCD_Struct_AR1)arg1 ;
-(BOOL)referenceOriginDeltaAvailable;
-(void)setSessionOriginTransform:(SCD_Struct_AR1)arg1 ;
-(void)setWorldAlignmentTransform:(SCD_Struct_AR1)arg1 ;
-(SCD_Struct_AR1)gravityAlignedReferenceOriginTransform;
-(id<MTLTexture>)cameraGrainTexture;
-(void)setCapturedDepthData:(AVDepthData *)arg1 ;
-(double)capturedDepthDataTimestamp;
-(void)setCapturedDepthDataTimestamp:(double)arg1 ;
-(void)setFeaturePoints:(ARPointCloud *)arg1 ;
-(ARPointCloud *)referenceFeaturePoints;
-(void)setReferenceFeaturePoints:(ARPointCloud *)arg1 ;
-(NSArray *)cachedPointClouds;
-(void)setCachedPointClouds:(NSArray *)arg1 ;
-(SCD_Struct_AR1)referenceOriginDelta;
-(SCD_Struct_AR1)sessionOriginTransform;
-(void)setWorldTrackingErrorData:(ARWorldTrackingErrorData *)arg1 ;
-(ARLineCloud *)worldTrackingLineCloud;
-(void)setWorldTrackingLineCloud:(ARLineCloud *)arg1 ;
-(long long)renderFramesPerSecond;
-(void)setRenderFramesPerSecond:(long long)arg1 ;
-(BOOL)shouldRestrictFrameRate;
-(void)setShouldRestrictFrameRate:(BOOL)arg1 ;
-(ARRawSceneUnderstandingData *)rawSceneUnderstandingData;
-(void)setRawSceneUnderstandingData:(ARRawSceneUnderstandingData *)arg1 ;
-(double)estimatedLuminance;
-(void)setEstimatedLuminance:(double)arg1 ;
-(void)setResultDatas:(NSArray *)arg1 ;
-(CVBufferRef)downSampledMattingPixelBuffer;
-(void)setDetectedBodies:(NSArray *)arg1 ;
-(void)setCapturedPointCloudData:(ARPointCloud *)arg1 ;
-(CVBufferRef)depthConfidenceData;
-(CVBufferRef)depthNormalData;
-(CVBufferRef)semanticSegmentationBuffer;
-(CGImageRef)depthMap;
-(CVBufferRef)spatialMappingDepthBuffer;
-(id<MTLTexture>)imageNoiseTexture;
-(void)setImageNoiseTexture:(id<MTLTexture>)arg1 ;
-(float)imageNoiseIntensity;
-(void)setImageNoiseIntensity:(float)arg1 ;
@end

