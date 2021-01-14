/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVImageView, CAGradientLayer, UIVisualEffectView;

@interface VUIProductUberBackgroundView : UIView {

	BOOL _isChannelBanner;
	_TVImageView* _imageView;
	long long _configuredBlurInterfaceStyle;
	CAGradientLayer* _maskGradientLayer;
	UIVisualEffectView* _blurEffectView;
	double _contentOffset;
	CGSize _imageSize;

}

@property (assign,nonatomic) long long configuredBlurInterfaceStyle;              //@synthesize configuredBlurInterfaceStyle=_configuredBlurInterfaceStyle - In the implementation block
@property (nonatomic,retain) CAGradientLayer * maskGradientLayer;                 //@synthesize maskGradientLayer=_maskGradientLayer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurEffectView;                 //@synthesize blurEffectView=_blurEffectView - In the implementation block
@property (assign,nonatomic) double contentOffset;                                //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) BOOL isChannelBanner;                                //@synthesize isChannelBanner=_isChannelBanner - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                    //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
-(void)setImageView:(_TVImageView *)arg1 ;
-(CGSize)imageSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(_TVImageView *)imageView;
-(void)setBlurEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurEffectView;
-(void)layoutSubviews;
-(double)contentOffset;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setContentOffset:(double)arg1 ;
-(void)setImageOffset:(double)arg1 ;
-(void)setIsChannelBanner:(BOOL)arg1 ;
-(void)configureBlurWithInterfaceStyle:(long long)arg1 ;
-(BOOL)isChannelBanner;
-(long long)configuredBlurInterfaceStyle;
-(void)setConfiguredBlurInterfaceStyle:(long long)arg1 ;
-(CAGradientLayer *)maskGradientLayer;
-(void)setMaskGradientLayer:(CAGradientLayer *)arg1 ;
@end

