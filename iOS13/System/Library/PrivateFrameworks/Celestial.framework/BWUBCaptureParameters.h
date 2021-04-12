/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
	BOOL _useSquareRootToneCurveForHDRDisabled;
	BOOL _preserveBlackLevel;
	id _afWindowParams;
	int _maxNumberOfFramesForAdaptiveBracketing;
	double _digitalFlashAvailableEffectiveIntegrationTimeThreshold;
	double _digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
	double _stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
	float _digitalFlashRecommendRegularFlashSNRThreshold;
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
@property (nonatomic,readonly) BOOL useSquareRootToneCurveForHDRDisabled;                              //@synthesize useSquareRootToneCurveForHDRDisabled=_useSquareRootToneCurveForHDRDisabled - In the implementation block
@property (nonatomic,readonly) BOOL preserveBlackLevel;                                                //@synthesize preserveBlackLevel=_preserveBlackLevel - In the implementation block
@property (nonatomic,readonly) id afWindowParams;                                                      //@synthesize afWindowParams=_afWindowParams - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(int)deepFusionHDREVZeroCountForEffectiveIntegrationTime:(double)arg1 ;
-(int)maxNumberOfFramesForAdaptiveBracketing;
-(double)digitalFlashAvailableEffectiveIntegrationTimeThreshold;
-(double)digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
-(double)stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
-(float)digitalFlashRecommendRegularFlashSNRThreshold;
-(int)referenceFrameSelectionMethod;
-(BOOL)usePreviousSIFR;
-(id)motionAndFocusScoreWeights;
-(double)lowLightEffectiveIntegrationTimeThreshold;
-(double)sifrMainEffectiveIntegrationTimeThreshold;
-(float)sifrGainThreshold;
-(float)lowLightHDRWithoutSIFRISPDGainThreshold;
-(double)longWithoutSphereEffectiveIntegrationTimeThreshold;
-(double)deepFusionEffectiveIntegrationTimeThreshold;
-(double)redSaturationMainEffectiveIntegrationTimeThreshold;
-(float)redSaturationSIFRGainThreshold;
-(BOOL)useSquareRootToneCurveForHDRDisabled;
-(BOOL)preserveBlackLevel;
-(id)afWindowParams;
@end

