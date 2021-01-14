/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKContinuousButton, UITextView, PKPaymentSetupFooterView, OBPrivacyLinkController, NSString, ASCLockupView;

@interface PKPaymentSetupDockView : UIView {

	PKContinuousButton* _continuousButton;
	UITextView* _buttonExplanationTextView;
	PKPaymentSetupFooterView* _footerView;
	BOOL _isBuddyiPad;
	BOOL _requiresAdditionalContinuousButtonPadding;
	long long _context;
	OBPrivacyLinkController* _privacyLink;
	NSString* _buttonExplanationText;
	ASCLockupView* _lockUpView;

}

@property (assign,nonatomic) BOOL requiresAdditionalContinuousButtonPadding;              //@synthesize requiresAdditionalContinuousButtonPadding=_requiresAdditionalContinuousButtonPadding - In the implementation block
@property (nonatomic,readonly) long long context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;                       //@synthesize privacyLink=_privacyLink - In the implementation block
@property (nonatomic,retain) NSString * buttonExplanationText;                            //@synthesize buttonExplanationText=_buttonExplanationText - In the implementation block
@property (nonatomic,readonly) UITextView * buttonExplanationTextView; 
@property (nonatomic,retain) PKContinuousButton * continuousButton; 
@property (nonatomic,retain) PKPaymentSetupFooterView * footerView; 
@property (nonatomic,retain) ASCLockupView * lockUpView;                                  //@synthesize lockUpView=_lockUpView - In the implementation block
-(PKPaymentSetupFooterView *)footerView;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(void)setButtonExplanationText:(NSString *)arg1 ;
-(long long)context;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(void)setFooterView:(PKPaymentSetupFooterView *)arg1 ;
-(void)setRequiresAdditionalContinuousButtonPadding:(BOOL)arg1 ;
-(PKContinuousButton *)continuousButton;
-(void)setContinuousButton:(PKContinuousButton *)arg1 ;
-(void)setLockUpView:(ASCLockupView *)arg1 ;
-(UITextView *)buttonExplanationTextView;
-(CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(BOOL)requiresAdditionalContinuousButtonPadding;
-(NSString *)buttonExplanationText;
-(ASCLockupView *)lockUpView;
@end

