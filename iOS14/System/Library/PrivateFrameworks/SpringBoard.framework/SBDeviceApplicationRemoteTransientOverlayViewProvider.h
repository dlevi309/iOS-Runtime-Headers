/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>
#import <libobjc.A.dylib/SBTransientOverlayViewControllerDelegate.h>

@class NSMutableArray, SBDeviceApplicationRemoteTransientOverlayContainerViewController, NSMapTable, NSString;

@interface SBDeviceApplicationRemoteTransientOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBTransientOverlayViewControllerDelegate> {

	NSMutableArray* _activePresentationContexts;
	SBDeviceApplicationRemoteTransientOverlayContainerViewController* _containerVC;
	NSMapTable* _keyboardFocusRedirectionsByRemoteVC;
	BOOL _needsDeactivationWithNoActiveTransientOverlays;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2 ;
-(void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1 ;
-(BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1 ;
-(void)presentRemoteTransientOverlayViewController:(id)arg1 presentationTarget:(id)arg2 ;
-(void)_dismissRemoteOverlayVC:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(id)arg1 ;
-(void)dismissRemoteTransientOverlayViewController:(id)arg1 ;
-(void)_deactivateIfPossible;
-(unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1 ;
-(void)_activateIfPossible;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithSceneHandle:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isPresentingTransientOverlay:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerDidEndRotation:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1 ;
-(void)_handleCoverSheetDidPresent:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1 ;
-(id)_realOverlayViewController;
-(BOOL)shouldFollowSceneOrientation;
-(void)_handleAppSwitcherWillPresent:(id)arg1 ;
-(void)dealloc;
@end

