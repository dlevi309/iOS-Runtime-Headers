/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary;

@interface BWCameraParameters : NSObject {

	NSDictionary* _cameraParameters;
	NSDictionary* _meteorParameters;
	NSDictionary* _motionAttachmentsParameters;
	NSDictionary* _videoStabilizationParameters;
	NSDictionary* _stereoDisparityParameters;
	NSDictionary* _landmarksParameters;
	NSDictionary* _learnedMattingParameters;
	NSDictionary* _coreImagePortraitFilterParameters;

}

@property (nonatomic,readonly) NSDictionary * cameraParameters;                          //@synthesize cameraParameters=_cameraParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * cameraTuningParameters; 
@property (nonatomic,readonly) NSDictionary * motionAttachmentsParameters;               //@synthesize motionAttachmentsParameters=_motionAttachmentsParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoStabilizationParameters;              //@synthesize videoStabilizationParameters=_videoStabilizationParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * stereoDisparityParameters; 
@property (nonatomic,readonly) int meteorHeadroomProcessingType; 
+(void)initialize;
+(id)sharedInstance;
+(id)sensorIDStringFromModuleInfo:(id)arg1 ;
+(id)sensorIDStringFromMetadata:(id)arg1 ;
-(BOOL)panoramaRequiresLTMLockingForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(NSDictionary *)motionAttachmentsParameters;
-(BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)disparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)focusPixelDisparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(NSDictionary *)stereoDisparityParameters;
-(id)init;
-(id)_initWithModelSpecificName:(id)arg1 ;
-(NSDictionary *)cameraTuningParameters;
-(id)portraitSceneMonitoringParametersForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)meteorHeadroomProcessingType;
-(id)sensorIDDictionaryForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)mattingVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)coreImagePortraitFilterVersion;
-(NSDictionary *)videoStabilizationParameters;
-(int)portraitSceneMonitorVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)sdofRenderingVersionForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)learnedMattingVersion;
-(SCD_Struct_BW57)landmarksVersionForInferenceType:(int)arg1 ;
-(unsigned)landmarksConstellationPointCountForInferenceType:(int)arg1 ;
-(NSDictionary *)cameraParameters;
-(id)focalLengthCharacterizationForStream:(id)arg1 ;
-(int)disparityRefinementTypeForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(BOOL)chromaticDefringingEnabledForVideoForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(int)disparityVersion;
-(BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
-(id)chromaticDefringingParametersForPortType:(id)arg1 sensorIDString:(id)arg2 ;
-(id)sensorIDDictionaryForStream:(id)arg1 ;
-(void)dealloc;
@end

