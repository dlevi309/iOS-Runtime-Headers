/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)progress;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(id)_borderColor;
-(CGSize)preferredImageSize;
@end

