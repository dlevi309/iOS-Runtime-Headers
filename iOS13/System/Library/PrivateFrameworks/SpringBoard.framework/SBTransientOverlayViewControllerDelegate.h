/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBTransientOverlayViewControllerDelegate <NSObject>
@required
-(unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1;
-(long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1;
-(BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)arg1;
-(void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1;
-(void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1;
-(void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1;
-(void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1;
-(void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1;
-(void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1;
-(void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1;
-(void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1;
-(void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2;
-(void)transientOverlayViewControllerDidEndRotation:(id)arg1;

@end

