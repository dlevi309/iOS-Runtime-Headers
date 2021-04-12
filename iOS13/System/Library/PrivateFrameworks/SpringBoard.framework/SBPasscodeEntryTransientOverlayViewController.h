/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBFAuthenticationResponder.h>
#import <libobjc.A.dylib/SBUIPasscodeLockViewDelegate.h>

@protocol SBUIPasscodeLockView, SBPasscodeEntryTransientOverlayViewControllerDelegate;
@class SBFUserAuthenticationController, SBUIPasscodeViewWithLockScreenStyle, CSLockScreenPearlSettings, NSString;

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate> {

	BOOL _attemptingUnlock;
	SBFUserAuthenticationController* _authenticationController;
	id<SBUIPasscodeLockView> _passcodeRequester;
	SBUIPasscodeViewWithLockScreenStyle* _passcodeView;
	CSLockScreenPearlSettings* _pearlSettings;
	BOOL _showEmergencyCallButton;
	BOOL _useBiometricPresentation;
	id<SBPasscodeEntryTransientOverlayViewControllerDelegate> _delegate;
	NSString* _unlockDestination;

}

@property (assign,nonatomic,__weak) id<SBPasscodeEntryTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showEmergencyCallButton;                                                           //@synthesize showEmergencyCallButton=_showEmergencyCallButton - In the implementation block
@property (assign,nonatomic) BOOL useBiometricPresentation;                                                          //@synthesize useBiometricPresentation=_useBiometricPresentation - In the implementation block
@property (nonatomic,copy) NSString * unlockDestination;                                                             //@synthesize unlockDestination=_unlockDestination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBPasscodeEntryTransientOverlayViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBPasscodeEntryTransientOverlayViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isContentOpaque;
-(long long)preferredStatusBarStyle;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)initWithAuthenticationController:(id)arg1 ;
-(void)handleSuccessfulAuthenticationRequest:(id)arg1 ;
-(void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2 ;
-(void)handleInvalidAuthenticationRequest:(id)arg1 ;
-(NSString *)unlockDestination;
-(void)setUnlockDestination:(NSString *)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(long long)idleTimerMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(void)setUseBiometricPresentation:(BOOL)arg1 ;
-(BOOL)useBiometricPresentation;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(BOOL)arg2 ;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)preferredDisplayLayoutElementIdentifier;
-(void)_updatePrototypeSettings;
-(void)_attemptUnlock:(id)arg1 passcode:(id)arg2 ;
-(void)setShowEmergencyCallButton:(BOOL)arg1 ;
-(BOOL)showEmergencyCallButton;
@end

