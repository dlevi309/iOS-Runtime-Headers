/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIShapeView, UIImageView, UILabel, UIColor, UIImage, NSString;

@interface SKUIOnboardingProgressView : UIView {

	SKUIShapeView* _borderView;
	UIImageView* _imageView;
	double _progress;
	SKUIShapeView* _progressView;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) double progress;                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) UIColor * fillColor; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) CGSize preferredImageSize; 
+(CGSize)preferredImageSizeForViewSize:(CGSize)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)tintColorDidChange;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(UIColor *)fillColor;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)_borderColor;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(NSString *)title;
-(CGSize)preferredImageSize;
@end

