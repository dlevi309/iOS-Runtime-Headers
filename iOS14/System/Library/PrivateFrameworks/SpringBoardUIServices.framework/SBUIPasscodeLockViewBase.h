/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUIBiometricResourceObserver.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/SBUIPasscodeBiometricAuthenticationViewLayoutDelegate.h>
#import <libobjc.A.dylib/SBUIPasscodeBiometricAuthenticationViewDelegate.h>
#import <libobjc.A.dylib/SBUIProudLockContainerViewControllerLockStatusProvider.h>
#import <libobjc.A.dylib/SBUIPoseidonContainerViewControllerLockStatusProvider.h>
#import <libobjc.A.dylib/SBUIPasscodeLockView_Internal.h>
#import <libobjc.A.dylib/SBUIPasscodeLockView.h>

@protocol SBFLegibilitySettingsProvider, BSInvalidatable, SBUIPasscodeLockViewDelegate, SBUIBiometricResource;
@class SBUIProudLockContainerViewController, NSString, UIView, SBUIPoseidonContainerViewController, UIColor, _UILegibilitySettings, NSMutableSet, SBUIPasscodeBiometricAuthenticationView, SBUIPasscodeEntryField, _UIKeyboardFeedbackGenerator, NSTimer, UINotificationFeedbackGenerator;

@interface SBUIPasscodeLockViewBase : UIView <SBUIBiometricResourceObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeBiometricAuthenticationViewLayoutDelegate, SBUIPasscodeBiometricAuthenticationViewDelegate, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPasscodeLockView_Internal, SBUIPasscodeLockView> {

	BOOL _needStatusTextUpdate;
	BOOL _playsKeypadSounds;
	BOOL _showsStatusField;
	BOOL _becameVisible;
	BOOL _usesBiometricPresentation;
	BOOL _allowsAutomaticBiometricPresentationTransition;
	BOOL _showsProudLock;
	BOOL _proudLockShowsBiometricStates;
	BOOL _suppressTitleText;
	double _backgroundAlpha;
	UIColor* _customBackgroundColor;
	id<SBFLegibilitySettingsProvider> _backgroundLegibilitySettingsProvider;
	double _currentBacklightLevel;
	_UILegibilitySettings* _legibilitySettings;
	BOOL _allowsStatusTextUpdatingOnResignFirstResponder;
	long long _passcodeLockViewState;
	BOOL _isBiometricAuthenticationAllowed;
	unsigned long long _biometricMatchingState;
	id<BSInvalidatable> _biometricMatchingAssertion;
	NSMutableSet* _biometricMatchingEnabledOverrideReasons;
	BOOL _deviceHasBeenUnlockedOnceSinceBoot;
	BOOL _pendingBioUnlock;
	int _currentPendingBioUnlockToken;
	UIView* _passcodeAuthenticationView;
	SBUIPasscodeBiometricAuthenticationView* _biometricAuthenticationView;
	SBUIProudLockContainerViewController* _proudLockContainerViewController;
	SBUIProudLockContainerViewController* _overrideProudLockContainerViewController;
	BOOL _shouldConsiderTapGuard;
	BOOL _screenOn;
	BOOL _confirmedNotInPocket;
	BOOL _canSuggestSwipeToRetry;
	BOOL _shouldResetForFailedPasscodeAttempt;
	BOOL _isTransitioning;
	int _style;
	id<SBUIPasscodeLockViewDelegate> _delegate;
	UIView* _poseidonContainerView;
	SBUIPoseidonContainerViewController* _poseidonContainerViewController;
	SBUIPasscodeEntryField* _entryField;
	double _luminanceBoost;
	id<SBUIBiometricResource> _biometricResource;
	_UIKeyboardFeedbackGenerator* _keyboardFeedbackBehavior;
	unsigned long long _statusState;
	NSTimer* _screenBrightnessChangedTimer;
	UINotificationFeedbackGenerator* _authenticationFeedbackBehavior;
	NSString* _statusText;
	NSString* _statusSubtitleText;
	SCD_Struct_SB1 _transitionContext;
	SCD_Struct_SB2 _proudLockConfiguration;

}

