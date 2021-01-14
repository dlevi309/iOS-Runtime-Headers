/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>

@class SBAppSwitcherSettings, SBAppStatusBarSettingsAssertion, UINotificationFeedbackGenerator, SBAssistantRootViewController, SBTransientOverlayPresentationManager, SBTransientOverlayViewController, SBAssistantController, SBMainWorkspaceTransaction;

@interface SBModalUIFluidDismissGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction {

	SBAppSwitcherSettings* _settings;
	SBAppStatusBarSettingsAssertion* _statusBarAssertion;
	UINotificationFeedbackGenerator* _dismissalFeedbackGenerator;
	SBAssistantRootViewController* _assistantRootViewController;
	SBTransientOverlayPresentationManager* _transientOverlayPresentationManager;
	SBTransientOverlayViewController* _transientOverlayViewController;
	CGPoint _dismissingViewTouchOffset;
	CGRect _originalBounds;
	CGPoint _originalCenter;
	BOOL _initiatedFromBottomEdge;
	BOOL _hasPreservedInputViews;
	BOOL _isDismissing;
	BOOL _animateGestureCancelationOrFailure;
	double _dismissalThreshold;
	SBAssistantController* _assistantController;
	long long _dismissalType;
	SBMainWorkspaceTransaction* _currentTransaction;

}

@property (nonatomic,retain) SBAssistantController * assistantController;                  //@synthesize assistantController=_assistantController - In the implementation block
@property (nonatomic,readonly) long long dismissalType;                                    //@synthesize dismissalType=_dismissalType - In the implementation block
@property (nonatomic,retain) SBMainWorkspaceTransaction * currentTransaction;              //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (assign,nonatomic) double dismissalThreshold;                                    //@synthesize dismissalThreshold=_dismissalThreshold - In the implementation block
@property (assign,nonatomic) BOOL animateGestureCancelationOrFailure;                      //@synthesize animateGestureCancelationOrFailure=_animateGestureCancelationOrFailure - In the implementation block
-(SBAssistantController *)assistantController;
-(BOOL)_canBeInterrupted;
-(SBMainWorkspaceTransaction *)currentTransaction;
-(void)_begin;
-(void)_didComplete;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(id)_layoutSettings;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)setCurrentTransaction:(SBMainWorkspaceTransaction *)arg1 ;
-(void)setAssistantController:(SBAssistantController *)arg1 ;
-(id)_viewForGesture;
-(id)_dismissalFeedbackGenerator;
-(void)_beginWithGesture:(id)arg1 ;
-(void)_updateWithGesture:(id)arg1 ;
-(void)_finishWithGesture:(id)arg1 ;
-(void)_finishWithCompletionType:(long long)arg1 ;
-(void)_updateDismissingViewLayoutAndStyleForGesture;
-(BOOL)_shouldDismissImmmediatelyAtFullGestureProgress;
-(double)_swipeUpGestureProgress;
-(void)_finishInteractionAndDismiss:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_dismissClientAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(long long)dismissalType;
-(double)_zoomOutDelay;
-(double)_backgroundWeightingForDismissal:(BOOL)arg1 ;
-(double)_scaleForDismissal;
-(double)_scaleForGestureProgress;
-(void)_setFluidDismissalState:(id)arg1 ;
-(void)_cleanupHierarchyForDismissal:(BOOL)arg1 ;
-(double)_yOffsetForGestureProgress;
-(double)_swipeUpGestureTranslation;
-(double)_backgroundWeightingForGestureProgress;
-(double)_clientAnimationsDelay;
-(double)_hapticDelay;
-(long long)_notificationFeedbackType;
-(id)initWithTransitionRequest:(id)arg1 assistantController:(id)arg2 dismissalType:(long long)arg3 initiatedFromBottomEdge:(BOOL)arg4 ;
-(void)systemGestureStateChanged:(id)arg1 ;
-(double)dismissalThreshold;
-(void)setDismissalThreshold:(double)arg1 ;
-(BOOL)animateGestureCancelationOrFailure;
-(void)setAnimateGestureCancelationOrFailure:(BOOL)arg1 ;
@end

