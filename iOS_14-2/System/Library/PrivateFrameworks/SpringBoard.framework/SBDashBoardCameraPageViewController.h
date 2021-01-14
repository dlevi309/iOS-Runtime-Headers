/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <CoverSheet/CSPageViewController.h>
#import <libobjc.A.dylib/SBDashBoardHostedAppViewControllerDelegate.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHomeGesturePanGestureRecognizerInterfaceDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBHomeGrabberPointerClickDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureInteractionDelegate.h>
#import <libobjc.A.dylib/CSApplicationHosting.h>

@class UIView, SBDashBoardHostedAppViewController, NSTimer, CSLockScreenSettings, SBLockScreenDefaults, SBHomeGestureInteraction, UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, SBHomeGestureParticipant, NSSet, NSString;

@interface SBDashBoardCameraPageViewController : CSPageViewController <SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBHomeGestureInteractionDelegate, CSApplicationHosting> {

	UIView* _maskView;
	UIView* _tintView;
	SBDashBoardHostedAppViewController* _appViewController;
	BOOL _orientationLockAcquired;
	BOOL _interactiveDismissalInProgress;
	BOOL _hasWarmedCameraForThisPresentation;
	BOOL _cameraPrewarmSucceeded;
	long long _cameraPresentLargestPercent;
	NSTimer* _prewarmDebounceTimer;
	NSTimer* _prewarmCancelTimer;
	CSLockScreenSettings* _prototypeSettings;
	SBLockScreenDefaults* _lockScreenDefaults;
	BOOL _wantsHomeGestureOwnership;
	SBHomeGestureInteraction* _homeGestureInteraction;
	UIViewFloatAnimatableProperty* _scaleProperty;
	UIViewFloatAnimatableProperty* _alphaProperty;
	SBFFluidBehaviorSettings* _scaleSettings;
	SBFFluidBehaviorSettings* _alphaSettings;
	SBHomeGestureParticipant* _homeGestureParticipant;

}

@property (assign,nonatomic) BOOL wantsHomeGestureOwnership;                                 //@synthesize wantsHomeGestureOwnership=_wantsHomeGestureOwnership - In the implementation block
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
+(BOOL)isAvailableForConfiguration;
+(unsigned long long)requiredCapabilities;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(id)hostedAppSceneHandle;
-(void)homeGestureInteractionBegan:(id)arg1 ;
-(id)hostedAppSceneHandles;
-(void)homeGestureInteractionChanged:(id)arg1 ;
-(void)homeGestureInteractionCancelled:(id)arg1 ;
-(void)setHomeGestureInteraction:(SBHomeGestureInteraction *)arg1 ;
-(unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(SBHomeGestureInteraction *)homeGestureInteraction;
-(BOOL)canHostAnApp;
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(void)_coolCameraIfNecessary;
-(id)requestedDismissalSettings;
-(void)setHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(void)setWantsHomeGestureOwnership:(BOOL)arg1 ;
-(BOOL)wantsHomeGestureOwnership;
-(id)pageRole;
-(void)_requestHomeGestureOwnership;
-(void)_relinquishHomeGestureOwnership;
-(void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)setScaleSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(UIViewFloatAnimatableProperty *)scaleProperty;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)_shouldPrelaunchOnSwipe;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(SBFFluidBehaviorSettings *)scaleSettings;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)conformsToCSApplicationHosting;
-(void)_createProperties;
-(BOOL)_shouldCancelInteractiveDismissGesture;
-(void)_updateDimmingAlpha:(double)arg1 interactive:(BOOL)arg2 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)_updateForPropertyChanged;
-(void)_prewarmCamera;
-(BOOL)dashBoardHostedAppViewController:(id)arg1 shouldTransitionToMode:(long long)arg2 ;
-(BOOL)_shouldPrewarmOnSwipe;
-(void)_resetAfterInteractiveGestureToCameraVisible:(BOOL)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(BOOL)homeGestureInteraction:(id)arg1 shouldBeginGestureRecognizerOfType:(long long)arg2 ;
-(long long)presentationAltitude;
-(void)_endPrewarmBackoffPeriod;
-(void)_updateCameraScale:(double)arg1 interactive:(BOOL)arg2 ;
-(UIViewFloatAnimatableProperty *)alphaProperty;
-(void)setActionsToDeliver:(NSSet *)arg1 ;
-(double)_prewarmThreshold;
-(long long)requestedDismissalType;
-(void)homeGestureInteractionEnded:(id)arg1 ;
-(BOOL)homeGestureInteraction:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)willTransitionToVisible:(BOOL)arg1 ;
-(void)_setSceneGrabberHidden:(BOOL)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(void)didTransitionToVisible:(BOOL)arg1 ;
-(void)setScaleProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)updateTransitionToVisible:(BOOL)arg1 progress:(double)arg2 mode:(long long)arg3 ;
-(void)_takeHiddenAssertionForHomeGrabber:(id)arg1 ;
-(BOOL)handlesRotationIndependentOfCoverSheet;
-(void)_makeApplicationStatic;
-(void)_bailIfFaceTimeCallComesIn;
-(void)_transitionAppViewWithProgress:(double)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)_relinquishHiddenAssertionForHomeGrabber:(id)arg1 ;
-(NSSet *)actionsToDeliver;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)setAlphaSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg1 ;
-(void)conformsToSBApplicationHosting;
-(CGPoint)_convertTranslationFromContainerOrientationToContentOrientation:(CGPoint)arg1 ;
-(double)_prelaunchThreshold;
-(void)loadView;
-(BOOL)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setAlphaProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)_prepareForInteractiveGestureToCameraVisible:(BOOL)arg1 ;
-(BOOL)isHostingAnApp;
-(void)_noteUserLaunchEventTime;
-(void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 interactive:(BOOL)arg3 ;
-(SBFFluidBehaviorSettings *)alphaSettings;
-(long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
@end

