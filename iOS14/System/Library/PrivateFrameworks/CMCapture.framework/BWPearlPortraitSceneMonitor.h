/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWPortraitSceneMonitor.h>

@class NSString;

@interface BWPearlPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {

	int _numberOfFramesToWaitForAEAndLTMToStabilize;
	float _sdofDepthQualitySmoothingFactor;
	float _luxLevelSmoothingFactor;
	int _numberOfDisabledFramesInARow;
	int _numberOfFramesToStayEnabledThreshold;
	unsigned short _sdofTooBrightLuxLevelThreshold;
	unsigned short _sdofTooBrightMaxLuxLevelThreshold;
	float _sdofTooBrightDepthQualityMinThreshold;
	float _sdofDepthQualityKCount;
	float _sdofTooCloseDepthDistanceThreshold;
	float _sdofTooFarDepthDistanceThreshold;
	float _sdofTooBrightTooFarDepthDistanceThreshold;
	int _sdofNumberOfFramesSinceLastFaceThreshold;
	float _stageTooBrightDepthQualityThreshold;
	float _stageTooCloseDepthDistanceThreshold;
	float _stageTooFarDepthDistanceThreshold;
	float _stageBackgroundTooFarDepthQualityThreshold;
	unsigned short _stageBackgroundTooFarLuxLevelThreshold;
	int _stageFaceNumberOfFramesSinceLastFaceThreshold;
	BOOL _disablePreviewWhenTooBright;
	float _closeDepthDistanceAverage;
	float _sdofDepthQuality;
	float _sdofDepthQualityFiltered;
	float _stageDepthQuality;
	float _luxLevelFiltered;
	BOOL _aeStableAfterStartStreaming;
	int _sdofNumFramesSinceAEBecameStable;
	BOOL _portraitSceneMonitoringRequiresStageThresholds;
	BOOL _depthSensorOccluded;
	BOOL _stageFaceDetected;
	int _numberOfFramesSinceLastFace;
	BOOL _stageFaceHasBeenSeen;
	int _stageMostRecentFacesCount;

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

