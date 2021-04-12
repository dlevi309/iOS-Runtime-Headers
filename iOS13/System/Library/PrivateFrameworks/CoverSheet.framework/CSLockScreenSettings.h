/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@class PTOutlet, CSBounceSettings, CSLockScreenPasscodeSettings, CSLockScreenMesaSettings, CSLockScreenPearlSettings, CSCoverSheetTransitionsSettings, CSHorizontalScrollFailureRecognizerSettings, CSDashBoardScrollModifierSettings, CSDashBoardNotificationVersusPagingScrollSettings, CSDashBoardQuickActionsButtonSettings, CSCoverSheetDismissGestureSettings, SBFAnimationSettings, CSLockScreenTestPluginSettings;

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
	PTOutlet* _addNotificationOutlet;
	CSBounceSettings* _verticalBounceSettings;
	CSBounceSettings* _horizontalBounceSettings;
	CSLockScreenPasscodeSettings* _passcodeSettings;
	CSLockScreenMesaSettings* _mesaSettings;
	CSLockScreenPearlSettings* _pearlSettings;
	CSCoverSheetTransitionsSettings* _coverSheetTransitionsSettings;
	CSHorizontalScrollFailureRecognizerSettings* _horizontalScrollFailureRecognizerSettings;
	CSDashBoardScrollModifierSettings* _dashBoardScrollModifierSettings;
	CSDashBoardNotificationVersusPagingScrollSettings* _dashBoardNotificationScrollSettings;
	CSDashBoardQuickActionsButtonSettings* _dashBoardQuickActionButtonSettings;
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

}

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
@property (retain) CSLockScreenMesaSettings * mesaSettings;                                                              //@synthesize mesaSettings=_mesaSettings - In the implementation block
@property (retain) CSLockScreenPearlSettings * pearlSettings;                                                            //@synthesize pearlSettings=_pearlSettings - In the implementation block
@property (retain) CSCoverSheetTransitionsSettings * coverSheetTransitionsSettings;                                      //@synthesize coverSheetTransitionsSettings=_coverSheetTransitionsSettings - In the implementation block
@property (retain) CSHorizontalScrollFailureRecognizerSettings * horizontalScrollFailureRecognizerSettings;              //@synthesize horizontalScrollFailureRecognizerSettings=_horizontalScrollFailureRecognizerSettings - In the implementation block
@property (retain) CSDashBoardScrollModifierSettings * dashBoardScrollModifierSettings;                                  //@synthesize dashBoardScrollModifierSettings=_dashBoardScrollModifierSettings - In the implementation block
@property (retain) CSDashBoardNotificationVersusPagingScrollSettings * dashBoardNotificationScrollSettings;              //@synthesize dashBoardNotificationScrollSettings=_dashBoardNotificationScrollSettings - In the implementation block
@property (retain) CSDashBoardQuickActionsButtonSettings * dashBoardQuickActionButtonSettings;                           //@synthesize dashBoardQuickActionButtonSettings=_dashBoardQuickActionButtonSettings - In the implementation block
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
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)prewarmsCameraHardwareOnTap;
-(BOOL)prelaunchesCameraAppOnTap;
-(CSDashBoardScrollModifierSettings *)dashBoardScrollModifierSettings;
-(BOOL)showUserPicture;
-(BOOL)showLogoutButton;
-(CSLockScreenPearlSettings *)pearlSettings;
-(double)nowPlayingHeight;
-(BOOL)autoDismissUnlockedLockScreen;
-(double)unlockSlideForIdleTimerDisabledPercentageIPad;
-(double)unlockSlideForIdleTimerDisabledPercentage;
-(BOOL)showRegionsDebugView;
-(BOOL)showThermalTrap;
-(BOOL)showBlockedUI;
-(BOOL)showResetRestore;
-(void)setAutoDismissUnlockedLockScreen:(BOOL)arg1 ;
-(BOOL)showNowPlaying;
-(void)setShowNowPlaying:(BOOL)arg1 ;
-(void)setShowUserPicture:(BOOL)arg1 ;
-(void)setShowLogoutButton:(BOOL)arg1 ;
-(void)setShowThermalTrap:(BOOL)arg1 ;
-(void)setShowBlockedUI:(BOOL)arg1 ;
-(void)setShowResetRestore:(BOOL)arg1 ;
-(BOOL)showEmergencyDialer;
-(void)setShowEmergencyDialer:(BOOL)arg1 ;
-(void)setShowRegionsDebugView:(BOOL)arg1 ;
-(PTOutlet *)addNotificationOutlet;
-(void)setAddNotificationOutlet:(PTOutlet *)arg1 ;
-(CSBounceSettings *)verticalBounceSettings;
-(void)setVerticalBounceSettings:(CSBounceSettings *)arg1 ;
-(CSBounceSettings *)horizontalBounceSettings;
-(void)setHorizontalBounceSettings:(CSBounceSettings *)arg1 ;
-(CSLockScreenPasscodeSettings *)passcodeSettings;
-(void)setPasscodeSettings:(CSLockScreenPasscodeSettings *)arg1 ;
-(CSLockScreenMesaSettings *)mesaSettings;
-(void)setMesaSettings:(CSLockScreenMesaSettings *)arg1 ;
-(void)setPearlSettings:(CSLockScreenPearlSettings *)arg1 ;
-(CSCoverSheetTransitionsSettings *)coverSheetTransitionsSettings;
-(void)setCoverSheetTransitionsSettings:(CSCoverSheetTransitionsSettings *)arg1 ;
-(CSHorizontalScrollFailureRecognizerSettings *)horizontalScrollFailureRecognizerSettings;
-(void)setHorizontalScrollFailureRecognizerSettings:(CSHorizontalScrollFailureRecognizerSettings *)arg1 ;
-(void)setDashBoardScrollModifierSettings:(CSDashBoardScrollModifierSettings *)arg1 ;
-(CSDashBoardNotificationVersusPagingScrollSettings *)dashBoardNotificationScrollSettings;
-(void)setDashBoardNotificationScrollSettings:(CSDashBoardNotificationVersusPagingScrollSettings *)arg1 ;
-(CSDashBoardQuickActionsButtonSettings *)dashBoardQuickActionButtonSettings;
-(void)setDashBoardQuickActionButtonSettings:(CSDashBoardQuickActionsButtonSettings *)arg1 ;
-(CSCoverSheetDismissGestureSettings *)coverSheetDismissGestureSettings;
-(void)setCoverSheetDismissGestureSettings:(CSCoverSheetDismissGestureSettings *)arg1 ;
-(SBFAnimationSettings *)unlockToPhoneWallpaperOutSettings;
-(void)setUnlockToPhoneWallpaperOutSettings:(SBFAnimationSettings *)arg1 ;
-(SBFAnimationSettings *)unlockToPhoneWallpaperInSettings;
-(void)setUnlockToPhoneWallpaperInSettings:(SBFAnimationSettings *)arg1 ;
-(SBFAnimationSettings *)unlockWallpaperOutSettings;
-(void)setUnlockWallpaperOutSettings:(SBFAnimationSettings *)arg1 ;
-(SBFAnimationSettings *)unlockWallpaperInSettings;
-(void)setUnlockWallpaperInSettings:(SBFAnimationSettings *)arg1 ;
-(CSLockScreenTestPluginSettings *)testPluginSettings;
-(void)setTestPluginSettings:(CSLockScreenTestPluginSettings *)arg1 ;
-(void)setNowPlayingHeight:(double)arg1 ;
-(double)mainToCameraViewSlideCompletionPercentage;
-(void)setMainToCameraViewSlideCompletionPercentage:(double)arg1 ;
-(double)mainToTodayViewSlideCompletionPercentage;
-(void)setMainToTodayViewSlideCompletionPercentage:(double)arg1 ;
-(void)setUnlockSlideForIdleTimerDisabledPercentage:(double)arg1 ;
-(void)setUnlockSlideForIdleTimerDisabledPercentageIPad:(double)arg1 ;
-(double)notificationScrollForIdleTimerDisabledOffset;
-(void)setNotificationScrollForIdleTimerDisabledOffset:(double)arg1 ;
-(double)notificationScrollForIdleTimerDisabledOffsetIPad;
-(void)setNotificationScrollForIdleTimerDisabledOffsetIPad:(double)arg1 ;
-(double)appGrabberSlideUpVelocityThreshold;
-(void)setAppGrabberSlideUpVelocityThreshold:(double)arg1 ;
-(double)unlockPasscodeThreshold;
-(void)setUnlockPasscodeThreshold:(double)arg1 ;
-(double)unlockRubberBandThreshold;
-(void)setUnlockRubberBandThreshold:(double)arg1 ;
-(double)unlockRubberBandFeedbackInterval;
-(void)setUnlockRubberBandFeedbackInterval:(double)arg1 ;
-(long long)unlockRubberBandFeedbackIntensity;
-(void)setUnlockRubberBandFeedbackIntensity:(long long)arg1 ;
-(double)lockJiggleHapticDelay;
-(void)setLockJiggleHapticDelay:(double)arg1 ;
-(double)lockJiggleAnimationDelay;
-(void)setLockJiggleAnimationDelay:(double)arg1 ;
-(double)unlockSwipeWallpaperAlpha;
-(void)setUnlockSwipeWallpaperAlpha:(double)arg1 ;
-(BOOL)alwaysPutPluginsBelowScrollView;
-(void)setAlwaysPutPluginsBelowScrollView:(BOOL)arg1 ;
-(BOOL)killsInsecureDrawingApps;
-(void)setKillsInsecureDrawingApps:(BOOL)arg1 ;
-(BOOL)prewarmsCameraHardwareOnSwipe;
-(void)setPrewarmsCameraHardwareOnSwipe:(BOOL)arg1 ;
-(void)setPrewarmsCameraHardwareOnTap:(BOOL)arg1 ;
-(BOOL)prelaunchesCameraAppOnSwipe;
-(void)setPrelaunchesCameraAppOnSwipe:(BOOL)arg1 ;
-(void)setPrelaunchesCameraAppOnTap:(BOOL)arg1 ;
-(double)cameraPrewarmThresholdOnSwipe;
-(void)setCameraPrewarmThresholdOnSwipe:(double)arg1 ;
-(double)cameraPrelaunchThresholdOnSwipe;
-(void)setCameraPrelaunchThresholdOnSwipe:(double)arg1 ;
@end

