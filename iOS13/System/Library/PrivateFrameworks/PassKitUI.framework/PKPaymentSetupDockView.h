/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKContinuousButton, UITextView, PKPaymentSetupFooterView, OBPrivacyLinkController, NSString;

@interface PKPaymentSetupDockView : UIView {

	PKContinuousButton* _continuousButton;
	UITextView* _buttonExplanationTextView;
	PKPaymentSetupFooterView* _footerView;
	BOOL _isBuddyiPad;
	BOOL _requiresAdditionalContinuousButtonPadding;
	long long _context;
	OBPrivacyLinkController* _privacyLink;
	NSString* _buttonExplanationText;

}

@property (assign,nonatomic) BOOL requiresAdditionalContinuousButtonPadding;              //@synthesize requiresAdditionalContinuousButtonPadding=_requiresAdditionalContinuousButtonPadding - In the implementation block
@property (nonatomic,readonly) long long context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;                       //@synthesize privacyLink=_privacyLink - In the implementation block
@property (nonatomic,retain) NSString * buttonExplanationText;                            //@synthesize buttonExplanationText=_buttonExplanationText - In the implementation block
@property (nonatomic,readonly) UITextView * buttonExplanationTextView; 
@property (nonatomic,retain) PKContinuousButton * continuousButton; 
@property (nonatomic,retain) PKPaymentSetupFooterView * footerView; 
-(long long)context;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(PKPaymentSetupFooterView *)footerView;
-(void)setFooterView:(PKPaymentSetupFooterView *)arg1 ;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(PKContinuousButton *)continuousButton;
-(void)setContinuousButton:(PKContinuousButton *)arg1 ;
-(void)setButtonExplanationText:(NSString *)arg1 ;
-(UITextView *)buttonExplanationTextView;
-(CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(BOOL)requiresAdditionalContinuousButtonPadding;
-(void)setRequiresAdditionalContinuousButtonPadding:(BOOL)arg1 ;
-(NSString *)buttonExplanationText;
@end

