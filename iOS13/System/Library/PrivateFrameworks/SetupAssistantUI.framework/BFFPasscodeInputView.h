/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<BFFPasscodeInputViewDelegate>)delegate;
-(void)setDelegate:(id<BFFPasscodeInputViewDelegate>)arg1 ;
-(void)disable;
-(BOOL)isFirstResponder;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)passcodeField;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(UILabel *)instructions;
-(void)setInstructions:(UILabel *)arg1 ;
-(id)passcode;
-(void)setPasscode:(id)arg1 ;
-(UIButton *)footerButton;
-(void)setFooterButton:(UIButton *)arg1 ;
-(void)footerButtonPressed;
-(UIButton *)instructionsLinkButton;
-(void)setInstructionsLinkButton:(UIButton *)arg1 ;
-(void)_instructionsLinkButtonPressed;
-(id)passcodeDisplayView;
-(void)_layoutForBounds:(CGRect)arg1 ;
-(void)setFooterButtonText:(id)arg1 ;
-(void)setInstructionsLinkText:(id)arg1 ;
-(void)shakePasscode;
@end

