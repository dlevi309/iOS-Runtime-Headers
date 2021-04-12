/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARConfiguration.h>

@class ARWorldMap, NSSet, NSString, ARImageSensorSettings;

@interface ARWorldTrackingConfiguration : ARConfiguration {

	BOOL _wantsHDREnvironmentTextures;
	BOOL _automaticImageScaleEstimationEnabled;
	BOOL _collaborationEnabled;
	BOOL _userFaceTrackingEnabled;
	BOOL _relocalizationEnabled;
	BOOL _mlModelEnabled;
	BOOL _deliverRawSceneUnderstandingResults;
	BOOL _shouldUseUltraWideIfAvailable;
	BOOL _depthTemporalSmoothingEnabled;
	BOOL _depthOptimizedForStaticScene;
	BOOL _useSpatialMappingQualityMode;
	BOOL _alwaysUsePrimaryCameraForTracking;
	long long _environmentTexturing;
	unsigned long long _planeDetection;
	ARWorldMap* _initialWorldMap;
	NSSet* _detectionImages;
	long long _maximumNumberOfTrackedImages;
	NSSet* _detectionObjects;
	unsigned long long _sceneReconstruction;
	NSString* _slamConfiguration;
	double _minVergenceAngle;
	ARSpatialMappingParameters _spatialMappingParameters;

}

