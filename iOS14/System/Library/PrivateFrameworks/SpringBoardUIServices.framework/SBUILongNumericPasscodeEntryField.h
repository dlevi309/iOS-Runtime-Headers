/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class SBUIButton, UILabel, UIView, UIButton;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {

	SBUIButton* _okButton;
	BOOL _showsOkButton;
	UILabel* _promptLabel;
	BOOL _showsPromptLabel;
	BOOL _firstResponder;
	UIView* _springView;
	UIView* _springViewParent;

}

@property (nonatomic,readonly) UIButton * okButton;                //@synthesize okButton=_okButton - In the implementation block
@property (assign,nonatomic) BOOL showsOkButton;                   //@synthesize showsOkButton=_showsOkButton - In the implementation block
@property (nonatomic,readonly) UILabel * promptLabel;              //@synthesize promptLabel=_promptLabel - In the implementation block
@property (assign,nonatomic) BOOL showsPromptLabel;                //@synthesize showsPromptLabel=_showsPromptLabel - In the implementation block
+(BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
+(BOOL)_usesTextFieldForFirstResponder;
-(UILabel *)promptLabel;
-(BOOL)resignFirstResponder;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(UIButton *)okButton;
-(BOOL)isFirstResponder;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)layoutSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)_resetForFailedPasscode:(BOOL)arg1 ;
-(void)_autofillForBiometricAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(CGSize)_viewSize;
-(void)_okButtonHit;
-(void)_getPasscodeFieldSize:(CGSize*)arg1 okButtonSize:(CGSize*)arg2 ;
-(void)setShowsOkButton:(BOOL)arg1 ;
-(void)setShowsPromptLabel:(BOOL)arg1 ;
-(BOOL)showsOkButton;
-(BOOL)showsPromptLabel;
@end

