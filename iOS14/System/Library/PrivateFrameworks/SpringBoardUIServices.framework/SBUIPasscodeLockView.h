/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

@class NSString, UIView, SBUIPoseidonContainerViewController, UIColor;


@protocol SBUIPasscodeLockView <NSObject>
@property (assign,nonatomic,__weak) id<SBUIPasscodeLockViewDelegate> delegate; 
@property (nonatomic,readonly) int style; 
@property (nonatomic,readonly) NSString * passcode; 
@property (assign,getter=isBiometricAuthenticationAllowed,nonatomic) BOOL biometricAuthenticationAllowed; 
@property (assign,nonatomic) BOOL playsKeypadSounds; 
@property (assign,nonatomic) BOOL showsStatusField; 
@property (assign,nonatomic) BOOL showsEmergencyCallButton; 
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (assign,nonatomic) BOOL usesBiometricPresentation; 
@property (assign,nonatomic) BOOL allowsAutomaticBiometricPresentationTransition; 
@property (assign,nonatomic) BOOL biometricPresentationAncillaryButtonsVisible; 
@property (assign,nonatomic) BOOL showsProudLock; 
@property (nonatomic,retain) UIView * poseidonContainerView; 
@property (nonatomic,retain) SBUIPoseidonContainerViewController * poseidonContainerViewController; 
@property (assign,nonatomic) long long passcodeLockViewState; 
@property (nonatomic,retain) UIColor * customBackgroundColor; 
@property (nonatomic,retain) id<SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider; 
@property (assign,getter=isScreenOn,nonatomic) BOOL screenOn; 
@property (nonatomic,copy) NSString * unlockDestination; 
@property (assign,nonatomic) double backgroundAlpha; 
@required
-(void)setCustomBackgroundColor:(id)arg1;
-(BOOL)showsCancelButton;
-(UIColor *)customBackgroundColor;
-(id<SBUIPasscodeLockViewDelegate>)delegate;
-(void)setBackgroundAlpha:(double)arg1;
-(BOOL)isScreenOn;
-(void)setShowsCancelButton:(BOOL)arg1;
-(NSString *)unlockDestination;
-(void)setUnlockDestination:(id)arg1;
-(void)setPoseidonContainerView:(id)arg1;
-(void)setDelegate:(id)arg1;
-(double)backgroundAlpha;
-(NSString *)passcode;
-(UIView *)poseidonContainerView;
-(BOOL)showsEmergencyCallButton;
-(void)setShowsEmergencyCallButton:(BOOL)arg1;
-(void)reset;
-(void)setPlaysKeypadSounds:(BOOL)arg1;
-(void)setShowsStatusField:(BOOL)arg1;
-(void)setPasscodeLockViewState:(long long)arg1 animated:(BOOL)arg2;
-(void)resetForScreenOff;
-(void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
-(void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1;
-(void)setScreenOn:(BOOL)arg1;
-(void)resetForFailedPasscode;
-(void)resetForSuccessViaPasscode:(BOOL)arg1;
-(void)setKeypadVisible:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)showsStatusField;
-(void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
-(void)autofillForSuccessfulMesaAttemptWithCompletion:(/*^block*/id)arg1;
-(void)becomeActiveWithAnimationSettings:(id)arg1;
-(BOOL)supportsPoseidonCoaching;
-(void)setBiometricAuthenticationAllowed:(BOOL)arg1;
-(BOOL)playsKeypadSounds;
-(BOOL)usesBiometricPresentation;
-(void)setUsesBiometricPresentation:(BOOL)arg1;
-(BOOL)allowsAutomaticBiometricPresentationTransition;
-(BOOL)showsProudLock;
-(void)setShowsProudLock:(BOOL)arg1;
-(void)setAllowsAutomaticBiometricPresentationTransition:(BOOL)arg1;
-(BOOL)biometricPresentationAncillaryButtonsVisible;
-(void)setBiometricPresentationAncillaryButtonsVisible:(BOOL)arg1;
-(SBUIPoseidonContainerViewController *)poseidonContainerViewController;
-(void)setPoseidonContainerViewController:(id)arg1;
-(long long)passcodeLockViewState;
-(void)setPasscodeLockViewState:(long long)arg1;
-(id<SBFLegibilitySettingsProvider>)backgroundLegibilitySettingsProvider;
-(void)setBackgroundLegibilitySettingsProvider:(id)arg1;
-(int)style;
-(BOOL)isBiometricAuthenticationAllowed;

@end

