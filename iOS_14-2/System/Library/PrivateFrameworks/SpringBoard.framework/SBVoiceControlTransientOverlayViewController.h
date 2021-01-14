/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)resignFirstResponder;
-(id)initWithSource:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)setContainerOrientation:(long long)arg1 ;
-(BOOL)handleHomeButtonPress;
-(void)conformsToCSExternalBehaviorProviding;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(int)_preferredStatusBarVisibility;
-(long long)notificationBehavior;
-(void)conformsToCSBehaviorProviding;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)proximityDetectionMode;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSString *)coverSheetIdentifier;
-(BOOL)canBecomeFirstResponder;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(long long)participantState;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(long long)idleWarnMode;
-(long long)scrollingStrategy;
-(void)viewDidLayoutSubviews;
-(unsigned long long)restrictedCapabilities;
-(void)dealloc;
-(long long)preferredUnlockedGestureDismissalStyle;
-(void)beginIgnoringAppearanceUpdates;
-(void)endIgnoringAppearanceUpdates;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(void)handleGestureDismissal;
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

