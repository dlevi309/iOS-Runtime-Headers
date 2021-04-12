/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARConfiguration.h>

@class ARWorldMap, NSSet, ARImageSensorSettings;

@interface ARBodyTrackingConfiguration : ARConfiguration {

	BOOL _wantsHDREnvironmentTextures;
	BOOL _automaticImageScaleEstimationEnabled;
	BOOL _automaticSkeletonScaleEstimationEnabled;
	ARWorldMap* _initialWorldMap;
	long long _environmentTexturing;
	unsigned long long _planeDetection;
	NSSet* _detectionImages;
	long long _maximumNumberOfTrackedImages;

}

@property (nonatomic,readonly) ARImageSensorSettings * imageSensorSettingsForUltraWide; 
@property (assign,getter=isAutoFocusEnabled,nonatomic) BOOL autoFocusEnabled; 
@property (nonatomic,retain) ARWorldMap * initialWorldMap;                                           //@synthesize initialWorldMap=_initialWorldMap - In the implementation block
@property (assign,nonatomic) long long environmentTexturing;                                         //@synthesize environmentTexturing=_environmentTexturing - In the implementation block
@property (assign,nonatomic) BOOL wantsHDREnvironmentTextures;                                       //@synthesize wantsHDREnvironmentTextures=_wantsHDREnvironmentTextures - In the implementation block
@property (assign,nonatomic) unsigned long long planeDetection;                                      //@synthesize planeDetection=_planeDetection - In the implementation block
@property (nonatomic,copy) NSSet * detectionImages;                                                  //@synthesize detectionImages=_detectionImages - In the implementation block
@property (assign,nonatomic) BOOL automaticImageScaleEstimationEnabled;                              //@synthesize automaticImageScaleEstimationEnabled=_automaticImageScaleEstimationEnabled - In the implementation block
@property (assign,nonatomic) BOOL automaticSkeletonScaleEstimationEnabled;                           //@synthesize automaticSkeletonScaleEstimationEnabled=_automaticSkeletonScaleEstimationEnabled - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfTrackedImages;                                 //@synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
+(id)supportedVideoFormats;
+(BOOL)supportsUserFaceTracking;
+(id)supportedVideoFormatsForUltraWide;
+(id)supportedVideoFormatsForJasper;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaneDetection:(unsigned long long)arg1 ;
-(BOOL)wantsHDREnvironmentTextures;
-(long long)maximumNumberOfTrackedImages;
-(ARWorldMap *)initialWorldMap;
-(unsigned long long)planeDetection;
-(long long)environmentTexturing;
-(NSSet *)detectionImages;
-(BOOL)userFaceTrackingEnabled;
-(BOOL)automaticImageScaleEstimationEnabled;
-(BOOL)automaticSkeletonScaleEstimationEnabled;
-(void)createTechniques:(id)arg1 ;
-(id)parentImageSensorSettings;
-(id)imageSensorSettings;
-(ARImageSensorSettings *)imageSensorSettingsForUltraWide;
-(BOOL)shouldUseUltraWide;
-(void)setInitialWorldMap:(ARWorldMap *)arg1 ;
-(void)setMaximumNumberOfTrackedImages:(long long)arg1 ;
-(void)setWantsHDREnvironmentTextures:(BOOL)arg1 ;
-(id)imageSensorSettingsForUserFaceTracking;
-(id)depthSensorSettingsForJasper;
-(BOOL)shouldEnableVisionDataForImageSensorSettings:(id)arg1 ;
-(BOOL)shouldEnableCalibrationDataForImageSensorSettings:(id)arg1 ;
-(id)_trackingOptions;
-(BOOL)shouldUseJasper;
-(void)setDetectionImages:(NSSet *)arg1 ;
-(void)setEnvironmentTexturing:(long long)arg1 ;
-(void)setAutomaticImageScaleEstimationEnabled:(BOOL)arg1 ;
-(void)setAutomaticSkeletonScaleEstimationEnabled:(BOOL)arg1 ;
@end

