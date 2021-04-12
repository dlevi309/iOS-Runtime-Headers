/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIProductUberBackgroundViewLayout, _TVImageView, CAGradientLayer, UIView;

@interface VUIProductUberBackgroundView : UIView {

	VUIProductUberBackgroundViewLayout* _layout;
	_TVImageView* _imageView;
	CAGradientLayer* _maskGradientLayer;
	UIView* _blurEffectView;
	double _contentOffset;

}

@property (nonatomic,retain) CAGradientLayer * maskGradientLayer;                      //@synthesize maskGradientLayer=_maskGradientLayer - In the implementation block
@property (nonatomic,retain) UIView * blurEffectView;                                  //@synthesize blurEffectView=_blurEffectView - In the implementation block
@property (assign,nonatomic) double contentOffset;                                     //@synthesize contentOffset=_contentOffset - In the implementation block
@property (nonatomic,retain) VUIProductUberBackgroundViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
-(VUIProductUberBackgroundViewLayout *)layout;
-(void)setLayout:(VUIProductUberBackgroundViewLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(double)contentOffset;
-(void)setContentOffset:(double)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setBlurEffectView:(UIView *)arg1 ;
-(UIView *)blurEffectView;
-(void)setImageOffset:(double)arg1 ;
-(void)configureBlurWithInterfaceStyle:(long long)arg1 ;
-(CAGradientLayer *)maskGradientLayer;
-(void)setMaskGradientLayer:(CAGradientLayer *)arg1 ;
@end

