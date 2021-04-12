/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_semaphore;
@class NSMutableDictionary, NSObject, NSString, ARImageSensorSettings, ARWorldMap, NSNumber, NSDictionary;

@interface ARWorldTrackingOptions : NSObject <NSCopying> {

	NSMutableDictionary* _activeVideoFormatsMap;
	NSObject*<OS_dispatch_semaphore> _activeVideoFormatsSemaphore;
	NSString* _slamConfigurationPreset;
	BOOL _relocalizationEnabled;
	BOOL _deterministicMode;
	BOOL _mlModelEnabled;
	BOOL _deliverRawSceneUnderstandingResults;
	BOOL _collaborationEnabled;
	BOOL _depthBuffersWillBeProvided;
	BOOL _planeEstimationShouldUseJasperData;
	BOOL _useSpatialMappingQualityMode;
	BOOL _alwaysUsePrimaryCameraForTracking;
	ARImageSensorSettings* _imageSensorSettings;
	ARImageSensorSettings* _imageSensorSettingsForUltraWide;
	NSString* _deviceModel;
	ARWorldMap* _initialWorldMap;
	unsigned long long _planeDetection;
	double _minVergenceAngle;
	unsigned long long _sceneReconstruction;
	NSNumber* _vioSessionID;
	ARSpatialMappingParameters _spatialMappingParameters;

}

@property (nonatomic,copy) ARImageSensorSettings * imageSensorSettings;                            //@synthesize imageSensorSettings=_imageSensorSettings - In the implementation block
@property (nonatomic,copy) ARImageSensorSettings * imageSensorSettingsForUltraWide;                //@synthesize imageSensorSettingsForUltraWide=_imageSensorSettingsForUltraWide - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;                                                 //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) BOOL relocalizationEnabled;                                           //@synthesize relocalizationEnabled=_relocalizationEnabled - In the implementation block
@property (nonatomic,copy) ARWorldMap * initialWorldMap;                                           //@synthesize initialWorldMap=_initialWorldMap - In the implementation block
@property (nonatomic,copy) NSString * slamConfiguration; 
@property (assign,nonatomic) BOOL deterministicMode;                                               //@synthesize deterministicMode=_deterministicMode - In the implementation block
@property (assign,nonatomic) unsigned long long planeDetection;                                    //@synthesize planeDetection=_planeDetection - In the implementation block
@property (assign,nonatomic) double minVergenceAngle;                                              //@synthesize minVergenceAngle=_minVergenceAngle - In the implementation block
@property (assign,nonatomic) BOOL mlModelEnabled;                                                  //@synthesize mlModelEnabled=_mlModelEnabled - In the implementation block
@property (assign,nonatomic) BOOL deliverRawSceneUnderstandingResults;                             //@synthesize deliverRawSceneUnderstandingResults=_deliverRawSceneUnderstandingResults - In the implementation block
@property (assign,getter=isCollaborationEnabled,nonatomic) BOOL collaborationEnabled;              //@synthesize collaborationEnabled=_collaborationEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthBuffersWillBeProvided;                                      //@synthesize depthBuffersWillBeProvided=_depthBuffersWillBeProvided - In the implementation block
@property (assign,nonatomic) unsigned long long sceneReconstruction;                               //@synthesize sceneReconstruction=_sceneReconstruction - In the implementation block
@property (assign,nonatomic) BOOL planeEstimationShouldUseJasperData;                              //@synthesize planeEstimationShouldUseJasperData=_planeEstimationShouldUseJasperData - In the implementation block
@property (assign,nonatomic) ARSpatialMappingParameters spatialMappingParameters;                  //@synthesize spatialMappingParameters=_spatialMappingParameters - In the implementation block
@property (assign,nonatomic) BOOL useSpatialMappingQualityMode;                                    //@synthesize useSpatialMappingQualityMode=_useSpatialMappingQualityMode - In the implementation block
@property (nonatomic,readonly) NSDictionary * activeVideoFormatsMap; 
@property (assign,nonatomic) BOOL alwaysUsePrimaryCameraForTracking;                               //@synthesize alwaysUsePrimaryCameraForTracking=_alwaysUsePrimaryCameraForTracking - In the implementation block
@property (nonatomic,retain) NSNumber * vioSessionID;                                              //@synthesize vioSessionID=_vioSessionID - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setPlaneDetection:(unsigned long long)arg1 ;
-(BOOL)deterministicMode;
-(ARWorldMap *)initialWorldMap;
-(unsigned long long)planeDetection;
-(BOOL)isCollaborationEnabled;
-(unsigned long long)sceneReconstruction;
-(id)initWithImageSensorSettings:(id)arg1 ;
-(void)setDeterministicMode:(BOOL)arg1 ;
-(ARImageSensorSettings *)imageSensorSettings;
-(void)setImageSensorSettings:(ARImageSensorSettings *)arg1 ;
-(void)updateCameraMap;
-(ARImageSensorSettings *)imageSensorSettingsForUltraWide;
-(unsigned)cameraIdForCaptureDeviceType:(id)arg1 ;
-(BOOL)shouldUseUltraWide;
-(int)setupCameraCalibration:(CV3DSLAMCalibration*)arg1 forImageSensorSettings:(id)arg2 deviceModel:(int)arg3 ;
-(NSString *)slamConfiguration;
-(BOOL)relocalizationEnabled;
-(BOOL)alwaysUsePrimaryCameraForTracking;
-(NSNumber *)vioSessionID;
-(void)setSlamConfiguration:(NSString *)arg1 ;
-(void)setImageSensorSettingsForUltraWide:(ARImageSensorSettings *)arg1 ;
-(NSDictionary *)activeVideoFormatsMap;
-(int)createSLAMCalibration:(CV3DSLAMCalibration*)arg1 ;
-(void)createSLAMConfig:(CV3DSLAMConfig*)arg1 ;
-(void)setRelocalizationEnabled:(BOOL)arg1 ;
-(void)setInitialWorldMap:(ARWorldMap *)arg1 ;
-(double)minVergenceAngle;
-(void)setMinVergenceAngle:(double)arg1 ;
-(BOOL)mlModelEnabled;
-(void)setMlModelEnabled:(BOOL)arg1 ;
-(BOOL)deliverRawSceneUnderstandingResults;
-(void)setDeliverRawSceneUnderstandingResults:(BOOL)arg1 ;
-(void)setCollaborationEnabled:(BOOL)arg1 ;
-(BOOL)depthBuffersWillBeProvided;
-(void)setDepthBuffersWillBeProvided:(BOOL)arg1 ;
-(void)setSceneReconstruction:(unsigned long long)arg1 ;
-(BOOL)planeEstimationShouldUseJasperData;
-(void)setPlaneEstimationShouldUseJasperData:(BOOL)arg1 ;
-(ARSpatialMappingParameters)spatialMappingParameters;
-(void)setSpatialMappingParameters:(ARSpatialMappingParameters)arg1 ;
-(BOOL)useSpatialMappingQualityMode;
-(void)setUseSpatialMappingQualityMode:(BOOL)arg1 ;
-(void)setAlwaysUsePrimaryCameraForTracking:(BOOL)arg1 ;
-(void)setVioSessionID:(NSNumber *)arg1 ;
@end

