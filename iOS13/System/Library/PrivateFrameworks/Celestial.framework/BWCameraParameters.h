/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSDictionary;

@interface BWCameraParameters : NSObject {

	NSDictionary* _cameraParameters;
	NSDictionary* _motionAttachmentsParameters;
	NSDictionary* _videoStabilizationParameters;
	NSDictionary* _stereoDisparityParameters;

}

@property (nonatomic,readonly) NSDictionary * cameraParameters;                          //@synthesize cameraParameters=_cameraParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * cameraTuningParameters; 
@property (nonatomic,readonly) NSDictionary * motionAttachmentsParameters;               //@synthesize motionAttachmentsParameters=_motionAttachmentsParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoStabilizationParameters;              //@synthesize videoStabilizationParameters=_videoStabilizationParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * stereoDisparityParameters;                 //@synthesize stereoDisparityParameters=_stereoDisparityParameters - In the implementation block
+(void)initialize;
+(id)sharedInstance;
+(id)sensorIDStringFromModuleInfo:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)motionAttachmentsParameters;
-(BOOL)panoramaRequiresLTMLockingForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(id)_initWithModelSpecificName:(id)arg1 ;
-(id)sensorIDDictionaryForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(NSDictionary *)cameraTuningParameters;
-(id)sensorIDDictionaryForStream:(OpaqueFigCaptureStreamRef)arg1 ;
-(id)portraitSceneMonitoringParametersForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(id)focalLengthCharacterizationForStream:(OpaqueFigCaptureStreamRef)arg1 ;
-(int)disparityVersion;
-(int)disparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)focusPixelDisparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)mattingVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)portraitSceneMonitorVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(BOOL)disparityRefinementEnabledForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(BOOL)chromaticDefringingEnabledForVideoForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(id)chromaticDefringingParametersForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(double)overCaptureGatingEffectiveIntegrationTimeThresholdForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(NSDictionary *)cameraParameters;
-(NSDictionary *)videoStabilizationParameters;
-(NSDictionary *)stereoDisparityParameters;
@end

