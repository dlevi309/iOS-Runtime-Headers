/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWPortraitSceneMonitor.h>

@class NSArray, NSString;

@interface BWBravoPortraitSceneMonitorV2 : NSObject <BWPortraitSceneMonitor> {

	int _numberOfFramesWithStableFocusThreshold;
	BOOL _oneShotFocusScanInProgress;
	BOOL _focusLocked;
	int _numFramesSinceFocusLocked;
	int _numFramesSinceFocusBecameStable;
	BOOL _focusHasBeenAttainedAfterStart;
	int _numFramesSinceFocusFirstAttainedStability;
	BOOL _focusIsStationaryBeyondThreshold;
	BOOL _subjectTooCloseMonitoringEnabled;
	BOOL _subjectTooCloseMonitoringForcingWideLens;
	float _subjectTooCloseFocusDistanceThreshold;
	float _subjectTooCloseHysteresis;
	BOOL _subjectIsTooClose;
	BOOL _subjectTooClosePreviousFrame;
	BOOL _subjectTooFarMonitoringEnabled;
	float _subjectTooFarFocusDistanceThreshold;
	float _subjectTooFarBackgroundShiftSumTooLowThreshold;
	BOOL _subjectTooFarDistanceThresholdReached;
	float _subjectTooFarDistanceThresholdHysteresis;
	BOOL _backgroundShiftSumTooLowThresholdReached;
	float _subjectTooFarBackGroundShiftSumIsTooLowHysteresis;
	float _jasperDistanceAtFocus;
	BOOL _subjectIsTooFarDigitalFlash;
	BOOL _subjectIsTooFarForStageDigitalFlash;
	float _subjectTooFarDigitalFlashThreshold;
	float _stageTooFarDigitalFlashThreshold;
	float _sceneTooDarkGainThresholdHard;
	float _jasperDistanceAtFocusSmoothingFactor;
	BOOL _subjectIsTooFar;
	BOOL _subjectIsTooFarForStage;
	BOOL _subjectIsTooFarForStageNoFaces;
	BOOL _deliveryOfShiftsHasStarted;
	float _backgroundShiftSumSmoothed;
	float _backgroundShiftSumSmoothingTrend;
	float _backgroundShiftSumSmoothingFactor;
	float _backgroundShiftSumSmoothingTrendUpdateFactor;
	float _invalidShiftRatioSmoothed;
	float _invalidShiftRatioSmoothingFactor;
	BOOL _sceneTooDarkMonitoringEnabled;
	float _sceneTooDarkGainThreshold;
	float _sceneTooDarkAEAverageAETargetFractionThreshold;
	float _sceneTooDarkAEAverageAETargetFractionThresholdHysteresisLag;
	BOOL _sceneIsTooDark;
	BOOL _stageFaceMonitoringEnabled;
	int _stageFaceNumberOfFramesSinceLastFace;
	BOOL _stageFaceHasBeenSeen;
	int _stageFaceNumberOfFramesSinceLastFaceThreshold;
	NSArray* _stageMostRecentFaces;
	BOOL _portraitSceneMonitoringRequiresStageThresholds;
	BOOL _stageTooFarMonitoringEnabled;
	float _stageTooFarFocusDistanceThreshold;
	BOOL _stageTooFarDistanceThresholdReached;
	float _stageTooFarDistanceThresholdHysteresis;
	BOOL _stageBackgroundShiftSumTooLowThresholdReached;
	float _stageTooFarBackgroundShiftSumTooLowThreshold;
	float _stageTooFarBackGroundShiftSumIsTooLowHysteresis;
	BOOL _stageTooFarBackgroundShiftSumNoFacesIsTooLow;
	float _stageTooFarBackgroundShiftSumNoFacesThreshold;
	int _lastSDOFEffectStatus;

}

@property (assign,nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds;              //@synthesize portraitSceneMonitoringRequiresStageThresholds=_portraitSceneMonitoringRequiresStageThresholds - In the implementation block
@property (nonatomic,readonly) float focusDistanceToMaxAllowedFocusDistanceRatio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setAutoFocusInProgress:(BOOL)arg1 focusLocked:(BOOL)arg2 oneShotFocusScanInProgress:(BOOL)arg3 ;
-(void)focusScanDidComplete;
-(void)setPortraitSceneMonitoringRequiresStageThresholds:(BOOL)arg1 ;
-(void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(BOOL)arg7 faces:(id)arg8 ;
-(BOOL)resolveSDOFStatusWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(BOOL)arg4 digitalFlashWillFire:(BOOL)arg5 effectStatus:(int*)arg6 stagePreviewStatus:(int*)arg7 ;
-(BOOL)portraitSceneMonitoringRequiresStageThresholds;
-(float)focusDistanceToMaxAllowedFocusDistanceRatio;
-(id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(BOOL)arg2 ;
-(void)doubleExponentialSmoothing:(float)arg1 smoothValue:(float*)arg2 trendValue:(float*)arg3 dataFactor:(float)arg4 trendFactor:(float)arg5 ;
-(void)dealloc;
@end

