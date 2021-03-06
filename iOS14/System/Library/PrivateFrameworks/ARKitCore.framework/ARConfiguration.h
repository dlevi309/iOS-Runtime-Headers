/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ARVideoFormat, NSArray, NSString, ARParentImageSensorSettings, ARImageSensorSettings;

@interface ARConfiguration : NSObject <NSCopying> {

	ARVideoFormat* _videoFormat;
	BOOL _providesAudioData;
	BOOL _smartPersonOcclusionEnabled;
	BOOL _autoFocusEnabled;
	BOOL _allowCameraInMultipleForegroundAppLayout;
	BOOL _disableOcclusionForPersonSegmentation;
	BOOL _mirroredFrameOutput;
	long long _worldAlignment;
	unsigned long long _frameSemantics;
	NSArray* _customSensors;
	unsigned long long _lightEstimation;
	unsigned long long _frameDebugOptions;
	long long _cameraPosition;
	NSString* _timeOfFlightProjectorMode;

}

@property (assign,nonatomic) BOOL smartPersonOcclusionEnabled;                                         //@synthesize smartPersonOcclusionEnabled=_smartPersonOcclusionEnabled - In the implementation block
@property (assign,getter=isAutoFocusEnabled,nonatomic) BOOL autoFocusEnabled;                          //@synthesize autoFocusEnabled=_autoFocusEnabled - In the implementation block
@property (nonatomic,readonly) NSString * deviceModel; 
@property (nonatomic,readonly) ARParentImageSensorSettings * parentImageSensorSettings; 
@property (nonatomic,readonly) ARImageSensorSettings * imageSensorSettings; 
@property (nonatomic,retain) NSArray * customSensors;                                                  //@synthesize customSensors=_customSensors - In the implementation block
@property (assign,nonatomic) unsigned long long lightEstimation;                                       //@synthesize lightEstimation=_lightEstimation - In the implementation block
@property (assign,nonatomic) unsigned long long frameDebugOptions;                                     //@synthesize frameDebugOptions=_frameDebugOptions - In the implementation block
@property (assign,nonatomic) long long cameraPosition;                                                 //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (assign,nonatomic) BOOL allowCameraInMultipleForegroundAppLayout;                            //@synthesize allowCameraInMultipleForegroundAppLayout=_allowCameraInMultipleForegroundAppLayout - In the implementation block
@property (assign,nonatomic) BOOL disableOcclusionForPersonSegmentation;                               //@synthesize disableOcclusionForPersonSegmentation=_disableOcclusionForPersonSegmentation - In the implementation block
@property (assign,nonatomic) BOOL mirroredFrameOutput;                                                 //@synthesize mirroredFrameOutput=_mirroredFrameOutput - In the implementation block
@property (nonatomic,readonly) id<ARReplaySensorProtocol> replaySensor; 
@property (nonatomic,retain) NSString * timeOfFlightProjectorMode;                                     //@synthesize timeOfFlightProjectorMode=_timeOfFlightProjectorMode - In the implementation block
@property (nonatomic,retain) ARVideoFormat * videoFormat;                                              //@synthesize videoFormat=_videoFormat - In the implementation block
@property (assign,nonatomic) long long worldAlignment;                                                 //@synthesize worldAlignment=_worldAlignment - In the implementation block
@property (assign,getter=isLightEstimationEnabled,nonatomic) BOOL lightEstimationEnabled; 
@property (assign,nonatomic) BOOL providesAudioData;                                                   //@synthesize providesAudioData=_providesAudioData - In the implementation block
@property (assign,nonatomic) unsigned long long frameSemantics;                                        //@synthesize frameSemantics=_frameSemantics - In the implementation block
+(BOOL)isSupported;
+(id)supportedVideoFormats;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
+(BOOL)supportsTimeOfFlightProjectorMode;
-(id)initPrivate;
-(NSString *)deviceModel;
-(long long)cameraPosition;
-(id)init;
-(void)setTimeOfFlightProjectorMode:(NSString *)arg1 ;
-(ARVideoFormat *)videoFormat;
-(void)setVideoFormat:(ARVideoFormat *)arg1 ;
-(void)setWorldAlignment:(long long)arg1 ;
-(void)setLightEstimationEnabled:(BOOL)arg1 ;
-(NSString *)timeOfFlightProjectorMode;
-(id)description;
-(unsigned long long)hash;
-(long long)_depthPrioritization;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(BOOL)isAutoFocusEnabled;
-(unsigned long long)frameSemantics;
-(void)setLightEstimation:(unsigned long long)arg1 ;
-(void)createTechniques:(id)arg1 ;
-(id<ARReplaySensorProtocol>)replaySensor;
-(long long)worldAlignment;
-(ARParentImageSensorSettings *)parentImageSensorSettings;
-(void)setAutoFocusEnabled:(BOOL)arg1 ;
-(ARImageSensorSettings *)imageSensorSettings;
-(void)setMirroredFrameOutput:(BOOL)arg1 ;
-(id)secondaryTechniques;
-(id)renderingTechnique;
-(BOOL)allowCameraInMultipleForegroundAppLayout;
-(id)techniques;
-(BOOL)providesAudioData;
-(void)setAllowCameraInMultipleForegroundAppLayout:(BOOL)arg1 ;
-(BOOL)shouldUseJasper;
-(id)_supportedVideoFormatsForJasper;
-(id)_querySupportedVideoFormatsForJasper;
-(unsigned long long)lightEstimation;
-(NSArray *)customSensors;
-(BOOL)smartPersonOcclusionEnabled;
-(BOOL)mirroredFrameOutput;
-(unsigned long long)frameDebugOptions;
-(BOOL)disableOcclusionForPersonSegmentation;
-(id)descriptionWithoutBrackets;
-(id)depthSensorSettingsForJasper;
-(void)setCustomSensors:(NSArray *)arg1 ;
-(BOOL)isLightEstimationEnabled;
-(void)setFrameSemantics:(unsigned long long)arg1 ;
-(BOOL)isKindOfConfiguration:(Class)arg1 ;
-(void)setProvidesAudioData:(BOOL)arg1 ;
-(void)setSmartPersonOcclusionEnabled:(BOOL)arg1 ;
-(void)setFrameDebugOptions:(unsigned long long)arg1 ;
-(void)setDisableOcclusionForPersonSegmentation:(BOOL)arg1 ;
@end

