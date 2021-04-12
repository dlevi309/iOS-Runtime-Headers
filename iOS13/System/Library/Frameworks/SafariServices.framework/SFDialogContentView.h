/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSArray, UIStackView, UIButton, SFDialogTextField, SFDialogTextView, NSLayoutConstraint, _SFDialogView, NSString;

@interface SFDialogContentView : UIView <UITextFieldDelegate> {

	NSArray* _actionButtons;
	UIStackView* _actionButtonsView;
	UIButton* _closeButton;
	unsigned long long _actionIndexTriggeredByOptionReturnKey;
	unsigned long long _actionIndexTriggeredByEscapeKey;
	unsigned long long _actionIndexTriggeredByReturnKey;
	BOOL _hasAttemptedHardwareKeyboardFocus;
	SFDialogTextField* _inputTextField;
	NSArray* _layoutConstraintsWhenInputIsVisible;
	NSArray* _layoutConstraintsWhenPasswordIsVisible;
	NSArray* _layoutConstraintsWhenInputAndPasswordAreVisible;
	SFDialogTextView* _messageTextView;
	SFDialogTextField* _passwordTextField;
	NSLayoutConstraint* _actionButtonsLeadingConstraintForHorizontalStackAlignment;
	NSLayoutConstraint* _actionButtonsLeadingConstraintForVerticalStackAlignment;
	_SFDialogView* _dialogView;
	NSArray* _actions;

}

@property (assign,nonatomic,__weak) _SFDialogView * dialogView;              //@synthesize dialogView=_dialogView - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endEditing;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(NSArray *)actions;
-(void)updateConstraints;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(id)keyCommands;
-(void)setTitleText:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setMessageText:(id)arg1 ;
-(void)didAppear;
-(void)_actionTriggered:(id)arg1 ;
-(void)setInputText:(id)arg1 placeholder:(id)arg2 ;
-(void)setPasswordText:(id)arg1 placeholder:(id)arg2 ;
-(void)_returnAction:(id)arg1 ;
-(void)_optionReturnAction:(id)arg1 ;
-(void)_escapeAction:(id)arg1 ;
-(void)_focusInputTextField:(id)arg1 ;
-(double)_desiredButtonsWidth;
-(void)_updateActionButtons;
-(void)_setText:(id)arg1 placeholder:(id)arg2 forTextField:(id)arg3 ;
-(BOOL)_usesLoginFormAppearance;
-(void)_invokeDelegateWithSelectedIndex:(unsigned long long)arg1 ;
-(_SFDialogView *)dialogView;
-(void)setDialogView:(_SFDialogView *)arg1 ;
@end

