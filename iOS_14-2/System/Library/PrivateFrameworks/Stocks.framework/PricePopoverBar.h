/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(UIColor *)imageMaskColor;
-(void)setPriceString:(id)arg1 ;
-(id)initWithBackgroundImage:(id)arg1 ;
-(void)setPercentChange:(id)arg1 ;
-(void)setImageMaskColor:(UIColor *)arg1 ;
-(void)setChangeImage:(id)arg1 ;
@end

