/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol BFFPasscodeInputViewDelegate;
@class UILabel, UIView, UIButton;

@interface BFFPasscodeInputView : UIView {

	id<BFFPasscodeInputViewDelegate> _delegate;
	UILabel* _instructions;
	UIView* _footerView;
	UIButton* _footerButton;
	UIButton* _instructionsLinkButton;

}

@property (nonatomic,retain) UILabel * instructions;                                        //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,retain) UIButton * instructionsLinkButton;                             //@synthesize instructionsLinkButton=_instructionsLinkButton - In the implementation block
@property (assign,nonatomic,__weak) id<BFFPasscodeInputViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                           //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIButton * footerButton;                                       //@synthesize footerButton=_footerButton - In the implementation block
-(void)disable;
-(BOOL)resignFirstResponder;
-(UIView *)footerView;
-(BOOL)becomeFirstResponder;
-(UILabel *)instructions;
-(CGSize)intrinsicContentSize;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<BFFPasscodeInputViewDelegate>)delegate;
-(id)passcodeField;
-(void)setFooterButtonText:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<BFFPasscodeInputViewDelegate>)arg1 ;
-(void)setPasscode:(id)arg1 ;
-(void)setInstructions:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)passcode;
-(UIButton *)footerButton;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setFooterButton:(UIButton *)arg1 ;
-(void)footerButtonPressed;
-(UIButton *)instructionsLinkButton;
-(void)setInstructionsLinkButton:(UIButton *)arg1 ;
-(void)_instructionsLinkButtonPressed;
-(id)passcodeDisplayView;
-(void)_layoutForBounds:(CGRect)arg1 ;
-(void)setInstructionsLinkText:(id)arg1 ;
-(void)shakePasscode;
@end

