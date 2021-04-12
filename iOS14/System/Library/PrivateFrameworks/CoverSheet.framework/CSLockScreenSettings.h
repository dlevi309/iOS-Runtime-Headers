/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@class PTOutlet, CSBounceSettings, CSLockScreenPasscodeSettings, CSLockScreenChargingSettings, CSLockScreenMesaSettings, CSLockScreenPearlSettings, CSCoverSheetTransitionsSettings, CSHorizontalScrollFailureRecognizerSettings, CSDashBoardScrollModifierSettings, CSDashBoardNotificationVersusPagingScrollSettings, CSDashBoardQuickActionsButtonSettings, CSDashBoardRemoteContentSettings, CSCoverSheetDismissGestureSettings, SBFAnimationSettings, CSLockScreenTestPluginSettings;

@interface CSLockScreenSettings : PTSettings {

	BOOL _autoDismissUnlockedLockScreen;
	BOOL _showNowPlaying;
	BOOL _showUserPicture;
	BOOL _showLogoutButton;
	BOOL _showThermalTrap;
	BOOL _showBlockedUI;
	BOOL _showResetRestore;
	BOOL _showEmergencyDialer;
	BOOL _showRegionsDebugView;
	BOOL _alwaysPutPluginsBelowScrollView;
	BOOL _killsInsecureDrawingApps;
	BOOL _prewarmsCameraHardwareOnSwipe;
	BOOL _prewarmsCameraHardwareOnTap;
	BOOL _prelaunchesCameraAppOnSwipe;
	BOOL _prelaunchesCameraAppOnTap;
	double _minTouchIDDuration;
	double _idleUntilShimmerDuration;
	double _restToOpenDuration;
	double _restToOpenIdleDuration;
	PTOutlet* _addNotificationOutlet;
	CSBounceSettings* _verticalBounceSettings;
	CSBounceSettings* _horizontalBounceSettings;
	CSLockScreenPasscodeSettings* _passcodeSettings;
	CSLockScreenChargingSettings* _chargingSettings;
	CSLockScreenMesaSettings* _mesaSettings;
	CSLockScreenPearlSettings* _pearlSettings;
	CSCoverSheetTransitionsSettings* _coverSheetTransitionsSettings;
	CSHorizontalScrollFailureRecognizerSettings* _horizontalScrollFailureRecognizerSettings;
	CSDashBoardScrollModifierSettings* _dashBoardScrollModifierSettings;
	CSDashBoardNotificationVersusPagingScrollSettings* _dashBoardNotificationScrollSettings;
	CSDashBoardQuickActionsButtonSettings* _dashBoardQuickActionButtonSettings;
	CSDashBoardRemoteContentSettings* _dashBoardRemoteContentSettings;
	CSCoverSheetDismissGestureSettings* _coverSheetDismissGestureSettings;
	SBFAnimationSettings* _unlockToPhoneWallpaperOutSettings;
	SBFAnimationSettings* _unlockToPhoneWallpaperInSettings;
	SBFAnimationSettings* _unlockWallpaperOutSettings;
	SBFAnimationSettings* _unlockWallpaperInSettings;
	CSLockScreenTestPluginSettings* _testPluginSettings;
	double _nowPlayingHeight;
	double _mainToCameraViewSlideCompletionPercentage;
	double _mainToTodayViewSlideCompletionPercentage;
	double _unlockSlideForIdleTimerDisabledPercentage;
	double _unlockSlideForIdleTimerDisabledPercentageIPad;
	double _notificationScrollForIdleTimerDisabledOffset;
	double _notificationScrollForIdleTimerDisabledOffsetIPad;
	double _appGrabberSlideUpVelocityThreshold;
	double _unlockPasscodeThreshold;
	double _unlockRubberBandThreshold;
	double _unlockRubberBandFeedbackInterval;
	long long _unlockRubberBandFeedbackIntensity;
	double _lockJiggleHapticDelay;
	double _lockJiggleAnimationDelay;
	double _unlockSwipeWallpaperAlpha;
	double _cameraPrewarmThresholdOnSwipe;
	double _cameraPrelaunchThresholdOnSwipe;
	double _cameraPrewarmDebounceTimeInterval;
	double _cameraPrewarmAutoCancelTimeInterval;

}

