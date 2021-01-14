/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWPortraitSceneMonitor.h>

@class NSArray, NSString;

@interface BWBravoPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {

	float _backgroundShiftSumFiltered;
	float _invalidShiftRatioFiltered;
	BOOL _oneShotFocusScanInProgress;
	BOOL _focusLocked;
	int _numFramesSinceFocusLocked;
	BOOL _focusStableAfterStartStreaming;
	BOOL _focusAdjusting;
	int _lastFocusingMethod;
	int _numFramesSinceFocusBecameStable;
	BOOL _aeStableAfterStartStreaming;
	int _numFramesSinceAEBecameStable;
	BOOL _useLensMakersFocusDistance;
	BOOL _subjectTooCloseMonitoringEnabled;
	BOOL _subjectIsTooClose;
	float _subjectTooCloseWideFocusDistanceThreshold;
	float _subjectTooCloseWideFocusDistanceHysteresisLag;
	int _subjectTooCloseLastWideFocusPosition;
	BOOL _subjectTooFarMonitoringEnabled;
	BOOL _subjectTooFarDistanceThresholdReached;
	float _subjectTooFarFocusDistanceThreshold;
	float _subjectTooFarFocusDistanceHysteresisLag;
	float _subjectTooFarFocusDistanceInfinityThreshold;
	BOOL _subjectTooFarUseTeleForFocusDistance;
	BOOL _subjectTooFarBackgroundShiftSumIsTooLow;
	int _subjectTooFarBackgroundShiftTooLowNumFrames;
	float _subjectTooFarBackgroundShiftSumTooLowThreshold;
	float _subjectTooFarBackgroundShiftSumTooLowHysteresisLag;
	float _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioStart;
	float _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioEnd;
	int _subjectTooFarLastTeleFocusPosition;
	BOOL _sceneTooDarkMonitoringEnabled;
	BOOL _sceneIsTooDark;
	BOOL _sceneTooDarkExposureThresholdReached;
	float _sceneTooDarkGainThreshold;
	float _sceneTooDarkGainHysteresisLag;
	float _sceneTooDarkInvalidShiftRatioThreshold;
	float _sceneTooDarkInvalidShiftRatioHysteresisLag;
	BOOL _stageFaceMonitoringEnabled;
	BOOL _stageFaceDetected;
	int _stageFaceNumberOfFramesSinceLastFace;
	BOOL _stageFaceHasBeenSeen;
	int _stageFaceNumberOfFramesSinceLastFaceThreshold;
	NSArray* _stageMostRecentFaces;
	BOOL _portraitSceneMonitoringRequiresStageThresholds;
	float _stageTooFarFocusDistanceThreshold;
	BOOL _stageSubjectTooFarDistanceThresholdReached;
	int _stageTooFarBackgroundShiftTooLowNumFrames;
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
-(void)dealloc;
@end

