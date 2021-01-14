/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWPortraitSceneMonitor <NSObject>
@property (assign,nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds; 
@property (nonatomic,readonly) float focusDistanceToMaxAllowedFocusDistanceRatio; 
@required
-(void)setAutoFocusInProgress:(BOOL)arg1 focusLocked:(BOOL)arg2 oneShotFocusScanInProgress:(BOOL)arg3;
-(void)focusScanDidComplete;
-(void)setPortraitSceneMonitoringRequiresStageThresholds:(BOOL)arg1;
-(void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(BOOL)arg7 faces:(id)arg8;
-(BOOL)resolveSDOFStatusWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(BOOL)arg4 digitalFlashWillFire:(BOOL)arg5 effectStatus:(int*)arg6 stagePreviewStatus:(int*)arg7;
-(BOOL)portraitSceneMonitoringRequiresStageThresholds;
-(float)focusDistanceToMaxAllowedFocusDistanceRatio;

@end