@property (assign,nonatomic) BOOL shouldResetForFailedPasscodeAttempt;                                                           //@synthesize shouldResetForFailedPasscodeAttempt=_shouldResetForFailedPasscodeAttempt - In the implementation block
@property (assign,setter=_setStatusState:,getter=_statusState,nonatomic) unsigned long long statusState;                         //@synthesize statusState=_statusState - In the implementation block
@property (nonatomic,retain) NSTimer * screenBrightnessChangedTimer;                                                             //@synthesize screenBrightnessChangedTimer=_screenBrightnessChangedTimer - In the implementation block
@property (nonatomic,retain) UINotificationFeedbackGenerator * authenticationFeedbackBehavior;                                   //@synthesize authenticationFeedbackBehavior=_authenticationFeedbackBehavior - In the implementation block
@property (assign,nonatomic) BOOL isTransitioning;                                                                               //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (assign,nonatomic) SCD_Struct_SB1 transitionContext;                                                                   //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,setter=_setLuminosityBoost:,getter=_luminosityBoost,nonatomic) double luminosityBoost;                         //@synthesize luminanceBoost=_luminanceBoost - In the implementation block
@property (setter=_setEntryField:,getter=_entryField,nonatomic,retain) SBUIPasscodeEntryField * _entryField;                     //@synthesize entryField=_entryField - In the implementation block
@property (setter=_setStatusText:,getter=_statusText,nonatomic,copy) NSString * statusText;                                      //@synthesize statusText=_statusText - In the implementation block
@property (setter=_setStatusSubtitleText:,getter=_statusSubtitleText,nonatomic,copy) NSString * statusSubtitleText;              //@synthesize statusSubtitleText=_statusSubtitleText - In the implementation block
@property (nonatomic,retain) id<SBUIBiometricResource> biometricResource;                                                        //@synthesize biometricResource=_biometricResource - In the implementation block
@property (assign,nonatomic) int style;                                                                                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) _UIKeyboardFeedbackGenerator * keyboardFeedbackBehavior;                                            //@synthesize keyboardFeedbackBehavior=_keyboardFeedbackBehavior - In the implementation block
@property (nonatomic,retain) UIView * passcodeAuthenticationView;                                                                //@synthesize passcodeAuthenticationView=_passcodeAuthenticationView - In the implementation block
@property (nonatomic,retain) UIView * biometricAuthenticationView;                                                               //@synthesize biometricAuthenticationView=_biometricAuthenticationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPasscodeSet; 
@property (nonatomic,readonly) BOOL isBiometricLockedOut; 
@property (nonatomic,retain) SBUIProudLockContainerViewController * overrideProudLockContainerViewController;                    //@synthesize overrideProudLockContainerViewController=_overrideProudLockContainerViewController - In the implementation block
@property (assign,nonatomic) SCD_Struct_SB2 proudLockConfiguration;                                                              //@synthesize proudLockConfiguration=_proudLockConfiguration - In the implementation block
@property (assign,nonatomic) BOOL confirmedNotInPocket;                                                                          //@synthesize confirmedNotInPocket=_confirmedNotInPocket - In the implementation block
@property (assign,nonatomic) BOOL canSuggestSwipeToRetry;                                                                        //@synthesize canSuggestSwipeToRetry=_canSuggestSwipeToRetry - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIPasscodeLockViewDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * passcode; 
@property (assign,getter=isBiometricAuthenticationAllowed,nonatomic) BOOL biometricAuthenticationAllowed;                        //@synthesize isBiometricAuthenticationAllowed=_isBiometricAuthenticationAllowed - In the implementation block
@property (assign,nonatomic) BOOL playsKeypadSounds; 
@property (assign,nonatomic) BOOL showsStatusField;                                                                              //@synthesize showsStatusField=_showsStatusField - In the implementation block
@property (assign,nonatomic) BOOL showsEmergencyCallButton; 
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (assign,nonatomic) BOOL usesBiometricPresentation;                                                                     //@synthesize usesBiometricPresentation=_usesBiometricPresentation - In the implementation block
@property (assign,nonatomic) BOOL allowsAutomaticBiometricPresentationTransition;                                                //@synthesize allowsAutomaticBiometricPresentationTransition=_allowsAutomaticBiometricPresentationTransition - In the implementation block
@property (assign,nonatomic) BOOL biometricPresentationAncillaryButtonsVisible; 
@property (assign,nonatomic) BOOL showsProudLock;                                                                                //@synthesize showsProudLock=_showsProudLock - In the implementation block
@property (nonatomic,retain) UIView * poseidonContainerView;                                                                     //@synthesize poseidonContainerView=_poseidonContainerView - In the implementation block
@property (nonatomic,retain) SBUIPoseidonContainerViewController * poseidonContainerViewController;                              //@synthesize poseidonContainerViewController=_poseidonContainerViewController - In the implementation block
@property (assign,nonatomic) long long passcodeLockViewState;                                                                    //@synthesize passcodeLockViewState=_passcodeLockViewState - In the implementation block
@property (nonatomic,retain) UIColor * customBackgroundColor;                                                                    //@synthesize customBackgroundColor=_customBackgroundColor - In the implementation block
@property (nonatomic,retain) id<SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider;                             //@synthesize backgroundLegibilitySettingsProvider=_backgroundLegibilitySettingsProvider - In the implementation block
@property (assign,getter=isScreenOn,nonatomic) BOOL screenOn;                                                                    //@synthesize screenOn=_screenOn - In the implementation block
@property (nonatomic,copy) NSString * unlockDestination; 
@property (assign,nonatomic) double backgroundAlpha;                                                                             //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
-(void)willMoveToSuperview:(id)arg1 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)setCustomBackgroundColor:(UIColor *)arg1 ;
-(long long)_orientation;
-(BOOL)showsCancelButton;
-(UIColor *)customBackgroundColor;
-(void)setTransitionContext:(SCD_Struct_SB1)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SBUIPasscodeLockViewDelegate>)delegate;
-(SCD_Struct_SB1)transitionContext;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setIsTransitioning:(BOOL)arg1 ;
-(BOOL)isScreenOn;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(NSString *)unlockDestination;
-(void)setUnlockDestination:(NSString *)arg1 ;
-(BOOL)confirmedNotInPocket;
-(void)setConfirmedNotInPocket:(BOOL)arg1 ;
-(id<SBUIBiometricResource>)biometricResource;
-(void)setPoseidonContainerView:(UIView *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<SBUIPasscodeLockViewDelegate>)arg1 ;
-(double)backgroundAlpha;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(NSString *)passcode;
-(void)setBiometricResource:(id<SBUIBiometricResource>)arg1 ;
-(UIView *)poseidonContainerView;
-(double)passcodeBiometricAuthenticationViewSideButtonsOffsetFromCenter:(id)arg1 ;
-(double)passcodeBiometricAuthenticationViewNumberPadAncillaryButtonOffsetFromTopOfScreen:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)passcodeBiometricAuthenticationViewUsePasscodeButtonHit:(id)arg1 ;
-(void)passcodeBiometricAuthenticationViewCancelButtonHit:(id)arg1 ;
-(void)passcodeBiometricAuthenticationViewEmergencyCallButtonHit:(id)arg1 ;
-(BOOL)showsEmergencyCallButton;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(BOOL)isTransitioning;
-(void)reset;
-(unsigned long long)_statusState;
-(void)_setLegibilitySettings:(id)arg1 ;
-(void)_setPasscodeLockViewState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setPlaysKeypadSounds:(BOOL)arg1 ;
-(void)setShowsStatusField:(BOOL)arg1 ;
-(void)_noteScreenBrightnessDidChange;
-(BOOL)_supportsProudLock;
-(void)_applyProudLockContainerViewControllerConfiguration;
-(void)setPasscodeLockViewState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)willTransitionToPasscodeView;
-(void)_updateBiometricAlpha;
-(void)updateForTransitionToPasscodeView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_armAdvanceToPasscodeTimer;
-(double)_biometricViewAlphaFromPasscodeLockViewState:(long long)arg1 ;
-(UIView *)biometricAuthenticationView;
-(void)_disarmAdvanceToPasscodeTimer;
-(void)_advanceToPasscodeTimerFired;
-(void)_advanceToPasscodeForMatchFailure:(BOOL)arg1 ;
-(void)_setStatusStateSwipeToRetryAnimated:(BOOL)arg1 ;
-(void)updateStatusTextAnimated:(BOOL)arg1 ;
-(void)_setSuppressTitleText:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_overrideBiometricMatchingEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)_proudLockShowingBiometricStates;
-(void)_clearBrightnessChangeTimer;
-(void)_setBiometricMatchingState:(unsigned long long)arg1 ;
-(void)setOverrideProudLockContainerViewController:(SBUIProudLockContainerViewController *)arg1 ;
-(void)_resetForFailedPasscode:(BOOL)arg1 ;
-(void)_setStatusState:(unsigned long long)arg1 ;
-(id)_proudLockContainerViewControllerToUpdate;
-(void)_updateStatusStateForLockoutIfNecessaryAnimatedly:(BOOL)arg1 ;
-(SBUIPasscodeEntryField *)_entryField;
-(void)_updateBiometricLayout;
-(void)resetForScreenOff;
-(void)_resetForFailedBiometricAttempt;
-(void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)_evaluateBiometricMatchingState;
-(BOOL)_canRecognizeBiometricAuthentication;
-(void)_handleBiometricAuthentication;
-(void)_resetStatusText;
-(void)_luminanceBoostDidChange;
-(void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1 ;
-(void)_evaluateLuminance;
-(double)_luminosityBoost;
-(void)_setLuminosityBoost:(double)arg1 ;
-(unsigned long long)_statusStateForLockoutState:(unsigned long long)arg1 ;
-(void)_setStatusState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isBoundsPortraitOriented;
-(void)setNeedsStatusTextUpdate;
-(id)_deviceSpecificTemperatureStringForTemperatureState:(unsigned long long)arg1 ;
-(id)_defaultStatusText;
-(void)_setStatusText:(id)arg1 ;
-(id)_statusText;
-(void)_setStatusSubtitleText:(id)arg1 ;
-(id)_statusSubtitleText;
-(void)_playAuthenticationFeedbackForSuccess:(BOOL)arg1 jiggleLock:(BOOL)arg2 ;
-(NSTimer *)screenBrightnessChangedTimer;
-(void)setScreenBrightnessChangedTimer:(NSTimer *)arg1 ;
-(void)_screenBrightnessReallyDidChange;
-(double)_luminanceBoostFromLegibility;
-(double)_luminanceBoostFromDisplayBrightness;
-(void)_resetProudLockAndTitleTextForFailedBiometricAttempt;
-(void)setScreenOn:(BOOL)arg1 ;
-(void)setStyle:(int)arg1 ;
-(BOOL)hasPasscodeSet;
-(void)_notifyDelegatePasscodeEnteredViaMesa;
-(BOOL)canSuggestSwipeToRetry;
-(void)_updateStatusTextForBioEvent:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_noteBottomFaceHasBeenOccluded;
-(void)_updateProudLockForBioUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateBiometricGlyphForBioEvent:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateProudLockForBioEvent:(unsigned long long)arg1 ;
-(BOOL)isBiometricLockedOut;
-(double)_numberPadOffsetFromTopOfScreen:(id)arg1 ;
-(void)biometricResource:(id)arg1 matchingEnabledDidChange:(BOOL)arg2 ;
-(void)resetForFailedPasscode;
-(void)resetForSuccessViaPasscode:(BOOL)arg1 ;
-(void)setKeypadVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showsStatusField;
-(void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2 ;
-(void)autofillForSuccessfulMesaAttemptWithCompletion:(/*^block*/id)arg1 ;
-(void)becomeActiveWithAnimationSettings:(id)arg1 ;
-(BOOL)supportsPoseidonCoaching;
-(void)setBiometricAuthenticationAllowed:(BOOL)arg1 ;
-(BOOL)playsKeypadSounds;
-(BOOL)usesBiometricPresentation;
-(void)setUsesBiometricPresentation:(BOOL)arg1 ;
-(BOOL)allowsAutomaticBiometricPresentationTransition;
-(BOOL)showsProudLock;
-(void)setShowsProudLock:(BOOL)arg1 ;
-(void)setAllowsAutomaticBiometricPresentationTransition:(BOOL)arg1 ;
-(BOOL)biometricPresentationAncillaryButtonsVisible;
-(void)setBiometricPresentationAncillaryButtonsVisible:(BOOL)arg1 ;
-(SBUIPoseidonContainerViewController *)poseidonContainerViewController;
-(void)setPoseidonContainerViewController:(SBUIPoseidonContainerViewController *)arg1 ;
-(long long)passcodeLockViewState;
-(void)setPasscodeLockViewState:(long long)arg1 ;
-(id<SBFLegibilitySettingsProvider>)backgroundLegibilitySettingsProvider;
-(void)setBackgroundLegibilitySettingsProvider:(id<SBFLegibilitySettingsProvider>)arg1 ;
-(void)_setEntryField:(id)arg1 ;
-(void)_resumeBiometricMatchingAdvisory:(BOOL)arg1 ;
-(void)beginTransitionToState:(long long)arg1 ;
-(void)updateTransitionWithProgress:(double)arg1 ;
-(void)willEndTransitionToState:(long long)arg1 ;
-(void)didEndTransitionToState:(long long)arg1 ;
-(SBUIProudLockContainerViewController *)overrideProudLockContainerViewController;
-(SCD_Struct_SB2)proudLockConfiguration;
-(void)setProudLockConfiguration:(SCD_Struct_SB2)arg1 ;
-(void)setCanSuggestSwipeToRetry:(BOOL)arg1 ;
-(void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(BOOL)arg1 ;
-(void)_sendDelegateKeypadKeyUp;
-(void)_sendDelegateKeypadKeyDown;
-(UIView *)passcodeAuthenticationView;
-(void)setPasscodeAuthenticationView:(UIView *)arg1 ;
-(void)setBiometricAuthenticationView:(UIView *)arg1 ;
-(_UIKeyboardFeedbackGenerator *)keyboardFeedbackBehavior;
-(void)setKeyboardFeedbackBehavior:(_UIKeyboardFeedbackGenerator *)arg1 ;
-(BOOL)shouldResetForFailedPasscodeAttempt;
-(void)setShouldResetForFailedPasscodeAttempt:(BOOL)arg1 ;
-(UINotificationFeedbackGenerator *)authenticationFeedbackBehavior;
-(void)setAuthenticationFeedbackBehavior:(UINotificationFeedbackGenerator *)arg1 ;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(int)style;
-(void)dealloc;
-(BOOL)isBiometricAuthenticationAllowed;
@end