@property (assign) double minTouchIDDuration;                                                                            //@synthesize minTouchIDDuration=_minTouchIDDuration - In the implementation block
@property (assign) double idleUntilShimmerDuration;                                                                      //@synthesize idleUntilShimmerDuration=_idleUntilShimmerDuration - In the implementation block
@property (assign) double restToOpenDuration;                                                                            //@synthesize restToOpenDuration=_restToOpenDuration - In the implementation block
@property (assign) double restToOpenIdleDuration;                                                                        //@synthesize restToOpenIdleDuration=_restToOpenIdleDuration - In the implementation block
@property (assign) BOOL autoDismissUnlockedLockScreen;                                                                   //@synthesize autoDismissUnlockedLockScreen=_autoDismissUnlockedLockScreen - In the implementation block
@property (assign) BOOL showNowPlaying;                                                                                  //@synthesize showNowPlaying=_showNowPlaying - In the implementation block
@property (assign) BOOL showUserPicture;                                                                                 //@synthesize showUserPicture=_showUserPicture - In the implementation block
@property (assign) BOOL showLogoutButton;                                                                                //@synthesize showLogoutButton=_showLogoutButton - In the implementation block
@property (assign) BOOL showThermalTrap;                                                                                 //@synthesize showThermalTrap=_showThermalTrap - In the implementation block
@property (assign) BOOL showBlockedUI;                                                                                   //@synthesize showBlockedUI=_showBlockedUI - In the implementation block
@property (assign) BOOL showResetRestore;                                                                                //@synthesize showResetRestore=_showResetRestore - In the implementation block
@property (assign) BOOL showEmergencyDialer;                                                                             //@synthesize showEmergencyDialer=_showEmergencyDialer - In the implementation block
@property (assign) BOOL showRegionsDebugView;                                                                            //@synthesize showRegionsDebugView=_showRegionsDebugView - In the implementation block
@property (retain) PTOutlet * addNotificationOutlet;                                                                     //@synthesize addNotificationOutlet=_addNotificationOutlet - In the implementation block
@property (retain) CSBounceSettings * verticalBounceSettings;                                                            //@synthesize verticalBounceSettings=_verticalBounceSettings - In the implementation block
@property (retain) CSBounceSettings * horizontalBounceSettings;                                                          //@synthesize horizontalBounceSettings=_horizontalBounceSettings - In the implementation block
@property (retain) CSLockScreenPasscodeSettings * passcodeSettings;                                                      //@synthesize passcodeSettings=_passcodeSettings - In the implementation block
@property (retain) CSLockScreenChargingSettings * chargingSettings;                                                      //@synthesize chargingSettings=_chargingSettings - In the implementation block
@property (retain) CSLockScreenMesaSettings * mesaSettings;                                                              //@synthesize mesaSettings=_mesaSettings - In the implementation block
@property (retain) CSLockScreenPearlSettings * pearlSettings;                                                            //@synthesize pearlSettings=_pearlSettings - In the implementation block
@property (retain) CSCoverSheetTransitionsSettings * coverSheetTransitionsSettings;                                      //@synthesize coverSheetTransitionsSettings=_coverSheetTransitionsSettings - In the implementation block
@property (retain) CSHorizontalScrollFailureRecognizerSettings * horizontalScrollFailureRecognizerSettings;              //@synthesize horizontalScrollFailureRecognizerSettings=_horizontalScrollFailureRecognizerSettings - In the implementation block
@property (retain) CSDashBoardScrollModifierSettings * dashBoardScrollModifierSettings;                                  //@synthesize dashBoardScrollModifierSettings=_dashBoardScrollModifierSettings - In the implementation block
@property (retain) CSDashBoardNotificationVersusPagingScrollSettings * dashBoardNotificationScrollSettings;              //@synthesize dashBoardNotificationScrollSettings=_dashBoardNotificationScrollSettings - In the implementation block
@property (retain) CSDashBoardQuickActionsButtonSettings * dashBoardQuickActionButtonSettings;                           //@synthesize dashBoardQuickActionButtonSettings=_dashBoardQuickActionButtonSettings - In the implementation block
@property (retain) CSDashBoardRemoteContentSettings * dashBoardRemoteContentSettings;                                    //@synthesize dashBoardRemoteContentSettings=_dashBoardRemoteContentSettings - In the implementation block
@property (retain) CSCoverSheetDismissGestureSettings * coverSheetDismissGestureSettings;                                //@synthesize coverSheetDismissGestureSettings=_coverSheetDismissGestureSettings - In the implementation block
@property (retain) SBFAnimationSettings * unlockToPhoneWallpaperOutSettings;                                             //@synthesize unlockToPhoneWallpaperOutSettings=_unlockToPhoneWallpaperOutSettings - In the implementation block
@property (retain) SBFAnimationSettings * unlockToPhoneWallpaperInSettings;                                              //@synthesize unlockToPhoneWallpaperInSettings=_unlockToPhoneWallpaperInSettings - In the implementation block
@property (retain) SBFAnimationSettings * unlockWallpaperOutSettings;                                                    //@synthesize unlockWallpaperOutSettings=_unlockWallpaperOutSettings - In the implementation block
@property (retain) SBFAnimationSettings * unlockWallpaperInSettings;                                                     //@synthesize unlockWallpaperInSettings=_unlockWallpaperInSettings - In the implementation block
@property (retain) CSLockScreenTestPluginSettings * testPluginSettings;                                                  //@synthesize testPluginSettings=_testPluginSettings - In the implementation block
@property (assign) double nowPlayingHeight;                                                                              //@synthesize nowPlayingHeight=_nowPlayingHeight - In the implementation block
@property (assign) double mainToCameraViewSlideCompletionPercentage;                                                     //@synthesize mainToCameraViewSlideCompletionPercentage=_mainToCameraViewSlideCompletionPercentage - In the implementation block
@property (assign) double mainToTodayViewSlideCompletionPercentage;                                                      //@synthesize mainToTodayViewSlideCompletionPercentage=_mainToTodayViewSlideCompletionPercentage - In the implementation block
@property (assign) double unlockSlideForIdleTimerDisabledPercentage;                                                     //@synthesize unlockSlideForIdleTimerDisabledPercentage=_unlockSlideForIdleTimerDisabledPercentage - In the implementation block
@property (assign) double unlockSlideForIdleTimerDisabledPercentageIPad;                                                 //@synthesize unlockSlideForIdleTimerDisabledPercentageIPad=_unlockSlideForIdleTimerDisabledPercentageIPad - In the implementation block
@property (assign) double notificationScrollForIdleTimerDisabledOffset;                                                  //@synthesize notificationScrollForIdleTimerDisabledOffset=_notificationScrollForIdleTimerDisabledOffset - In the implementation block
@property (assign) double notificationScrollForIdleTimerDisabledOffsetIPad;                                              //@synthesize notificationScrollForIdleTimerDisabledOffsetIPad=_notificationScrollForIdleTimerDisabledOffsetIPad - In the implementation block
@property (assign) double appGrabberSlideUpVelocityThreshold;                                                            //@synthesize appGrabberSlideUpVelocityThreshold=_appGrabberSlideUpVelocityThreshold - In the implementation block
@property (assign) double unlockPasscodeThreshold;                                                                       //@synthesize unlockPasscodeThreshold=_unlockPasscodeThreshold - In the implementation block
@property (assign) double unlockRubberBandThreshold;                                                                     //@synthesize unlockRubberBandThreshold=_unlockRubberBandThreshold - In the implementation block
@property (assign) double unlockRubberBandFeedbackInterval;                                                              //@synthesize unlockRubberBandFeedbackInterval=_unlockRubberBandFeedbackInterval - In the implementation block
@property (assign) long long unlockRubberBandFeedbackIntensity;                                                          //@synthesize unlockRubberBandFeedbackIntensity=_unlockRubberBandFeedbackIntensity - In the implementation block
@property (assign) double lockJiggleHapticDelay;                                                                         //@synthesize lockJiggleHapticDelay=_lockJiggleHapticDelay - In the implementation block
@property (assign) double lockJiggleAnimationDelay;                                                                      //@synthesize lockJiggleAnimationDelay=_lockJiggleAnimationDelay - In the implementation block
@property (assign) double unlockSwipeWallpaperAlpha;                                                                     //@synthesize unlockSwipeWallpaperAlpha=_unlockSwipeWallpaperAlpha - In the implementation block
@property (assign) BOOL alwaysPutPluginsBelowScrollView;                                                                 //@synthesize alwaysPutPluginsBelowScrollView=_alwaysPutPluginsBelowScrollView - In the implementation block
@property (assign) BOOL killsInsecureDrawingApps;                                                                        //@synthesize killsInsecureDrawingApps=_killsInsecureDrawingApps - In the implementation block
@property (assign) BOOL prewarmsCameraHardwareOnSwipe;                                                                   //@synthesize prewarmsCameraHardwareOnSwipe=_prewarmsCameraHardwareOnSwipe - In the implementation block
@property (assign) BOOL prewarmsCameraHardwareOnTap;                                                                     //@synthesize prewarmsCameraHardwareOnTap=_prewarmsCameraHardwareOnTap - In the implementation block
@property (assign) BOOL prelaunchesCameraAppOnSwipe;                                                                     //@synthesize prelaunchesCameraAppOnSwipe=_prelaunchesCameraAppOnSwipe - In the implementation block
@property (assign) BOOL prelaunchesCameraAppOnTap;                                                                       //@synthesize prelaunchesCameraAppOnTap=_prelaunchesCameraAppOnTap - In the implementation block
@property (assign) double cameraPrewarmThresholdOnSwipe;                                                                 //@synthesize cameraPrewarmThresholdOnSwipe=_cameraPrewarmThresholdOnSwipe - In the implementation block
@property (assign) double cameraPrelaunchThresholdOnSwipe;                                                               //@synthesize cameraPrelaunchThresholdOnSwipe=_cameraPrelaunchThresholdOnSwipe - In the implementation block
@property (assign) double cameraPrewarmDebounceTimeInterval;                                                             //@synthesize cameraPrewarmDebounceTimeInterval=_cameraPrewarmDebounceTimeInterval - In the implementation block
@property (assign) double cameraPrewarmAutoCancelTimeInterval;                                                           //@synthesize cameraPrewarmAutoCancelTimeInterval=_cameraPrewarmAutoCancelTimeInterval - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setUnlockSlideForIdleTimerDisabledPercentage:(double)arg1 ;
-(void)setShowThermalTrap:(BOOL)arg1 ;
-(BOOL)showLogoutButton;
-(void)setCameraPrewarmDebounceTimeInterval:(double)arg1 ;
-(double)unlockPasscodeThreshold;
-(double)restToOpenIdleDuration;
-(void)setKillsInsecureDrawingApps:(BOOL)arg1 ;
-(void)setVerticalBounceSettings:(CSBounceSettings *)arg1 ;
-(BOOL)showThermalTrap;
-(BOOL)prewarmsCameraHardwareOnTap;
-(void)setAppGrabberSlideUpVelocityThreshold:(double)arg1 ;
-(double)nowPlayingHeight;
-(SBFAnimationSettings *)unlockToPhoneWallpaperOutSettings;
-(void)setShowNowPlaying:(BOOL)arg1 ;
-(BOOL)showEmergencyDialer;
-(double)idleUntilShimmerDuration;
-(BOOL)prelaunchesCameraAppOnSwipe;
-(double)lockJiggleAnimationDelay;
-(CSDashBoardRemoteContentSettings *)dashBoardRemoteContentSettings;
-(void)setUnlockSwipeWallpaperAlpha:(double)arg1 ;
-(long long)unlockRubberBandFeedbackIntensity;
-(void)setUnlockRubberBandFeedbackIntensity:(long long)arg1 ;
-(void)setUnlockWallpaperInSettings:(SBFAnimationSettings *)arg1 ;
-(void)setCameraPrelaunchThresholdOnSwipe:(double)arg1 ;
-(SBFAnimationSettings *)unlockWallpaperOutSettings;
-(void)setPrelaunchesCameraAppOnTap:(BOOL)arg1 ;
-(double)cameraPrelaunchThresholdOnSwipe;
-(CSCoverSheetTransitionsSettings *)coverSheetTransitionsSettings;
-(BOOL)prewarmsCameraHardwareOnSwipe;
-(BOOL)showRegionsDebugView;
-(void)setChargingSettings:(CSLockScreenChargingSettings *)arg1 ;
-(void)setDashBoardQuickActionButtonSettings:(CSDashBoardQuickActionsButtonSettings *)arg1 ;
-(double)unlockSlideForIdleTimerDisabledPercentageIPad;
-(CSLockScreenMesaSettings *)mesaSettings;
-(BOOL)autoDismissUnlockedLockScreen;
-(CSBounceSettings *)horizontalBounceSettings;
-(double)lockJiggleHapticDelay;
-(double)mainToCameraViewSlideCompletionPercentage;
-(BOOL)showUserPicture;
-(double)appGrabberSlideUpVelocityThreshold;
-(void)setHorizontalBounceSettings:(CSBounceSettings *)arg1 ;
-(CSHorizontalScrollFailureRecognizerSettings *)horizontalScrollFailureRecognizerSettings;
-(BOOL)killsInsecureDrawingApps;
-(CSDashBoardNotificationVersusPagingScrollSettings *)dashBoardNotificationScrollSettings;
-(BOOL)prelaunchesCameraAppOnTap;
-(void)setRestToOpenDuration:(double)arg1 ;
-(void)setMesaSettings:(CSLockScreenMesaSettings *)arg1 ;
-(void)setLockJiggleAnimationDelay:(double)arg1 ;
-(void)setUnlockSlideForIdleTimerDisabledPercentageIPad:(double)arg1 ;
-(void)setPrewarmsCameraHardwareOnTap:(BOOL)arg1 ;
-(double)cameraPrewarmDebounceTimeInterval;
-(CSDashBoardScrollModifierSettings *)dashBoardScrollModifierSettings;
-(double)unlockSwipeWallpaperAlpha;
-(void)setUnlockToPhoneWallpaperOutSettings:(SBFAnimationSettings *)arg1 ;
-(void)setUnlockRubberBandThreshold:(double)arg1 ;
-(void)setShowLogoutButton:(BOOL)arg1 ;
-(SBFAnimationSettings *)unlockToPhoneWallpaperInSettings;
-(void)setAddNotificationOutlet:(PTOutlet *)arg1 ;
-(void)setCameraPrewarmAutoCancelTimeInterval:(double)arg1 ;
-(double)notificationScrollForIdleTimerDisabledOffset;
-(void)setAutoDismissUnlockedLockScreen:(BOOL)arg1 ;
-(void)setMainToCameraViewSlideCompletionPercentage:(double)arg1 ;
-(void)setDashBoardRemoteContentSettings:(CSDashBoardRemoteContentSettings *)arg1 ;
-(BOOL)showNowPlaying;
-(CSDashBoardQuickActionsButtonSettings *)dashBoardQuickActionButtonSettings;
-(CSLockScreenPasscodeSettings *)passcodeSettings;
-(void)setCoverSheetTransitionsSettings:(CSCoverSheetTransitionsSettings *)arg1 ;
-(void)setPasscodeSettings:(CSLockScreenPasscodeSettings *)arg1 ;
-(CSCoverSheetDismissGestureSettings *)coverSheetDismissGestureSettings;
-(void)setRestToOpenIdleDuration:(double)arg1 ;
-(double)minTouchIDDuration;
-(BOOL)showResetRestore;
-(void)setUnlockWallpaperOutSettings:(SBFAnimationSettings *)arg1 ;
-(CSLockScreenTestPluginSettings *)testPluginSettings;
-(void)setShowBlockedUI:(BOOL)arg1 ;
-(void)setAlwaysPutPluginsBelowScrollView:(BOOL)arg1 ;
-(void)setShowEmergencyDialer:(BOOL)arg1 ;
-(void)setUnlockRubberBandFeedbackInterval:(double)arg1 ;
-(void)setShowResetRestore:(BOOL)arg1 ;
-(double)cameraPrewarmThresholdOnSwipe;
-(void)setCameraPrewarmThresholdOnSwipe:(double)arg1 ;
-(void)setUnlockPasscodeThreshold:(double)arg1 ;
-(void)setNotificationScrollForIdleTimerDisabledOffsetIPad:(double)arg1 ;
-(void)setPrewarmsCameraHardwareOnSwipe:(BOOL)arg1 ;
-(void)setHorizontalScrollFailureRecognizerSettings:(CSHorizontalScrollFailureRecognizerSettings *)arg1 ;
-(BOOL)alwaysPutPluginsBelowScrollView;
-(double)restToOpenDuration;
-(void)setLockJiggleHapticDelay:(double)arg1 ;
-(SBFAnimationSettings *)unlockWallpaperInSettings;
-(double)notificationScrollForIdleTimerDisabledOffsetIPad;
-(void)setUnlockToPhoneWallpaperInSettings:(SBFAnimationSettings *)arg1 ;
-(void)setShowRegionsDebugView:(BOOL)arg1 ;
-(void)setDashBoardScrollModifierSettings:(CSDashBoardScrollModifierSettings *)arg1 ;
-(void)setPrelaunchesCameraAppOnSwipe:(BOOL)arg1 ;
-(void)setNotificationScrollForIdleTimerDisabledOffset:(double)arg1 ;
-(void)setNowPlayingHeight:(double)arg1 ;
-(CSLockScreenChargingSettings *)chargingSettings;
-(double)cameraPrewarmAutoCancelTimeInterval;
-(BOOL)showBlockedUI;
-(void)setPearlSettings:(CSLockScreenPearlSettings *)arg1 ;
-(void)setMinTouchIDDuration:(double)arg1 ;
-(double)mainToTodayViewSlideCompletionPercentage;
-(void)setMainToTodayViewSlideCompletionPercentage:(double)arg1 ;
-(void)setShowUserPicture:(BOOL)arg1 ;
-(CSBounceSettings *)verticalBounceSettings;
-(double)unlockRubberBandThreshold;
-(void)setIdleUntilShimmerDuration:(double)arg1 ;
-(void)setDashBoardNotificationScrollSettings:(CSDashBoardNotificationVersusPagingScrollSettings *)arg1 ;
-(PTOutlet *)addNotificationOutlet;
-(double)unlockSlideForIdleTimerDisabledPercentage;
-(void)setTestPluginSettings:(CSLockScreenTestPluginSettings *)arg1 ;
-(void)setCoverSheetDismissGestureSettings:(CSCoverSheetDismissGestureSettings *)arg1 ;
-(double)unlockRubberBandFeedbackInterval;
-(CSLockScreenPearlSettings *)pearlSettings;
@end