@property (assign,nonatomic) BOOL relocalizationEnabled;                                               //@synthesize relocalizationEnabled=_relocalizationEnabled - In the implementation block
@property (nonatomic,copy) NSString * slamConfiguration;                                               //@synthesize slamConfiguration=_slamConfiguration - In the implementation block
@property (assign,nonatomic) double minVergenceAngle;                                                  //@synthesize minVergenceAngle=_minVergenceAngle - In the implementation block
@property (assign,getter=isMLModelEnabled,nonatomic) BOOL mlModelEnabled;                              //@synthesize mlModelEnabled=_mlModelEnabled - In the implementation block
@property (assign,nonatomic) BOOL deliverRawSceneUnderstandingResults;                                 //@synthesize deliverRawSceneUnderstandingResults=_deliverRawSceneUnderstandingResults - In the implementation block
@property (assign,nonatomic) BOOL shouldUseUltraWideIfAvailable;                                       //@synthesize shouldUseUltraWideIfAvailable=_shouldUseUltraWideIfAvailable - In the implementation block
@property (nonatomic,readonly) ARImageSensorSettings * imageSensorSettingsForUltraWide; 
@property (assign,nonatomic) BOOL depthTemporalSmoothingEnabled;                                       //@synthesize depthTemporalSmoothingEnabled=_depthTemporalSmoothingEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthOptimizedForStaticScene;                                        //@synthesize depthOptimizedForStaticScene=_depthOptimizedForStaticScene - In the implementation block
@property (assign,nonatomic) ARSpatialMappingParameters spatialMappingParameters;                      //@synthesize spatialMappingParameters=_spatialMappingParameters - In the implementation block
@property (assign,nonatomic) BOOL useSpatialMappingQualityMode;                                        //@synthesize useSpatialMappingQualityMode=_useSpatialMappingQualityMode - In the implementation block
@property (assign,nonatomic) BOOL alwaysUsePrimaryCameraForTracking;                                   //@synthesize alwaysUsePrimaryCameraForTracking=_alwaysUsePrimaryCameraForTracking - In the implementation block
@property (assign,getter=isAutoFocusEnabled,nonatomic) BOOL autoFocusEnabled; 
@property (assign,nonatomic) long long environmentTexturing;                                           //@synthesize environmentTexturing=_environmentTexturing - In the implementation block
@property (assign,nonatomic) BOOL wantsHDREnvironmentTextures;                                         //@synthesize wantsHDREnvironmentTextures=_wantsHDREnvironmentTextures - In the implementation block
@property (assign,nonatomic) unsigned long long planeDetection;                                        //@synthesize planeDetection=_planeDetection - In the implementation block
@property (nonatomic,retain) ARWorldMap * initialWorldMap;                                             //@synthesize initialWorldMap=_initialWorldMap - In the implementation block
@property (nonatomic,copy) NSSet * detectionImages;                                                    //@synthesize detectionImages=_detectionImages - In the implementation block
@property (assign,nonatomic) BOOL automaticImageScaleEstimationEnabled;                                //@synthesize automaticImageScaleEstimationEnabled=_automaticImageScaleEstimationEnabled - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfTrackedImages;                                   //@synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages - In the implementation block
@property (nonatomic,copy) NSSet * detectionObjects;                                                   //@synthesize detectionObjects=_detectionObjects - In the implementation block
@property (assign,getter=isCollaborationEnabled,nonatomic) BOOL collaborationEnabled;                  //@synthesize collaborationEnabled=_collaborationEnabled - In the implementation block
@property (assign,getter=userFaceTrackingEnabled,nonatomic) BOOL userFaceTrackingEnabled;              //@synthesize userFaceTrackingEnabled=_userFaceTrackingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long sceneReconstruction;                                   //@synthesize sceneReconstruction=_sceneReconstruction - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
+(id)supportedVideoFormats;
+(BOOL)supportsUserFaceTracking;
+(id)supportedVideoFormatsForUserFaceTracking;
+(id)supportedVideoFormatsForUltraWide;
+(id)supportedVideoFormatsForJasper;
+(BOOL)supportsSceneReconstruction:(unsigned long long)arg1 ;
+(BOOL)supportsFrontCameraFaceAnchors;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaneDetection:(unsigned long long)arg1 ;
-(BOOL)wantsHDREnvironmentTextures;
-(long long)maximumNumberOfTrackedImages;
-(ARWorldMap *)initialWorldMap;
-(unsigned long long)planeDetection;
-(BOOL)isCollaborationEnabled;
-(long long)environmentTexturing;
-(NSSet *)detectionImages;
-(NSSet *)detectionObjects;
-(unsigned long long)sceneReconstruction;
-(BOOL)userFaceTrackingEnabled;
-(BOOL)automaticImageScaleEstimationEnabled;
-(void)createTechniques:(id)arg1 ;
-(id)parentImageSensorSettings;
-(id)imageSensorSettings;
-(id)secondaryTechniques;
-(ARImageSensorSettings *)imageSensorSettingsForUltraWide;
-(BOOL)shouldUseUltraWide;
-(NSString *)slamConfiguration;
-(BOOL)relocalizationEnabled;
-(BOOL)alwaysUsePrimaryCameraForTracking;
-(void)setSlamConfiguration:(NSString *)arg1 ;
-(void)setRelocalizationEnabled:(BOOL)arg1 ;
-(void)setInitialWorldMap:(ARWorldMap *)arg1 ;
-(double)minVergenceAngle;
-(void)setMinVergenceAngle:(double)arg1 ;
-(void)setMlModelEnabled:(BOOL)arg1 ;
-(BOOL)deliverRawSceneUnderstandingResults;
-(void)setDeliverRawSceneUnderstandingResults:(BOOL)arg1 ;
-(void)setCollaborationEnabled:(BOOL)arg1 ;
-(void)setSceneReconstruction:(unsigned long long)arg1 ;
-(ARSpatialMappingParameters)spatialMappingParameters;
-(void)setSpatialMappingParameters:(ARSpatialMappingParameters)arg1 ;
-(BOOL)useSpatialMappingQualityMode;
-(void)setUseSpatialMappingQualityMode:(BOOL)arg1 ;
-(void)setAlwaysUsePrimaryCameraForTracking:(BOOL)arg1 ;
-(BOOL)depthTemporalSmoothingEnabled;
-(long long)_depthPrioritization;
-(void)setMaximumNumberOfTrackedImages:(long long)arg1 ;
-(void)setWantsHDREnvironmentTextures:(BOOL)arg1 ;
-(id)imageSensorSettingsForUserFaceTracking;
-(id)depthSensorSettingsForJasper;
-(BOOL)shouldEnableVisionDataForImageSensorSettings:(id)arg1 ;
-(BOOL)shouldEnableCalibrationDataForImageSensorSettings:(id)arg1 ;
-(id)_trackingOptions;
-(BOOL)shouldUseJasper;
-(BOOL)isMLModelEnabled;
-(BOOL)depthOptimizedForStaticScene;
-(void)setUserFaceTrackingEnabled:(BOOL)arg1 ;
-(BOOL)shouldUseUltraWideIfAvailable;
-(void)setDetectionImages:(NSSet *)arg1 ;
-(void)setFrontCameraFaceAnchorsEnabled:(BOOL)arg1 ;
-(void)setEnvironmentTexturing:(long long)arg1 ;
-(void)setAutomaticImageScaleEstimationEnabled:(BOOL)arg1 ;
-(void)setDetectionObjects:(NSSet *)arg1 ;
-(void)setShouldUseUltraWideIfAvailable:(BOOL)arg1 ;
-(void)setDepthTemporalSmoothingEnabled:(BOOL)arg1 ;
-(void)setDepthOptimizedForStaticScene:(BOOL)arg1 ;
@end

