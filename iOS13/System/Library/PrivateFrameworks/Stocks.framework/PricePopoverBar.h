/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImage, UIImageView, UIColor;

@interface PricePopoverBar : UIView {

	UILabel* _priceLabel;
	UILabel* _percentChangeLabel;
	UIImage* _backgroundImage;
	UIImageView* _priceChangeSignView;
	UIImageView* _percentChangeSignView;
	UIColor* _imageMaskColor;

}

@property (nonatomic,retain) UIColor * imageMaskColor;              //@synthesize imageMaskColor=_imageMaskColor - In the implementation block
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)imageMaskColor;
-(void)setPriceString:(id)arg1 ;
-(id)initWithBackgroundImage:(id)arg1 ;
-(void)setPercentChange:(id)arg1 ;
-(void)setImageMaskColor:(UIColor *)arg1 ;
-(void)setChangeImage:(id)arg1 ;
@end

