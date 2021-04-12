/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>

@class NSArray, UILabel, SKUIGiftCharity, UIImageView, UIView, UIScrollView, UIImage, SKUIGiftAmount;

@interface SKUIDonationAmountView : UIView {

	NSArray* _amountButtons;
	UILabel* _amountDisclaimerLabel;
	SKUIGiftCharity* _charity;
	UILabel* _descriptionLabel;
	UILabel* _legalTextLabel;
	UILabel* _legalText2Label;
	UIImageView* _logoImageView;
	long long _selectedAmountIndex;
	UIView* _separatorView;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) SKUIGiftCharity * charity;                    //@synthesize charity=_charity - In the implementation block
@property (nonatomic,retain) UIImage * logoImage; 
@property (nonatomic,readonly) SKUIGiftAmount * selectedAmount; 
-(void)dealloc;
-(void)layoutSubviews;
-(UIImage *)logoImage;
-(void)setLogoImage:(UIImage *)arg1 ;
-(SKUIGiftAmount *)selectedAmount;
-(SKUIGiftCharity *)charity;
-(id)initWithCharity:(id)arg1 ;
-(void)_amountButtonDown:(id)arg1 ;
-(void)_amountButtonUpInside:(id)arg1 ;
-(void)_amountButtonUpOutside:(id)arg1 ;
@end

