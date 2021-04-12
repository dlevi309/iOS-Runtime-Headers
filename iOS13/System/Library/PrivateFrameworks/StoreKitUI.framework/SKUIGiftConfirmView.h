/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>

@class SKUIGiftConfirmLabeledValue, UILabel, SKUIGiftConfiguration, UIView, UIButton;

@interface SKUIGiftConfirmView : UIView {

	SKUIGiftConfirmLabeledValue* _amountView;
	UILabel* _chargeDisclaimerLabel;
	UILabel* _confirmYourOrderLabel;
	SKUIGiftConfirmLabeledValue* _senderView;
	SKUIGiftConfiguration* _giftConfiguration;
	SKUIGiftConfirmLabeledValue* _itemView;
	SKUIGiftConfirmLabeledValue* _messageView;
	SKUIGiftConfirmLabeledValue* _recipientsView;
	UIView* _rule1;
	UIView* _rule2;
	UIView* _rule3;
	UIView* _rule4;
	UIView* _rule5;
	UIView* _rule6;
	SKUIGiftConfirmLabeledValue* _fromView;
	SKUIGiftConfirmLabeledValue* _sendOnView;
	UIButton* _termsButton;
	SKUIGiftConfirmLabeledValue* _themeNameView;
	UILabel* _totalLabel;

}

@property (nonatomic,readonly) UIButton * termsButton; 
-(void)layoutSubviews;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(UIButton *)termsButton;
-(id)_newLightLabelWithSize:(double)arg1 alpha:(double)arg2 ;
-(id)_termsButton;
-(id)_newBoldLabelWithSize:(double)arg1 ;
@end

