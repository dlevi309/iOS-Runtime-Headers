/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AKAuthorizationSubPane.h>
#import <libobjc.A.dylib/LAUIAuthenticationDelegate.h>

@protocol OS_dispatch_group, AKAuthorizationSubPaneConfirmButtonDelegate;
@class NSObject, NSString, AKAuthorizationButton, AKAuthorizationPaneContext, AKAuthorizationPresentationContext, UIStackView, UIView, UILabel, LAUIAuthenticationView;

@interface AKAuthorizationSubPaneConfirmButton : AKAuthorizationSubPane <LAUIAuthenticationDelegate> {

	/*^block*/id _processingStateCompletionHandler;
	NSObject*<OS_dispatch_group> _processingStateGroup;
	BOOL _hasTouchIDOnly;
	BOOL _canPerformBiometricValidation;
	NSString* _bioTextForInactiveState;
	AKAuthorizationButton* _authorizationButton;
	id<AKAuthorizationSubPaneConfirmButtonDelegate> _delegate;
	AKAuthorizationPaneContext* _context;
	AKAuthorizationPresentationContext* _presentationContext;
	UIStackView* _mainStackView;
	UIView* _authorizationButtonContainer;
	UILabel* _bioLabel;
	LAUIAuthenticationView* _bioView;

}

@property (nonatomic,retain) AKAuthorizationPaneContext * context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AKAuthorizationPresentationContext * presentationContext;                     //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,retain) UIStackView * mainStackView;                                                  //@synthesize mainStackView=_mainStackView - In the implementation block
@property (nonatomic,readonly) UIView * authorizationButtonContainer;                                      //@synthesize authorizationButtonContainer=_authorizationButtonContainer - In the implementation block
@property (assign) BOOL hasTouchIDOnly;                                                                    //@synthesize hasTouchIDOnly=_hasTouchIDOnly - In the implementation block
@property (assign) BOOL canPerformBiometricValidation;                                                     //@synthesize canPerformBiometricValidation=_canPerformBiometricValidation - In the implementation block
@property (nonatomic,retain) UILabel * bioLabel;                                                           //@synthesize bioLabel=_bioLabel - In the implementation block
@property (nonatomic,retain) LAUIAuthenticationView * bioView;                                             //@synthesize bioView=_bioView - In the implementation block
@property (nonatomic,copy) NSString * buttonText; 
@property (nonatomic,copy) NSString * bioTextForInactiveState;                                             //@synthesize bioTextForInactiveState=_bioTextForInactiveState - In the implementation block
@property (nonatomic,readonly) AKAuthorizationButton * authorizationButton;                                //@synthesize authorizationButton=_authorizationButton - In the implementation block
@property (assign,nonatomic,__weak) id<AKAuthorizationSubPaneConfirmButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createMainStackView;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(id<AKAuthorizationSubPaneConfirmButtonDelegate>)delegate;
-(NSString *)buttonText;
-(AKAuthorizationPresentationContext *)presentationContext;
-(AKAuthorizationPaneContext *)context;
-(void)setButtonText:(NSString *)arg1 ;
-(void)setDelegate:(id<AKAuthorizationSubPaneConfirmButtonDelegate>)arg1 ;
-(id)_passcodeButtonTitle;
-(UIStackView *)mainStackView;
-(void)setMainStackView:(UIStackView *)arg1 ;
-(void)setPresentationContext:(AKAuthorizationPresentationContext *)arg1 ;
-(LAUIAuthenticationView *)bioView;
-(void)dealloc;
-(void)setContext:(AKAuthorizationPaneContext *)arg1 ;
-(id)initWithPresentationContext:(id)arg1 ;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
-(void)enableAuthorizationCapability:(BOOL)arg1 ;
-(void)setUpButtonToPaneContext:(id)arg1 ;
-(void)setBioTextForInactiveState:(NSString *)arg1 ;
-(void)bioAuthFailWithAlertString:(id)arg1 ;
-(void)showAlertAndContinueWithPassword:(BOOL)arg1 ;
-(void)finishProcessingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidateProcessingState;
-(void)setCanPerformBiometricValidation:(BOOL)arg1 ;
-(BOOL)canPerformBiometricValidation;
-(void)setHasTouchIDOnly:(BOOL)arg1 ;
-(void)_initializeAuthorizationButton;
-(BOOL)_shouldUseSIWAButton;
-(AKAuthorizationButton *)authorizationButton;
-(BOOL)hasTouchIDOnly;
-(void)_authorizationButtonSkipBioSelected:(id)arg1 ;
-(id)_passwordButtonTitle;
-(void)_authorizationButtonWithAccountPasswordSelected:(id)arg1 ;
-(void)_authorizationButtonBioSelected:(id)arg1 ;
-(void)_authorizationWithPasscodeButtonSelected:(id)arg1 ;
-(BOOL)_delegate_validateReadyForAuthorization;
-(void)_switchToBioView:(BOOL)arg1 withEnabled:(BOOL)arg2 showAlert:(BOOL)arg3 alertString:(id)arg4 ;
-(void)_performPasscodeValidations:(/*^block*/id)arg1 ;
-(void)setBioView:(LAUIAuthenticationView *)arg1 ;
-(void)_enableLAUIAuthMechanism;
-(void)_disableBioView;
-(void)_addArrangedSpaceToMainStackView:(double)arg1 ;
-(void)_setupAlertImageWithConstraints:(id)arg1 ;
-(void)_setupLabelWithTitle:(id)arg1 withConstraints:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setupBioButtonWithConstraints:(id)arg1 ;
-(UIView *)authorizationButtonContainer;
-(id)_spaceWithConstant:(double)arg1 ;
-(void)setBioLabel:(UILabel *)arg1 ;
-(void)_updateLabelWithTitle:(id)arg1 ;
-(UILabel *)bioLabel;
-(void)_switchToPasscode;
-(void)_enterProcessingStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_hasTouchIDOnly;
-(void)_waitForTimeInterval:(double)arg1 withGroup:(id)arg2 ;
-(void)_setGlyphViewGestureRecognizerEnabled:(BOOL)arg1 ;
-(void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3 ;
-(void)processBiometricMatchWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isUpgradeFromPassword;
-(NSString *)bioTextForInactiveState;
@end
