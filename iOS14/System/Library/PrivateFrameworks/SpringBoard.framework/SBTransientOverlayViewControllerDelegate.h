/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBTransientOverlayViewControllerDelegate <NSObject>
@required
-(void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1;
-(void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2;
-(void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1;
-(void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1;
-(BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1;
-(long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1;
-(void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(id)arg1;
-(unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1;
-(void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)arg1;
-(void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1;
-(void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1;
-(void)transientOverlayViewControllerDidEndRotation:(id)arg1;
-(void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1;
-(void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1;

@end

