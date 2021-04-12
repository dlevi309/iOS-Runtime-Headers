/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _hasPreservedInputViews;
	BOOL _isDismissing;
	SBAssistantController* _assistantController;
	long long _dismissalType;
	SBMainWorkspaceTransaction* _currentTransaction;

}

@property (nonatomic,retain) SBAssistantController * assistantController;                  //@synthesize assistantController=_assistantController - In the implementation block
@property (nonatomic,readonly) long long dismissalType;                                    //@synthesize dismissalType=_dismissalType - In the implementation block
@property (nonatomic,retain) SBMainWorkspaceTransaction * currentTransaction;              //@synthesize currentTransaction=_currentTransaction - In the implementation block
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_didComplete;
-(void)_didInterruptWithReason:(id)arg1 ;
-(SBMainWorkspaceTransaction *)currentTransaction;
-(void)setCurrentTransaction:(SBMainWorkspaceTransaction *)arg1 ;
-(long long)dismissalType;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(id)_layoutSettings;
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
-(double)_zoomOutDelay;
-(double)_scaleForDismissal;
-(void)_setFluidDismissalState:(id)arg1 ;
-(void)_cleanupHierarchyForDismissal:(BOOL)arg1 ;
-(double)_scaleForGestureProgress;
-(double)_yOffsetForGestureProgress;
-(double)_backgroundWeightingForGestureProgress;
-(double)_clientAnimationsDelay;
-(SBAssistantController *)assistantController;
-(double)_hapticDelay;
-(long long)_notificationFeedbackType;
-(double)_swipeUpGestureTranslation;
-(id)initWithTransitionRequest:(id)arg1 assistantController:(id)arg2 dismissalType:(long long)arg3 ;
-(void)systemGestureStateChanged:(id)arg1 ;
-(void)setAssistantController:(SBAssistantController *)arg1 ;
@end

