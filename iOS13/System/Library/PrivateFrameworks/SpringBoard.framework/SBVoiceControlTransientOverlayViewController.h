/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SBVoiceControlViewControllerDelegate.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>

@protocol SBVoiceControlTransientOverlayViewControllerDelegate;
@class _UIBackdropView, SBVoiceControlViewController, NSArray, NSString;

@interface SBVoiceControlTransientOverlayViewController : SBTransientOverlayViewController <SBVoiceControlViewControllerDelegate, CSExternalBehaviorProviding> {

	_UIBackdropView* _backdropView;
	SBVoiceControlViewController* _contentViewController;
	id<SBVoiceControlTransientOverlayViewControllerDelegate> _voiceControlDelegate;

}

@property (nonatomic,copy) NSArray * nextRecognitionAudioInputPaths; 
@property (assign,nonatomic) BOOL shouldAllowSensitiveActions; 
@property (assign,nonatomic) BOOL shouldDisableHandlerActions; 
@property (assign,nonatomic) BOOL shouldDisableVoiceControlForBluetoothRequests; 
@property (assign,getter=isVoiceControlLoggingEnabled,nonatomic) BOOL voiceControlLoggingEnabled; 
@property (assign,nonatomic,__weak) id<SBVoiceControlTransientOverlayViewControllerDelegate> voiceControlDelegate;              //@synthesize voiceControlDelegate=_voiceControlDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)dealloc;
-(BOOL)becomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)resignFirstResponder;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(int)_preferredStatusBarVisibility;
-(long long)preferredStatusBarStyle;
-(long long)preferredWhitePointAdaptivityStyle;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)initWithSource:(id)arg1 ;
-(long long)idleTimerMode;
-(void)setContainerOrientation:(long long)arg1 ;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(long long)participantState;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(BOOL)handleHomeButtonPress;
-(long long)preferredUnlockedGestureDismissalStyle;
-(void)beginIgnoringAppearanceUpdates;
-(void)endIgnoringAppearanceUpdates;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(long long)preferredLockedGestureDismissalStyle;
-(BOOL)shouldDisableOrientationUpdates;
-(BOOL)prefersProximityDetectionEnabled;
-(void)resetSessionWithSource:(id)arg1 ;
-(void)handleHeadsetButtonUpFromButtonDownSource:(BOOL)arg1 ;
-(void)setNextRecognitionAudioInputPaths:(NSArray *)arg1 ;
-(void)setVoiceControlDelegate:(id<SBVoiceControlTransientOverlayViewControllerDelegate>)arg1 ;
-(BOOL)isVoiceControlLoggingEnabled;
-(void)setVoiceControlLoggingEnabled:(BOOL)arg1 ;
-(void)setShouldDisableHandlerActions:(BOOL)arg1 ;
-(void)setShouldDisableVoiceControlForBluetoothRequests:(BOOL)arg1 ;
-(void)setShouldAllowSensitiveActions:(BOOL)arg1 ;
-(NSArray *)nextRecognitionAudioInputPaths;
-(BOOL)shouldAllowSensitiveActions;
-(BOOL)shouldDisableHandlerActions;
-(BOOL)shouldDisableVoiceControlForBluetoothRequests;
-(void)voiceControlViewControllerPrefersProximityDetectionEnabledDidChange:(id)arg1 ;
-(void)voiceControlViewControllerRequestsDismissal:(id)arg1 ;
-(id<SBVoiceControlTransientOverlayViewControllerDelegate>)voiceControlDelegate;
@end

