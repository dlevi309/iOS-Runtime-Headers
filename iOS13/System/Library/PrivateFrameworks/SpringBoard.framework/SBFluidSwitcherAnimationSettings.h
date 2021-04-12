/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBFluidSwitcherAnimationSettings : PTSettings {

	BOOL _animateAppSelectionDimming;
	SBFFluidBehaviorSettings* _layoutSettings;
	SBFFluidBehaviorSettings* _zoomUpSettings;
	SBFFluidBehaviorSettings* _iconZoomDownSettings;
	SBFFluidBehaviorSettings* _floatingDockIconFadeSettings;
	SBFFluidBehaviorSettings* _switcherZoomDownIconFadeOutSettings;
	SBFFluidBehaviorSettings* _iconFadeInSettings;
	SBFFluidBehaviorSettings* _switcherFadeOutSettings;
	SBFFluidBehaviorSettings* _gestureInitiatedZoomDownSettings;
	SBFFluidBehaviorSettings* _centerZoomSettings;
	SBFFluidBehaviorSettings* _slideOverSettings;
	SBFFluidBehaviorSettings* _switcherToHomeSettings;
	SBFFluidBehaviorSettings* _switcherToHomeOpacitySettings;
	SBFFluidBehaviorSettings* _toggleAppSwitcherSettings;
	SBFFluidBehaviorSettings* _launchAppFromSwitcherSettings;
	SBFFluidBehaviorSettings* _continuityBannerSlideUpSettings;
	SBFFluidBehaviorSettings* _stackedSwitcherTrackingSettings;
	SBFFluidBehaviorSettings* _homeGestureCenterRowZoomUpSettings;
	SBFFluidBehaviorSettings* _homeGestureEdgeRowZoomUpSettings;
	SBFFluidBehaviorSettings* _homeGestureTopRowZoomDownLayoutSettings;
	SBFFluidBehaviorSettings* _homeGestureTopRowZoomDownPositionSettings;
	SBFFluidBehaviorSettings* _homeGestureTopRowZoomDownScaleSettings;
	SBFFluidBehaviorSettings* _homeGestureBottomRowZoomDownLayoutSettings;
	SBFFluidBehaviorSettings* _homeGestureBottomRowZoomDownPositionSettings;
	SBFFluidBehaviorSettings* _homeGestureBottomRowZoomDownScaleSettings;
	SBFFluidBehaviorSettings* _arcSwipeSettings;
	SBFFluidBehaviorSettings* _appToSwitcherCornerRadiusSettings;
	SBFFluidBehaviorSettings* _gestureInitiatedAppToSwitcherSettings;
	SBFFluidBehaviorSettings* _cardFlyInSettings;
	double _cardFlyInAccelerationDipThreshold;
	long long _minimumTouchSamplesForAccelerationDip;
	SBFFluidBehaviorSettings* _reduceMotionArcSwipeSettings;
	SBFFluidBehaviorSettings* _reduceMotionAppToSwitcherSettings;
	double _reduceMotionTriggerDelay;
	double _zoomDownVelocityYMinimum;
	double _zoomDownVelocityYMaximum;
	double _zoomDownVelocityYLayoutResponseMultiplier;
	double _zoomDownVelocityXMinimum;
	double _zoomDownVelocityXMaximum;
	double _zoomDownVelocityXPositionResponseMultiplier;
	double _appToSwitcherTransitionMinCardScaleFactor;
	SBFFluidBehaviorSettings* _dosidoSettings;
	SBFFluidBehaviorSettings* _dosidoScaleDownSettings;
	SBFFluidBehaviorSettings* _dosidoScaleUpSettings;
	double _dosidoScale;
	double _dosidoScaleUpDelay;
	SBFFluidBehaviorSettings* _crossblurDosidoSettings;
	double _crossblurDosidoSmallScale;
	double _crossblurDosidoLargeScale;
	double _crossblurDosidoBlurRadius;
	double _crossblurRasterizationScale;
	SBFFluidBehaviorSettings* _backdropBlurSettings;
	SBFFluidBehaviorSettings* _homeScreenOpacitySettings;
	SBFFluidBehaviorSettings* _homeScreenScaleSettings;
	SBFFluidBehaviorSettings* _opacitySettings;
	SBFFluidBehaviorSettings* _centerZoomOpacitySettings;
	SBFFluidBehaviorSettings* _wallpaperScaleSettings;
	SBFFluidBehaviorSettings* _appSelectionSquishSettings;
	SBFFluidBehaviorSettings* _appSelectionDimSettings;
	SBFFluidBehaviorSettings* _statusBarFadeInSettings;
	SBFFluidBehaviorSettings* _statusBarFadeOutSettings;
	double _statusBarToApexBounceAnimationDuration;
	double _statusBarFromApexBounceAnimationDuration;
	SBFFluidBehaviorSettings* _alertCardifiedDismissalSettings;
	double _alertCardifiedDismissHapticDelay;
	double _alertCardifiedDismissZoomOutDelay;
	double _alertCardifiedDismissClientAnimationsDelay;
	SBFFluidBehaviorSettings* _alertBarSwipeDismissalSettings;
	double _alertBarSwipeDismissHapticDelay;
	double _alertBarSwipeDismissZoomOutDelay;
	double _alertBarSwipeDismissClientAnimationsDelay;
	SBFFluidBehaviorSettings* _siriSwipeDismissalSettings;
	double _siriSwipeDismissHapticDelay;
	double _siriSwipeDismissZoomOutDelay;
	double _siriSwipeDismissClientAnimationsDelay;
	SBFFluidBehaviorSettings* _reopenButtonScaleSettings;
	double _reopenButtonInitialScale;
	double _reopenButtonFadeInDelay;
	double _disableAsyncRenderingTransitionPercentage;
	double _disallowAcceleratedHomeButtonPressTransitionPercentage;
	double _centerZoomScale;
	double _homeScreenBlurInSwitcher;
	double _homeScreenBlurInSwitcherReduceMotionEnabled;
	double _homeScreenBlurInApplication;
	double _homeScreenOpacityInSwitcher;
	double _homeScreenOpacityInApplication;
	double _homeScreenScaleInSwitcher;
	double _homeScreenScaleInApplication;
	double _wallpaperScaleInSwitcher;
	double _wallpaperScaleInApplication;
	double _dimmingAlphaInSwitcher;
	double _dimmingAlphaInApplication;
	double _dockHurdlingIconZoomInitialVelocity;
	double _dockHurdlingIconZoomDockToBackTiming;
	double _reduceMotionCrossfadeDuration;
	double _iconZoomFloatingDockFadeDelay;
	double _emptySwitcherDismissDelay;

}

