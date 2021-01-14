/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(void)setLogoImage:(UIImage *)arg1 ;
-(SKUIGiftCharity *)charity;
-(UIImage *)logoImage;
-(void)dealloc;
-(SKUIGiftAmount *)selectedAmount;
-(id)initWithCharity:(id)arg1 ;
-(void)_amountButtonDown:(id)arg1 ;
-(void)_amountButtonUpInside:(id)arg1 ;
-(void)_amountButtonUpOutside:(id)arg1 ;
@end

