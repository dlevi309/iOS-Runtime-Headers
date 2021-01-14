/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBFAuthenticationResponder.h>
#import <libobjc.A.dylib/SBUIPasscodeLockViewDelegate.h>

@protocol SBUIPasscodeLockView, SBPasscodeEntryTransientOverlayViewControllerDelegate;
@class SBFUserAuthenticationController, SBUIPasscodeViewWithLockScreenStyle, CSLockScreenPearlSettings, CSPoseidonViewController, NSString;

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate> {

	BOOL _attemptingUnlock;
	SBFUserAuthenticationController* _authenticationController;
	id<SBUIPasscodeLockView> _passcodeRequester;
	SBUIPasscodeViewWithLockScreenStyle* _passcodeView;
	CSLockScreenPearlSettings* _pearlSettings;
	CSPoseidonViewController* _poseidonViewController;
	BOOL _keyboardVisible;
	BOOL _showEmergencyCallButton;
	BOOL _useBiometricPresentation;
	int _intent;
	id<SBPasscodeEntryTransientOverlayViewControllerDelegate> _delegate;
	NSString* _unlockDestination;

}

@property (assign,nonatomic,__weak) id<SBPasscodeEntryTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showEmergencyCallButton;                                                           //@synthesize showEmergencyCallButton=_showEmergencyCallButton - In the implementation block
@property (assign,nonatomic) BOOL useBiometricPresentation;                                                          //@synthesize useBiometricPresentation=_useBiometricPresentation - In the implementation block
@property (nonatomic,copy) NSString * unlockDestination;                                                             //@synthesize unlockDestination=_unlockDestination - In the implementation block
@property (assign,nonatomic) int intent;                                                                             //@synthesize intent=_intent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)intent;
-(id)initWithAuthenticationController:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(id<SBPasscodeEntryTransientOverlayViewControllerDelegate>)delegate;
-(void)handleSuccessfulAuthenticationRequest:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(int)_preferredStatusBarVisibility;
-(void)setIntent:(int)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2 ;
-(NSString *)unlockDestination;
-(void)setUnlockDestination:(NSString *)arg1 ;
-(void)setDelegate:(id<SBPasscodeEntryTransientOverlayViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)handleInvalidAuthenticationRequest:(id)arg1 ;
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(long long)idleWarnMode;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(BOOL)isContentOpaque;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(id)preferredDisplayLayoutElementIdentifier;
-(void)_updatePrototypeSettings;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(BOOL)arg2 ;
-(void)_attemptUnlock:(id)arg1 passcode:(id)arg2 ;
-(void)handleWillShowKeyboard:(BOOL)arg1 ;
-(void)setShowEmergencyCallButton:(BOOL)arg1 ;
-(void)setUseBiometricPresentation:(BOOL)arg1 ;
-(BOOL)showEmergencyCallButton;
-(BOOL)useBiometricPresentation;
@end

