/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString, NSArray;

@interface BWUBCaptureParameters : NSObject {

	NSString* _portType;
	double _lowLightEffectiveIntegrationTimeThreshold;
	double _sifrMainEffectiveIntegrationTimeThreshold;
	float _sifrGainThreshold;
	float _lowLightHDRWithoutSIFRISPDGainThreshold;
	double _longWithoutSphereEffectiveIntegrationTimeThreshold;
	double _deepFusionEffectiveIntegrationTimeThreshold;
	NSArray* _deepFusionHDREVZeroCountByEffectiveIntegrationTime;
	double _redSaturationMainEffectiveIntegrationTimeThreshold;
	float _redSaturationSIFRGainThreshold;
	int _toneCurveBehavior;
	BOOL _preserveBlackLevel;
	NSArray* _afWindowParams;
	int _maxNumberOfFramesForAdaptiveBracketing;
	double _digitalFlashAvailableEffectiveIntegrationTimeThreshold;
	double _digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
	double _stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
	float _digitalFlashRecommendRegularFlashSNRThreshold;
	float _digitalFlashBacklitRecommendRegularFlashSNRThreshold;
	float _digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
	BOOL _digitalFlashHighlightRecoveryEnabled;
	int _referenceFrameSelectionMethod;
	BOOL _usePreviousSIFR;
	NSArray* _motionAndFocusScoreWeights;

}

@property (nonatomic,readonly) double lowLightEffectiveIntegrationTimeThreshold;                       //@synthesize lowLightEffectiveIntegrationTimeThreshold=_lowLightEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) double sifrMainEffectiveIntegrationTimeThreshold;                       //@synthesize sifrMainEffectiveIntegrationTimeThreshold=_sifrMainEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) float sifrGainThreshold;                                                //@synthesize sifrGainThreshold=_sifrGainThreshold - In the implementation block
@property (nonatomic,readonly) float lowLightHDRWithoutSIFRISPDGainThreshold;                          //@synthesize lowLightHDRWithoutSIFRISPDGainThreshold=_lowLightHDRWithoutSIFRISPDGainThreshold - In the implementation block
@property (nonatomic,readonly) double longWithoutSphereEffectiveIntegrationTimeThreshold;              //@synthesize longWithoutSphereEffectiveIntegrationTimeThreshold=_longWithoutSphereEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) double deepFusionEffectiveIntegrationTimeThreshold;                     //@synthesize deepFusionEffectiveIntegrationTimeThreshold=_deepFusionEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) double redSaturationMainEffectiveIntegrationTimeThreshold;              //@synthesize redSaturationMainEffectiveIntegrationTimeThreshold=_redSaturationMainEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) float redSaturationSIFRGainThreshold;                                   //@synthesize redSaturationSIFRGainThreshold=_redSaturationSIFRGainThreshold - In the implementation block
@property (nonatomic,readonly) int toneCurveBehavior;                                                  //@synthesize toneCurveBehavior=_toneCurveBehavior - In the implementation block
@property (nonatomic,readonly) BOOL preserveBlackLevel;                                                //@synthesize preserveBlackLevel=_preserveBlackLevel - In the implementation block
@property (nonatomic,readonly) NSArray * afWindowParams;                                               //@synthesize afWindowParams=_afWindowParams - In the implementation block
-(double)stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
-(int)maxNumberOfFramesForAdaptiveBracketing;
-(int)referenceFrameSelectionMethod;
-(BOOL)usePreviousSIFR;
-(float)digitalFlashBacklitRecommendRegularFlashSNRThreshold;
-(double)redSaturationMainEffectiveIntegrationTimeThreshold;
-(double)digitalFlashAvailableEffectiveIntegrationTimeThreshold;
-(double)lowLightEffectiveIntegrationTimeThreshold;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(double)longWithoutSphereEffectiveIntegrationTimeThreshold;
-(id)description;
-(int)deepFusionHDREVZeroCountForEffectiveIntegrationTime:(double)arg1 ;
-(int)toneCurveBehavior;
-(NSArray *)afWindowParams;
-(float)sifrGainThreshold;
-(double)sifrMainEffectiveIntegrationTimeThreshold;
-(float)redSaturationSIFRGainThreshold;
-(float)digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
-(float)lowLightHDRWithoutSIFRISPDGainThreshold;
-(id)motionAndFocusScoreWeights;
-(BOOL)preserveBlackLevel;
-(double)digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
-(double)deepFusionEffectiveIntegrationTimeThreshold;
-(float)digitalFlashRecommendRegularFlashSNRThreshold;
-(void)dealloc;
-(BOOL)digitalFlashHighlightRecoveryEnabled;
@end

