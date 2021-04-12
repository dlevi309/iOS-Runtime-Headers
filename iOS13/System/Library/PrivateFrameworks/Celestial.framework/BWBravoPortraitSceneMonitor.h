/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds;              //@synthesize portraitSceneMonitoringRequiresStageThresholds=_portraitSceneMonitoringRequiresStageThresholds - In the implementation block
@property (nonatomic,readonly) float focusDistanceToMaxAllowedFocusDistanceRatio; 
+(void)initialize;
-(void)dealloc;
-(void)setAutoFocusInProgress:(BOOL)arg1 focusLocked:(BOOL)arg2 oneShotFocusScanInProgress:(BOOL)arg3 ;
-(void)focusScanDidComplete;
-(void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(BOOL)arg7 faces:(id)arg8 ;
-(BOOL)resolveSDOFStatusWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(BOOL)arg4 effectStatus:(int*)arg5 stagePreviewStatus:(int*)arg6 ;
-(BOOL)portraitSceneMonitoringRequiresStageThresholds;
-(void)setPortraitSceneMonitoringRequiresStageThresholds:(BOOL)arg1 ;
-(float)focusDistanceToMaxAllowedFocusDistanceRatio;
-(id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(BOOL)arg2 ;
@end

