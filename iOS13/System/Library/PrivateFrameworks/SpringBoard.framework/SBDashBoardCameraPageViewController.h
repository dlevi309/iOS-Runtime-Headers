/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <CoverSheet/CSPageViewController.h>
#import <libobjc.A.dylib/SBDashBoardHostedAppViewControllerDelegate.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHomeGesturePanGestureRecognizerInterfaceDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureInteractionDelegate.h>
#import <libobjc.A.dylib/CSApplicationHosting.h>

@class UIView, SBDashBoardHostedAppViewController, CSLockScreenSettings, SBLockScreenDefaults, SBHomeGestureInteraction, UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, SBHomeGestureParticipant, NSSet, NSString;

@interface SBDashBoardCameraPageViewController : CSPageViewController <SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBHomeGestureParticipantDelegate, SBHomeGestureInteractionDelegate, CSApplicationHosting> {

	UIView* _maskView;
	UIView* _tintView;
	SBDashBoardHostedAppViewController* _appViewController;
	BOOL _orientationLockAcquired;
	BOOL _interactiveDismissalInProgress;
	BOOL _hasWarmedCameraForThisPresentation;
	BOOL _cameraPrewarmSucceeded;
	long long _cameraPresentLargestPercent;
	CSLockScreenSettings* _prototypeSettings;
	SBLockScreenDefaults* _lockScreenDefaults;
	SBHomeGestureInteraction* _homeGestureInteraction;
	UIViewFloatAnimatableProperty* _scaleProperty;
	UIViewFloatAnimatableProperty* _alphaProperty;
	SBFFluidBehaviorSettings* _scaleSettings;
	SBFFluidBehaviorSettings* _alphaSettings;
	SBHomeGestureParticipant* _homeGestureParticipant;

}

@property (nonatomic,retain) SBHomeGestureInteraction * homeGestureInteraction;              //@synthesize homeGestureInteraction=_homeGestureInteraction - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * scaleProperty;                  //@synthesize scaleProperty=_scaleProperty - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * alphaProperty;                  //@synthesize alphaProperty=_alphaProperty - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * scaleSettings;                       //@synthesize scaleSettings=_scaleSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * alphaSettings;                       //@synthesize alphaSettings=_alphaSettings - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * homeGestureParticipant;              //@synthesize homeGestureParticipant=_homeGestureParticipant - In the implementation block
@property (nonatomic,retain) NSSet * actionsToDeliver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)requiredCapabilities;
+(BOOL)isAvailableForConfiguration;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)_createProperties;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(long long)presentationAltitude;
-(id)pageRole;
-(BOOL)isHostingAnApp;
-(id)hostedAppSceneHandle;
-(void)updateTransitionToVisible:(BOOL)arg1 progress:(double)arg2 mode:(long long)arg3 ;
-(void)setActionsToDeliver:(NSSet *)arg1 ;
-(void)willTransitionToVisible:(BOOL)arg1 ;
-(void)didTransitionToVisible:(BOOL)arg1 ;
-(BOOL)canHostAnApp;
-(id)hostedAppSceneHandles;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)handlesRotationIndependentOfCoverSheet;
-(long long)requestedDismissalType;
-(id)requestedDismissalSettings;
-(void)_updateForPropertyChanged;
-(BOOL)_shouldCancelInteractiveDismissGesture;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(void)setHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(void)_requestHomeGestureOwnership;
-(void)_relinquishHomeGestureOwnership;
-(NSSet *)actionsToDeliver;
-(void)_transitionAppViewWithProgress:(double)arg1 ;
-(BOOL)_shouldPrewarmOnSwipe;
-(double)_prewarmThreshold;
-(void)_prewarmCamera;
-(BOOL)_shouldPrelaunchOnSwipe;
-(double)_prelaunchThreshold;
-(void)_noteUserLaunchEventTime;
-(void)_makeApplicationStatic;
-(void)_resetAfterInteractiveGestureToCameraVisible:(BOOL)arg1 ;
-(void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 interactive:(BOOL)arg3 ;
-(void)_setSceneGrabberHidden:(BOOL)arg1 ;
-(void)_bailIfFaceTimeCallComesIn;
-(void)_coolCameraIfNecessary;
-(void)_takeHiddenAssertionForHomeGrabber:(id)arg1 ;
-(void)_relinquishHiddenAssertionForHomeGrabber:(id)arg1 ;
-(void)_prepareForInteractiveGestureToCameraVisible:(BOOL)arg1 ;
-(CGPoint)_convertTranslationFromContainerOrientationToContentOrientation:(CGPoint)arg1 ;
-(void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 ;
-(void)homeGestureInteractionEnded:(id)arg1 ;
-(void)_updateCameraScale:(double)arg1 interactive:(BOOL)arg2 ;
-(void)_updateDimmingAlpha:(double)arg1 interactive:(BOOL)arg2 ;
-(BOOL)dashBoardHostedAppViewController:(id)arg1 shouldTransitionToMode:(long long)arg2 ;
-(long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1 ;
-(unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1 ;
-(void)homeGestureInteractionBegan:(id)arg1 ;
-(void)homeGestureInteractionChanged:(id)arg1 ;
-(void)homeGestureInteractionCancelled:(id)arg1 ;
-(BOOL)homeGestureInteraction:(id)arg1 shouldBeginGestureRecognizerOfType:(long long)arg2 ;
-(BOOL)homeGestureInteraction:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(SBHomeGestureInteraction *)homeGestureInteraction;
-(void)setHomeGestureInteraction:(SBHomeGestureInteraction *)arg1 ;
-(UIViewFloatAnimatableProperty *)scaleProperty;
-(void)setScaleProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(UIViewFloatAnimatableProperty *)alphaProperty;
-(void)setAlphaProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(SBFFluidBehaviorSettings *)scaleSettings;
-(void)setScaleSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)alphaSettings;
-(void)setAlphaSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end

