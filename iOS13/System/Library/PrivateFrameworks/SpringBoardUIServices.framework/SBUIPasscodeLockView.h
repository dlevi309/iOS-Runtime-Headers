/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

@class NSString, UIColor;


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
@property (assign,nonatomic) long long passcodeLockViewState; 
@property (nonatomic,retain) UIColor * customBackgroundColor; 
@property (nonatomic,retain) id<SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider; 
@property (assign,getter=isScreenOn,nonatomic) BOOL screenOn; 
@property (nonatomic,copy) NSString * unlockDestination; 
@property (assign,nonatomic) double backgroundAlpha; 
@required
-(id<SBUIPasscodeLockViewDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reset;
-(int)style;
-(double)backgroundAlpha;
-(void)setBackgroundAlpha:(double)arg1;
-(BOOL)showsCancelButton;
-(void)setShowsCancelButton:(BOOL)arg1;
-(void)setCustomBackgroundColor:(id)arg1;
-(UIColor *)customBackgroundColor;
-(NSString *)passcode;
-(NSString *)unlockDestination;
-(void)setUnlockDestination:(id)arg1;
-(BOOL)showsEmergencyCallButton;
-(void)setShowsEmergencyCallButton:(BOOL)arg1;
-(void)setPlaysKeypadSounds:(BOOL)arg1;
-(void)setShowsStatusField:(BOOL)arg1;
-(void)setPasscodeLockViewState:(long long)arg1 animated:(BOOL)arg2;
-(void)resetForScreenOff;
-(void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
-(void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1;
-(void)resetForFailedPasscode;
-(void)resetForSuccessViaPasscode:(BOOL)arg1;
-(void)setKeypadVisible:(BOOL)arg1 animated:(BOOL)arg2;
-(void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
-(void)autofillForSuccessfulMesaAttemptWithCompletion:(/*^block*/id)arg1;
-(void)becomeActiveWithAnimationSettings:(id)arg1;
-(BOOL)isBiometricAuthenticationAllowed;
-(void)setBiometricAuthenticationAllowed:(BOOL)arg1;
-(BOOL)playsKeypadSounds;
-(BOOL)showsStatusField;
-(BOOL)usesBiometricPresentation;
-(void)setUsesBiometricPresentation:(BOOL)arg1;
-(BOOL)allowsAutomaticBiometricPresentationTransition;
-(void)setAllowsAutomaticBiometricPresentationTransition:(BOOL)arg1;
-(BOOL)biometricPresentationAncillaryButtonsVisible;
-(void)setBiometricPresentationAncillaryButtonsVisible:(BOOL)arg1;
-(BOOL)showsProudLock;
-(void)setShowsProudLock:(BOOL)arg1;
-(long long)passcodeLockViewState;
-(void)setPasscodeLockViewState:(long long)arg1;
-(id<SBFLegibilitySettingsProvider>)backgroundLegibilitySettingsProvider;
-(void)setBackgroundLegibilitySettingsProvider:(id)arg1;
-(BOOL)isScreenOn;
-(void)setScreenOn:(BOOL)arg1;

@end

