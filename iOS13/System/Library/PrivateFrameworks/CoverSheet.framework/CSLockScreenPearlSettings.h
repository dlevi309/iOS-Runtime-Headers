/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <PrototypeTools/PTSettings.h>

@class CSLockScreenBiometricFailureSettings;

@interface CSLockScreenPearlSettings : PTSettings {

	BOOL _pearlDebugUIEnabled;
	BOOL _showScanningStateOnLockScreen;
	BOOL _showScanningStateDuringFaceDetect;
	BOOL _coachingDelaysUnlock;
	BOOL _spinBeforeCoaching;
	BOOL _overrideCoachingConditionEnabled;
	CSLockScreenBiometricFailureSettings* _failureSettings;
	double _minimumDurationBeforeShowingScanningState;
	double _minimumDurationBetweenLeavingCoachingAndCoaching;
	double _minimumDurationShowingCoaching;
	double _durationOnCameraCoveredGlyphBeforeCoaching;
	double _durationToSuppressCameraCoveredWhenWakingWithSmartCover;
	unsigned long long _overrideCoachingBiometricEvent;

}

@property (assign,nonatomic) BOOL pearlDebugUIEnabled;                                                    //@synthesize pearlDebugUIEnabled=_pearlDebugUIEnabled - In the implementation block
@property (nonatomic,retain) CSLockScreenBiometricFailureSettings * failureSettings;                      //@synthesize failureSettings=_failureSettings - In the implementation block
@property (assign,nonatomic) BOOL showScanningStateOnLockScreen;                                          //@synthesize showScanningStateOnLockScreen=_showScanningStateOnLockScreen - In the implementation block
@property (assign,nonatomic) BOOL showScanningStateDuringFaceDetect;                                      //@synthesize showScanningStateDuringFaceDetect=_showScanningStateDuringFaceDetect - In the implementation block
@property (assign,nonatomic) double minimumDurationBeforeShowingScanningState;                            //@synthesize minimumDurationBeforeShowingScanningState=_minimumDurationBeforeShowingScanningState - In the implementation block
@property (assign,nonatomic) double minimumDurationBetweenLeavingCoachingAndCoaching;                     //@synthesize minimumDurationBetweenLeavingCoachingAndCoaching=_minimumDurationBetweenLeavingCoachingAndCoaching - In the implementation block
@property (assign,nonatomic) double minimumDurationShowingCoaching;                                       //@synthesize minimumDurationShowingCoaching=_minimumDurationShowingCoaching - In the implementation block
@property (assign,nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;                           //@synthesize durationOnCameraCoveredGlyphBeforeCoaching=_durationOnCameraCoveredGlyphBeforeCoaching - In the implementation block
@property (assign,nonatomic) double durationToSuppressCameraCoveredWhenWakingWithSmartCover;              //@synthesize durationToSuppressCameraCoveredWhenWakingWithSmartCover=_durationToSuppressCameraCoveredWhenWakingWithSmartCover - In the implementation block
@property (assign,nonatomic) BOOL coachingDelaysUnlock;                                                   //@synthesize coachingDelaysUnlock=_coachingDelaysUnlock - In the implementation block
@property (assign,nonatomic) BOOL spinBeforeCoaching;                                                     //@synthesize spinBeforeCoaching=_spinBeforeCoaching - In the implementation block
@property (assign,nonatomic) BOOL overrideCoachingConditionEnabled;                                       //@synthesize overrideCoachingConditionEnabled=_overrideCoachingConditionEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long overrideCoachingBiometricEvent;                           //@synthesize overrideCoachingBiometricEvent=_overrideCoachingBiometricEvent - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)durationOnCameraCoveredGlyphBeforeCoaching;
-(void)setDurationOnCameraCoveredGlyphBeforeCoaching:(double)arg1 ;
-(void)setPearlDebugUIEnabled:(BOOL)arg1 ;
-(CSLockScreenBiometricFailureSettings *)failureSettings;
-(void)setShowScanningStateOnLockScreen:(BOOL)arg1 ;
-(void)setShowScanningStateDuringFaceDetect:(BOOL)arg1 ;
-(void)setMinimumDurationBeforeShowingScanningState:(double)arg1 ;
-(void)setMinimumDurationBetweenLeavingCoachingAndCoaching:(double)arg1 ;
-(void)setMinimumDurationShowingCoaching:(double)arg1 ;
-(void)setCoachingDelaysUnlock:(BOOL)arg1 ;
-(void)setSpinBeforeCoaching:(BOOL)arg1 ;
-(void)setDurationToSuppressCameraCoveredWhenWakingWithSmartCover:(double)arg1 ;
-(BOOL)showScanningStateOnLockScreen;
-(BOOL)showScanningStateDuringFaceDetect;
-(double)minimumDurationBeforeShowingScanningState;
-(double)minimumDurationBetweenLeavingCoachingAndCoaching;
-(double)minimumDurationShowingCoaching;
-(BOOL)coachingDelaysUnlock;
-(BOOL)spinBeforeCoaching;
-(double)durationToSuppressCameraCoveredWhenWakingWithSmartCover;
-(SCD_Struct_CS0)proudLockControllerViewControllerConfiguration;
-(BOOL)pearlDebugUIEnabled;
-(void)setFailureSettings:(CSLockScreenBiometricFailureSettings *)arg1 ;
-(BOOL)overrideCoachingConditionEnabled;
-(void)setOverrideCoachingConditionEnabled:(BOOL)arg1 ;
-(unsigned long long)overrideCoachingBiometricEvent;
-(void)setOverrideCoachingBiometricEvent:(unsigned long long)arg1 ;
@end