@property (nonatomic,retain) SBFFluidBehaviorSettings * layoutSettings;                                            //@synthesize layoutSettings=_layoutSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * zoomUpSettings;                                            //@synthesize zoomUpSettings=_zoomUpSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * iconZoomDownSettings;                                      //@synthesize iconZoomDownSettings=_iconZoomDownSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * floatingDockIconFadeSettings;                              //@synthesize floatingDockIconFadeSettings=_floatingDockIconFadeSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * switcherZoomDownIconFadeOutSettings;                       //@synthesize switcherZoomDownIconFadeOutSettings=_switcherZoomDownIconFadeOutSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * iconFadeInSettings;                                        //@synthesize iconFadeInSettings=_iconFadeInSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * switcherFadeOutSettings;                                   //@synthesize switcherFadeOutSettings=_switcherFadeOutSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * gestureInitiatedZoomDownSettings;                          //@synthesize gestureInitiatedZoomDownSettings=_gestureInitiatedZoomDownSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * centerZoomSettings;                                        //@synthesize centerZoomSettings=_centerZoomSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * slideOverSettings;                                         //@synthesize slideOverSettings=_slideOverSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * switcherToHomeSettings;                                    //@synthesize switcherToHomeSettings=_switcherToHomeSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * switcherToHomeOpacitySettings;                             //@synthesize switcherToHomeOpacitySettings=_switcherToHomeOpacitySettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toggleAppSwitcherSettings;                                 //@synthesize toggleAppSwitcherSettings=_toggleAppSwitcherSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * launchAppFromSwitcherSettings;                             //@synthesize launchAppFromSwitcherSettings=_launchAppFromSwitcherSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * continuityBannerSlideUpSettings;                           //@synthesize continuityBannerSlideUpSettings=_continuityBannerSlideUpSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * stackedSwitcherTrackingSettings;                           //@synthesize stackedSwitcherTrackingSettings=_stackedSwitcherTrackingSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * homeGestureCenterRowZoomUpSettings;                        //@synthesize homeGestureCenterRowZoomUpSettings=_homeGestureCenterRowZoomUpSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * homeGestureEdgeRowZoomUpSettings;                          //@synthesize homeGestureEdgeRowZoomUpSettings=_homeGestureEdgeRowZoomUpSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * homeGestureTopRowZoomDownLayoutSettings;                   //@synthesize homeGestureTopRowZoomDownLayoutSettings=_homeGestureTopRowZoomDownLayoutSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * homeGestureTopRowZoomDownPositionSettings;                 //@synthesize homeGestureTopRowZoomDownPositionSettings=_homeGestureTopRowZoomDownPositionSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * homeGestureTopRowZoomDownScaleSettings;                    //@synthesize homeGestureTopRowZoomDownScaleSettings=_homeGestureTopRowZoomDownScaleSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * homeGestureBottomRowZoomDownLayoutSettings;                //@synthesize homeGestureBottomRowZoomDownLayoutSettings=_homeGestureBottomRowZoomDownLayoutSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * homeGestureBottomRowZoomDownPositionSettings;              //@synthesize homeGestureBottomRowZoomDownPositionSettings=_homeGestureBottomRowZoomDownPositionSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * homeGestureBottomRowZoomDownScaleSettings;                 //@synthesize homeGestureBottomRowZoomDownScaleSettings=_homeGestureBottomRowZoomDownScaleSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * arcSwipeSettings;                                          //@synthesize arcSwipeSettings=_arcSwipeSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * appToSwitcherCornerRadiusSettings;                         //@synthesize appToSwitcherCornerRadiusSettings=_appToSwitcherCornerRadiusSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * gestureInitiatedAppToSwitcherSettings;                     //@synthesize gestureInitiatedAppToSwitcherSettings=_gestureInitiatedAppToSwitcherSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * cardFlyInSettings;                                         //@synthesize cardFlyInSettings=_cardFlyInSettings - In the implementation block
@property (assign,nonatomic) double cardFlyInAccelerationDipThreshold;                                             //@synthesize cardFlyInAccelerationDipThreshold=_cardFlyInAccelerationDipThreshold - In the implementation block
@property (assign,nonatomic) long long minimumTouchSamplesForAccelerationDip;                                      //@synthesize minimumTouchSamplesForAccelerationDip=_minimumTouchSamplesForAccelerationDip - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * reduceMotionArcSwipeSettings;                              //@synthesize reduceMotionArcSwipeSettings=_reduceMotionArcSwipeSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * reduceMotionAppToSwitcherSettings;                         //@synthesize reduceMotionAppToSwitcherSettings=_reduceMotionAppToSwitcherSettings - In the implementation block
@property (assign,nonatomic) double reduceMotionTriggerDelay;                                                      //@synthesize reduceMotionTriggerDelay=_reduceMotionTriggerDelay - In the implementation block
@property (assign,nonatomic) double zoomDownVelocityYMinimum;                                                      //@synthesize zoomDownVelocityYMinimum=_zoomDownVelocityYMinimum - In the implementation block
@property (assign,nonatomic) double zoomDownVelocityYMaximum;                                                      //@synthesize zoomDownVelocityYMaximum=_zoomDownVelocityYMaximum - In the implementation block
@property (assign,nonatomic) double zoomDownVelocityYLayoutResponseMultiplier;                                     //@synthesize zoomDownVelocityYLayoutResponseMultiplier=_zoomDownVelocityYLayoutResponseMultiplier - In the implementation block
@property (assign,nonatomic) double zoomDownVelocityXMinimum;                                                      //@synthesize zoomDownVelocityXMinimum=_zoomDownVelocityXMinimum - In the implementation block
@property (assign,nonatomic) double zoomDownVelocityXMaximum;                                                      //@synthesize zoomDownVelocityXMaximum=_zoomDownVelocityXMaximum - In the implementation block
@property (assign,nonatomic) double zoomDownVelocityXPositionResponseMultiplier;                                   //@synthesize zoomDownVelocityXPositionResponseMultiplier=_zoomDownVelocityXPositionResponseMultiplier - In the implementation block
@property (assign,nonatomic) double appToSwitcherTransitionMinCardScaleFactor;                                     //@synthesize appToSwitcherTransitionMinCardScaleFactor=_appToSwitcherTransitionMinCardScaleFactor - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * dosidoSettings;                                            //@synthesize dosidoSettings=_dosidoSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * dosidoScaleDownSettings;                                   //@synthesize dosidoScaleDownSettings=_dosidoScaleDownSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * dosidoScaleUpSettings;                                     //@synthesize dosidoScaleUpSettings=_dosidoScaleUpSettings - In the implementation block
@property (assign,nonatomic) double dosidoScale;                                                                   //@synthesize dosidoScale=_dosidoScale - In the implementation block
@property (assign,nonatomic) double dosidoScaleUpDelay;                                                            //@synthesize dosidoScaleUpDelay=_dosidoScaleUpDelay - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * crossblurDosidoSettings;                                   //@synthesize crossblurDosidoSettings=_crossblurDosidoSettings - In the implementation block
@property (assign,nonatomic) double crossblurDosidoSmallScale;                                                     //@synthesize crossblurDosidoSmallScale=_crossblurDosidoSmallScale - In the implementation block
@property (assign,nonatomic) double crossblurDosidoLargeScale;                                                     //@synthesize crossblurDosidoLargeScale=_crossblurDosidoLargeScale - In the implementation block
@property (assign,nonatomic) double crossblurDosidoBlurRadius;                                                     //@synthesize crossblurDosidoBlurRadius=_crossblurDosidoBlurRadius - In the implementation block
@property (assign,nonatomic) double crossblurRasterizationScale;                                                   //@synthesize crossblurRasterizationScale=_crossblurRasterizationScale - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * backdropBlurSettings;                                      //@synthesize backdropBlurSettings=_backdropBlurSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * homeScreenOpacitySettings;                                 //@synthesize homeScreenOpacitySettings=_homeScreenOpacitySettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * homeScreenScaleSettings;                                   //@synthesize homeScreenScaleSettings=_homeScreenScaleSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * opacitySettings;                                           //@synthesize opacitySettings=_opacitySettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * centerZoomOpacitySettings;                                 //@synthesize centerZoomOpacitySettings=_centerZoomOpacitySettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * wallpaperScaleSettings;                                    //@synthesize wallpaperScaleSettings=_wallpaperScaleSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * appSelectionSquishSettings;                                //@synthesize appSelectionSquishSettings=_appSelectionSquishSettings - In the implementation block
@property (assign,nonatomic) BOOL animateAppSelectionDimming;                                                      //@synthesize animateAppSelectionDimming=_animateAppSelectionDimming - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * appSelectionDimSettings;                                   //@synthesize appSelectionDimSettings=_appSelectionDimSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * statusBarFadeInSettings;                                   //@synthesize statusBarFadeInSettings=_statusBarFadeInSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * statusBarFadeOutSettings;                                  //@synthesize statusBarFadeOutSettings=_statusBarFadeOutSettings - In the implementation block
@property (assign,nonatomic) double statusBarToApexBounceAnimationDuration;                                        //@synthesize statusBarToApexBounceAnimationDuration=_statusBarToApexBounceAnimationDuration - In the implementation block
@property (assign,nonatomic) double statusBarFromApexBounceAnimationDuration;                                      //@synthesize statusBarFromApexBounceAnimationDuration=_statusBarFromApexBounceAnimationDuration - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * alertCardifiedDismissalSettings;                           //@synthesize alertCardifiedDismissalSettings=_alertCardifiedDismissalSettings - In the implementation block
@property (assign,nonatomic) double alertCardifiedDismissHapticDelay;                                              //@synthesize alertCardifiedDismissHapticDelay=_alertCardifiedDismissHapticDelay - In the implementation block
@property (assign,nonatomic) double alertCardifiedDismissZoomOutDelay;                                             //@synthesize alertCardifiedDismissZoomOutDelay=_alertCardifiedDismissZoomOutDelay - In the implementation block
@property (assign,nonatomic) double alertCardifiedDismissClientAnimationsDelay;                                    //@synthesize alertCardifiedDismissClientAnimationsDelay=_alertCardifiedDismissClientAnimationsDelay - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * alertBarSwipeDismissalSettings;                            //@synthesize alertBarSwipeDismissalSettings=_alertBarSwipeDismissalSettings - In the implementation block
@property (assign,nonatomic) double alertBarSwipeDismissHapticDelay;                                               //@synthesize alertBarSwipeDismissHapticDelay=_alertBarSwipeDismissHapticDelay - In the implementation block
@property (assign,nonatomic) double alertBarSwipeDismissZoomOutDelay;                                              //@synthesize alertBarSwipeDismissZoomOutDelay=_alertBarSwipeDismissZoomOutDelay - In the implementation block
@property (assign,nonatomic) double alertBarSwipeDismissClientAnimationsDelay;                                     //@synthesize alertBarSwipeDismissClientAnimationsDelay=_alertBarSwipeDismissClientAnimationsDelay - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * siriSwipeDismissalSettings;                                //@synthesize siriSwipeDismissalSettings=_siriSwipeDismissalSettings - In the implementation block
@property (assign,nonatomic) double siriSwipeDismissHapticDelay;                                                   //@synthesize siriSwipeDismissHapticDelay=_siriSwipeDismissHapticDelay - In the implementation block
@property (assign,nonatomic) double siriSwipeDismissZoomOutDelay;                                                  //@synthesize siriSwipeDismissZoomOutDelay=_siriSwipeDismissZoomOutDelay - In the implementation block
@property (assign,nonatomic) double siriSwipeDismissClientAnimationsDelay;                                         //@synthesize siriSwipeDismissClientAnimationsDelay=_siriSwipeDismissClientAnimationsDelay - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * reopenButtonScaleSettings;                                 //@synthesize reopenButtonScaleSettings=_reopenButtonScaleSettings - In the implementation block
@property (assign,nonatomic) double reopenButtonInitialScale;                                                      //@synthesize reopenButtonInitialScale=_reopenButtonInitialScale - In the implementation block
@property (assign,nonatomic) double reopenButtonFadeInDelay;                                                       //@synthesize reopenButtonFadeInDelay=_reopenButtonFadeInDelay - In the implementation block
@property (assign,nonatomic) double disableAsyncRenderingTransitionPercentage;                                     //@synthesize disableAsyncRenderingTransitionPercentage=_disableAsyncRenderingTransitionPercentage - In the implementation block
@property (assign,nonatomic) double disallowAcceleratedHomeButtonPressTransitionPercentage;                        //@synthesize disallowAcceleratedHomeButtonPressTransitionPercentage=_disallowAcceleratedHomeButtonPressTransitionPercentage - In the implementation block
@property (assign,nonatomic) double centerZoomScale;                                                               //@synthesize centerZoomScale=_centerZoomScale - In the implementation block
@property (assign,nonatomic) double homeScreenBlurInSwitcher;                                                      //@synthesize homeScreenBlurInSwitcher=_homeScreenBlurInSwitcher - In the implementation block
@property (assign,nonatomic) double homeScreenBlurInSwitcherReduceMotionEnabled;                                   //@synthesize homeScreenBlurInSwitcherReduceMotionEnabled=_homeScreenBlurInSwitcherReduceMotionEnabled - In the implementation block
@property (assign,nonatomic) double homeScreenBlurInApplication;                                                   //@synthesize homeScreenBlurInApplication=_homeScreenBlurInApplication - In the implementation block
@property (assign,nonatomic) double homeScreenOpacityInSwitcher;                                                   //@synthesize homeScreenOpacityInSwitcher=_homeScreenOpacityInSwitcher - In the implementation block
@property (assign,nonatomic) double homeScreenOpacityInApplication;                                                //@synthesize homeScreenOpacityInApplication=_homeScreenOpacityInApplication - In the implementation block
@property (assign,nonatomic) double homeScreenScaleInSwitcher;                                                     //@synthesize homeScreenScaleInSwitcher=_homeScreenScaleInSwitcher - In the implementation block
@property (assign,nonatomic) double homeScreenScaleInApplication;                                                  //@synthesize homeScreenScaleInApplication=_homeScreenScaleInApplication - In the implementation block
@property (assign,nonatomic) double wallpaperScaleInSwitcher;                                                      //@synthesize wallpaperScaleInSwitcher=_wallpaperScaleInSwitcher - In the implementation block
@property (assign,nonatomic) double wallpaperScaleInApplication;                                                   //@synthesize wallpaperScaleInApplication=_wallpaperScaleInApplication - In the implementation block
@property (assign,nonatomic) double dimmingAlphaInSwitcher;                                                        //@synthesize dimmingAlphaInSwitcher=_dimmingAlphaInSwitcher - In the implementation block
@property (assign,nonatomic) double dimmingAlphaInApplication;                                                     //@synthesize dimmingAlphaInApplication=_dimmingAlphaInApplication - In the implementation block
@property (assign,nonatomic) double dockHurdlingIconZoomInitialVelocity;                                           //@synthesize dockHurdlingIconZoomInitialVelocity=_dockHurdlingIconZoomInitialVelocity - In the implementation block
@property (assign,nonatomic) double dockHurdlingIconZoomDockToBackTiming;                                          //@synthesize dockHurdlingIconZoomDockToBackTiming=_dockHurdlingIconZoomDockToBackTiming - In the implementation block
@property (assign,nonatomic) double reduceMotionCrossfadeDuration;                                                 //@synthesize reduceMotionCrossfadeDuration=_reduceMotionCrossfadeDuration - In the implementation block
@property (assign,nonatomic) double iconZoomFloatingDockFadeDelay;                                                 //@synthesize iconZoomFloatingDockFadeDelay=_iconZoomFloatingDockFadeDelay - In the implementation block
@property (assign,nonatomic) double emptySwitcherDismissDelay;                                                     //@synthesize emptySwitcherDismissDelay=_emptySwitcherDismissDelay - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)statusBarToApexBounceAnimationDuration;
-(double)statusBarFromApexBounceAnimationDuration;
-(double)emptySwitcherDismissDelay;
-(SBFFluidBehaviorSettings *)homeScreenOpacitySettings;
-(SBFFluidBehaviorSettings *)homeScreenScaleSettings;
-(SBFFluidBehaviorSettings *)opacitySettings;
-(SBFFluidBehaviorSettings *)layoutSettings;
-(SBFFluidBehaviorSettings *)gestureInitiatedZoomDownSettings;
-(SBFFluidBehaviorSettings *)zoomUpSettings;
-(SBFFluidBehaviorSettings *)iconZoomDownSettings;
-(SBFFluidBehaviorSettings *)centerZoomSettings;
-(SBFFluidBehaviorSettings *)slideOverSettings;
-(SBFFluidBehaviorSettings *)toggleAppSwitcherSettings;
-(SBFFluidBehaviorSettings *)launchAppFromSwitcherSettings;
-(SBFFluidBehaviorSettings *)continuityBannerSlideUpSettings;
-(SBFFluidBehaviorSettings *)stackedSwitcherTrackingSettings;
-(void)_setHomeGestureAnimationDefaultValues;
-(SBFFluidBehaviorSettings *)dosidoSettings;
-(SBFFluidBehaviorSettings *)dosidoScaleDownSettings;
-(SBFFluidBehaviorSettings *)dosidoScaleUpSettings;
-(void)setDosidoScale:(double)arg1 ;
-(void)setDosidoScaleUpDelay:(double)arg1 ;
-(SBFFluidBehaviorSettings *)crossblurDosidoSettings;
-(void)setCrossblurDosidoSmallScale:(double)arg1 ;
-(void)setCrossblurDosidoLargeScale:(double)arg1 ;
-(void)setCrossblurDosidoBlurRadius:(double)arg1 ;
-(void)setCrossblurRasterizationScale:(double)arg1 ;
-(void)setAppToSwitcherTransitionMinCardScaleFactor:(double)arg1 ;
-(void)setDisableAsyncRenderingTransitionPercentage:(double)arg1 ;
-(void)setDisallowAcceleratedHomeButtonPressTransitionPercentage:(double)arg1 ;
-(void)setDockHurdlingIconZoomInitialVelocity:(double)arg1 ;
-(void)setDockHurdlingIconZoomDockToBackTiming:(double)arg1 ;
-(SBFFluidBehaviorSettings *)backdropBlurSettings;
-(SBFFluidBehaviorSettings *)centerZoomOpacitySettings;
-(SBFFluidBehaviorSettings *)wallpaperScaleSettings;
-(SBFFluidBehaviorSettings *)appSelectionSquishSettings;
-(void)setAnimateAppSelectionDimming:(BOOL)arg1 ;
-(SBFFluidBehaviorSettings *)appSelectionDimSettings;
-(SBFFluidBehaviorSettings *)statusBarFadeInSettings;
-(SBFFluidBehaviorSettings *)statusBarFadeOutSettings;
-(void)setStatusBarToApexBounceAnimationDuration:(double)arg1 ;
-(void)setStatusBarFromApexBounceAnimationDuration:(double)arg1 ;
-(SBFFluidBehaviorSettings *)reopenButtonScaleSettings;
-(void)setReopenButtonInitialScale:(double)arg1 ;
-(void)setReopenButtonFadeInDelay:(double)arg1 ;
-(SBFFluidBehaviorSettings *)alertCardifiedDismissalSettings;
-(void)setAlertCardifiedDismissHapticDelay:(double)arg1 ;
-(void)setAlertCardifiedDismissZoomOutDelay:(double)arg1 ;
-(void)setAlertCardifiedDismissClientAnimationsDelay:(double)arg1 ;
-(SBFFluidBehaviorSettings *)alertBarSwipeDismissalSettings;
-(void)setAlertBarSwipeDismissHapticDelay:(double)arg1 ;
-(void)setAlertBarSwipeDismissZoomOutDelay:(double)arg1 ;
-(void)setAlertBarSwipeDismissClientAnimationsDelay:(double)arg1 ;
-(SBFFluidBehaviorSettings *)siriSwipeDismissalSettings;
-(void)setSiriSwipeDismissHapticDelay:(double)arg1 ;
-(void)setSiriSwipeDismissZoomOutDelay:(double)arg1 ;
-(void)setSiriSwipeDismissClientAnimationsDelay:(double)arg1 ;
-(SBFFluidBehaviorSettings *)switcherToHomeSettings;
-(SBFFluidBehaviorSettings *)switcherToHomeOpacitySettings;
-(void)setReduceMotionCrossfadeDuration:(double)arg1 ;
-(SBFFluidBehaviorSettings *)floatingDockIconFadeSettings;
-(void)setIconZoomFloatingDockFadeDelay:(double)arg1 ;
-(SBFFluidBehaviorSettings *)switcherZoomDownIconFadeOutSettings;
-(SBFFluidBehaviorSettings *)iconFadeInSettings;
-(SBFFluidBehaviorSettings *)switcherFadeOutSettings;
-(void)setEmptySwitcherDismissDelay:(double)arg1 ;
-(void)setCenterZoomScale:(double)arg1 ;
-(void)setHomeScreenBlurInSwitcher:(double)arg1 ;
-(void)setHomeScreenBlurInSwitcherReduceMotionEnabled:(double)arg1 ;
-(double)homeScreenBlurInSwitcher;
-(void)setHomeScreenBlurInApplication:(double)arg1 ;
-(void)setHomeScreenOpacityInSwitcher:(double)arg1 ;
-(double)homeScreenOpacityInSwitcher;
-(void)setHomeScreenOpacityInApplication:(double)arg1 ;
-(void)setHomeScreenScaleInSwitcher:(double)arg1 ;
-(double)homeScreenScaleInSwitcher;
-(void)setHomeScreenScaleInApplication:(double)arg1 ;
-(void)setWallpaperScaleInSwitcher:(double)arg1 ;
-(double)wallpaperScaleInSwitcher;
-(void)setWallpaperScaleInApplication:(double)arg1 ;
-(void)setDimmingAlphaInSwitcher:(double)arg1 ;
-(void)setDimmingAlphaInApplication:(double)arg1 ;
-(void)setLayoutSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setZoomUpSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setIconZoomDownSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setFloatingDockIconFadeSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setSwitcherZoomDownIconFadeOutSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setIconFadeInSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setSwitcherFadeOutSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setGestureInitiatedZoomDownSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setCenterZoomSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setSlideOverSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setSwitcherToHomeSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setSwitcherToHomeOpacitySettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToggleAppSwitcherSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setLaunchAppFromSwitcherSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setContinuityBannerSlideUpSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setStackedSwitcherTrackingSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)homeGestureCenterRowZoomUpSettings;
-(void)setHomeGestureCenterRowZoomUpSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)homeGestureEdgeRowZoomUpSettings;
-(void)setHomeGestureEdgeRowZoomUpSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)homeGestureTopRowZoomDownLayoutSettings;
-(void)setHomeGestureTopRowZoomDownLayoutSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)homeGestureTopRowZoomDownPositionSettings;
-(void)setHomeGestureTopRowZoomDownPositionSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)homeGestureTopRowZoomDownScaleSettings;
-(void)setHomeGestureTopRowZoomDownScaleSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)homeGestureBottomRowZoomDownLayoutSettings;
-(void)setHomeGestureBottomRowZoomDownLayoutSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)homeGestureBottomRowZoomDownPositionSettings;
-(void)setHomeGestureBottomRowZoomDownPositionSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)homeGestureBottomRowZoomDownScaleSettings;
-(void)setHomeGestureBottomRowZoomDownScaleSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)arcSwipeSettings;
-(void)setArcSwipeSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)appToSwitcherCornerRadiusSettings;
-(void)setAppToSwitcherCornerRadiusSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)gestureInitiatedAppToSwitcherSettings;
-(void)setGestureInitiatedAppToSwitcherSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)cardFlyInSettings;
-(void)setCardFlyInSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(double)cardFlyInAccelerationDipThreshold;
-(void)setCardFlyInAccelerationDipThreshold:(double)arg1 ;
-(long long)minimumTouchSamplesForAccelerationDip;
-(void)setMinimumTouchSamplesForAccelerationDip:(long long)arg1 ;
-(SBFFluidBehaviorSettings *)reduceMotionArcSwipeSettings;
-(void)setReduceMotionArcSwipeSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)reduceMotionAppToSwitcherSettings;
-(void)setReduceMotionAppToSwitcherSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(double)reduceMotionTriggerDelay;
-(void)setReduceMotionTriggerDelay:(double)arg1 ;
-(double)zoomDownVelocityYMinimum;
-(void)setZoomDownVelocityYMinimum:(double)arg1 ;
-(double)zoomDownVelocityYMaximum;
-(void)setZoomDownVelocityYMaximum:(double)arg1 ;
-(double)zoomDownVelocityYLayoutResponseMultiplier;
-(void)setZoomDownVelocityYLayoutResponseMultiplier:(double)arg1 ;
-(double)zoomDownVelocityXMinimum;
-(void)setZoomDownVelocityXMinimum:(double)arg1 ;
-(double)zoomDownVelocityXMaximum;
-(void)setZoomDownVelocityXMaximum:(double)arg1 ;
-(double)zoomDownVelocityXPositionResponseMultiplier;
-(void)setZoomDownVelocityXPositionResponseMultiplier:(double)arg1 ;
-(double)appToSwitcherTransitionMinCardScaleFactor;
-(void)setDosidoSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setDosidoScaleDownSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setDosidoScaleUpSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(double)dosidoScale;
-(double)dosidoScaleUpDelay;
-(void)setCrossblurDosidoSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(double)crossblurDosidoSmallScale;
-(double)crossblurDosidoLargeScale;
-(double)crossblurDosidoBlurRadius;
-(double)crossblurRasterizationScale;
-(void)setBackdropBlurSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setHomeScreenOpacitySettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setHomeScreenScaleSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setOpacitySettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setCenterZoomOpacitySettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setWallpaperScaleSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setAppSelectionSquishSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(BOOL)animateAppSelectionDimming;
-(void)setAppSelectionDimSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setStatusBarFadeInSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setStatusBarFadeOutSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setAlertCardifiedDismissalSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(double)alertCardifiedDismissHapticDelay;
-(double)alertCardifiedDismissZoomOutDelay;
-(double)alertCardifiedDismissClientAnimationsDelay;
-(void)setAlertBarSwipeDismissalSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(double)alertBarSwipeDismissHapticDelay;
-(double)alertBarSwipeDismissZoomOutDelay;
-(double)alertBarSwipeDismissClientAnimationsDelay;
-(void)setSiriSwipeDismissalSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(double)siriSwipeDismissHapticDelay;
-(double)siriSwipeDismissZoomOutDelay;
-(double)siriSwipeDismissClientAnimationsDelay;
-(void)setReopenButtonScaleSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(double)reopenButtonInitialScale;
-(double)reopenButtonFadeInDelay;
-(double)disableAsyncRenderingTransitionPercentage;
-(double)disallowAcceleratedHomeButtonPressTransitionPercentage;
-(double)centerZoomScale;
-(double)homeScreenBlurInSwitcherReduceMotionEnabled;
-(double)homeScreenBlurInApplication;
-(double)homeScreenOpacityInApplication;
-(double)homeScreenScaleInApplication;
-(double)wallpaperScaleInApplication;
-(double)dimmingAlphaInSwitcher;
-(double)dimmingAlphaInApplication;
-(double)dockHurdlingIconZoomInitialVelocity;
-(double)dockHurdlingIconZoomDockToBackTiming;
-(double)reduceMotionCrossfadeDuration;
-(double)iconZoomFloatingDockFadeDelay;
-(double)homeScreenScaleForMode:(long long)arg1 ;
-(double)homeScreenAlphaForMode:(long long)arg1 ;
-(double)wallpaperScaleForMode:(long long)arg1 ;
-(double)dimmingAlphaForMode:(long long)arg1 ;
-(double)homeScreenBlurProgressForMode:(long long)arg1 ;
@end

