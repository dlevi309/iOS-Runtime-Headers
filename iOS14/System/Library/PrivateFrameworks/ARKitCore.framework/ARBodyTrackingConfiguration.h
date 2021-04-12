/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARConfiguration.h>

@class ARWorldMap, NSSet, ARImageSensorSettings;

@interface ARBodyTrackingConfiguration : ARConfiguration {

	BOOL _wantsHDREnvironmentTextures;
	BOOL _automaticImageScaleEstimationEnabled;
	BOOL _automaticSkeletonScaleEstimationEnabled;
	BOOL _lowQosSchedulingEnabled;
	ARWorldMap* _initialWorldMap;
	long long _environmentTexturing;
	unsigned long long _planeDetection;
	NSSet* _detectionImages;
	long long _maximumNumberOfTrackedImages;

}

@property (nonatomic,readonly) ARImageSensorSettings * imageSensorSettingsForUltraWide; 
@property (assign,getter=isLowQosSchedulingEnabled,nonatomic) BOOL lowQosSchedulingEnabled;              //@synthesize lowQosSchedulingEnabled=_lowQosSchedulingEnabled - In the implementation block
@property (assign,getter=isAutoFocusEnabled,nonatomic) BOOL autoFocusEnabled; 
@property (nonatomic,retain) ARWorldMap * initialWorldMap;                                               //@synthesize initialWorldMap=_initialWorldMap - In the implementation block
@property (assign,nonatomic) long long environmentTexturing;                                             //@synthesize environmentTexturing=_environmentTexturing - In the implementation block
@property (assign,nonatomic) BOOL wantsHDREnvironmentTextures;                                           //@synthesize wantsHDREnvironmentTextures=_wantsHDREnvironmentTextures - In the implementation block
@property (assign,nonatomic) unsigned long long planeDetection;                                          //@synthesize planeDetection=_planeDetection - In the implementation block
@property (nonatomic,copy) NSSet * detectionImages;                                                      //@synthesize detectionImages=_detectionImages - In the implementation block
@property (assign,nonatomic) BOOL automaticImageScaleEstimationEnabled;                                  //@synthesize automaticImageScaleEstimationEnabled=_automaticImageScaleEstimationEnabled - In the implementation block
@property (assign,nonatomic) BOOL automaticSkeletonScaleEstimationEnabled;                               //@synthesize automaticSkeletonScaleEstimationEnabled=_automaticSkeletonScaleEstimationEnabled - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfTrackedImages;                                     //@synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(id)supportedVideoFormats;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
+(id)supportedVideoFormatsForUltraWide;
+(BOOL)supportsUserFaceTracking;
+(id)_querySupportedVideoFormatsForUltraWide;
-(id)init;
-(void)setPlaneDetection:(unsigned long long)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)planeDetection;
-(BOOL)wantsHDREnvironmentTextures;
-(long long)maximumNumberOfTrackedImages;
-(ARWorldMap *)initialWorldMap;
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
-(void)setLowQosSchedulingEnabled:(BOOL)arg1 ;
-(BOOL)shouldUseJasper;
-(void)setMaximumNumberOfTrackedImages:(long long)arg1 ;
-(void)setWantsHDREnvironmentTextures:(BOOL)arg1 ;
-(BOOL)shouldEnableVisionDataForImageSensorSettings:(id)arg1 ;
-(id)_trackingOptions;
-(BOOL)isLowQosSchedulingEnabled;
-(void)setDetectionImages:(NSSet *)arg1 ;
-(void)setEnvironmentTexturing:(long long)arg1 ;
-(void)setAutomaticImageScaleEstimationEnabled:(BOOL)arg1 ;
-(id)imageSensorSettingsForUserFaceTracking;
-(void)setAutomaticSkeletonScaleEstimationEnabled:(BOOL)arg1 ;
@end

