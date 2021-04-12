/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBTransientOverlayPresentationManagerDelegate <NSObject>
@required
-(void)transientOverlayPresentationManager:(id)arg1 didDismissViewController:(id)arg2 wasTopmostPresentation:(BOOL)arg3;
-(void)transientOverlayPresentationManager:(id)arg1 willPresentViewController:(id)arg2;
-(void)transientOverlayPresentationManager:(id)arg1 preferredWhitePointAdaptivityStyleDidChangeWithAnimationSettings:(id)arg2;
-(BOOL)transientOverlayPresentationManager:(id)arg1 shouldResignFirstResponderForKeyWindow:(id)arg2;
-(BOOL)transientOverlayPresentationManager:(id)arg1 shouldRestoreFirstResponderForKeyWindow:(id)arg2;
-(void)transientOverlayPresentationManagerRequestsAppIconForceTouchDismissal:(id)arg1 animated:(BOOL)arg2;
-(id)transientOverlayPresentationManager:(id)arg1 acquireWallpaperAnimationSuspensionAssertionWithReason:(id)arg2;
-(id)transientOverlayPresentationManager:(id)arg1 acquireDisableAutoUnlockAssertionWithReason:(id)arg2;
-(id)transientOverlayPresentationManager:(id)arg1 acquireProximitySensorEnabledAssertionWithReason:(id)arg2;
-(id)transientOverlayPresentationManager:(id)arg1 acquireInteractiveScreenshotGestureDisabledAssertionWithReason:(id)arg2;
-(id)bannerLongLookPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1;
-(id)transientOverlayPresentationManager:(id)arg1 acquireBannerLongLookWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3;
-(void)transientOverlayPresentationManagerRequestsBannerLongLookDismissal:(id)arg1 animated:(BOOL)arg2;
-(id)controlCenterPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1;
-(id)transientOverlayPresentationManager:(id)arg1 acquireControlCenterWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3;
-(void)transientOverlayPresentationManagerRequestsControlCenterDismissal:(id)arg1 animated:(BOOL)arg2;
-(id)siriPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1;
-(id)transientOverlayPresentationManager:(id)arg1 acquireSiriWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3;
-(void)transientOverlayPresentationManagerRequestsSiriDismissal:(id)arg1 animated:(BOOL)arg2;
-(id)currentStatusBarSettingsForTransientOverlayPresentationManager:(id)arg1;
-(id)transientOverlayPresentationManager:(id)arg1 acquireHideAppStatusBarAssertionWithReason:(id)arg2 animated:(BOOL)arg3;
-(id)transientOverlayPresentationManager:(id)arg1 acquireDeviceOrientationUpdateDeferralAssertionWithReason:(id)arg2;
-(id)transientOverlayPresentationManager:(id)arg1 newSceneDeactivationAssertionWithReason:(long long)arg2;
-(void)transientOverlayPresentationManager:(id)arg1 registerCoverSheetExternalBehaviorProvider:(id)arg2;
-(void)transientOverlayPresentationManager:(id)arg1 unregisterCoverSheetExternalBehaviorProvider:(id)arg2;
-(void)transientOverlayPresentationManager:(id)arg1 willChangeTopmostViewControllerInterfaceOrientationToOrientation:(long long)arg2;
-(unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayPresentationManager:(id)arg1;
-(long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayPresentationManager:(id)arg1;
-(BOOL)defaultShouldAutorotateForTransientOverlayPresentationManager:(id)arg1;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayPresentationManager:(id)arg1;

@end

